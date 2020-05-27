

#pragma once

#include <algorithm>
#include <stdint.h>
#include <stddef.h>
#include <driver/i2c.h>

namespace Mcucpp
{

#define I2C_EXAMPLE_MASTER_SCL_IO GPIO_NUM_2  /*!< gpio number for I2C master clock */
#define I2C_EXAMPLE_MASTER_SDA_IO GPIO_NUM_14 /*!< gpio number for I2C master data  */

    enum class I2cError : uint8_t
    {
        NoError,
        Overflow,
        Timeout,
        BusError,
        ArbitrationError,
        ArgumentError,
        Nack,
        Busy,
        Unknown,
    };

    struct I2cData
    {
        I2cError error = I2cError::NoError;
    };

    class EspI2c
    {
    public:
        static constexpr int MaxRetries = 3;
        static I2cData _data;
        static I2cError WriteU8(uint16_t devAddr, uint8_t regAddr, uint8_t data)
        {
            for (int i = 0; i < MaxRetries; i++)
            {
                _data.error = I2cError::NoError;
                //ESP_LOGI("I2C", "I2C write: %d %d %d", devAddr, regAddr, data);
                i2c_cmd_handle_t cmd = i2c_cmd_link_create();
                i2c_master_start(cmd);
                i2c_master_write_byte(cmd, devAddr << 1 | I2C_MASTER_WRITE, true);
                i2c_master_write_byte(cmd, regAddr, true);
                i2c_master_write_byte(cmd, data, true);
                i2c_master_stop(cmd);
                int ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_RATE_MS);
                i2c_cmd_link_delete(cmd);
                if (ret == ESP_OK)
                {
                    break;
                }
                ESP_LOGE("I2C", "I2C error: %d", ret);
                _data.error = I2cError::Unknown;
            }
            return _data.error;
        }

        static I2cError Write(uint16_t devAddr, uint16_t regAddr, const uint8_t *data, int size)
        {
            for (int i = 0; i < MaxRetries; i++)
            {
                _data.error = I2cError::NoError;
                //ESP_LOGI("I2C", "I2C write: %d %d %d - bytes", devAddr, regAddr, size);
                i2c_cmd_handle_t cmd = i2c_cmd_link_create();
                i2c_master_start(cmd);
                i2c_master_write_byte(cmd, devAddr << 1 | I2C_MASTER_WRITE, true);
                i2c_master_write_byte(cmd, regAddr, true);
                i2c_master_write(cmd, (uint8_t *)data, size, true);
                i2c_master_stop(cmd);
                int ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_RATE_MS);
                i2c_cmd_link_delete(cmd);
                if (ret == ESP_OK)
                {
                    break;
                }
                ESP_LOGE("I2C", "I2C error: %d", ret);
                _data.error = I2cError::Unknown;
            }
            return _data.error;
        }

        static inline I2cError GetError() { return _data.error; }

        static void Init()
        {
            i2c_config_t conf;
            conf.mode = I2C_MODE_MASTER;
            conf.sda_io_num = I2C_EXAMPLE_MASTER_SDA_IO;
            conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
            conf.scl_io_num = I2C_EXAMPLE_MASTER_SCL_IO;
            conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
            conf.clk_stretch_tick = 300; // 300 ticks, Clock stretch is about 210us, you can make changes according to the actual situation.
            ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0, conf.mode));
            ESP_ERROR_CHECK(i2c_param_config(I2C_NUM_0, &conf));
        }
    };

    I2cData EspI2c::_data;
} // namespace Mcucpp