#pragma once

struct UrlReader
{
    const char *_url;

    UrlReader(const char *url)
        : _url(url)
    {
    }

    wchar_t operator*()
    {
        wchar_t c = _url[0];
        if (c == '+')
        {
            c = ' ';
        }
        else if (c == '%')
        {
            c = 0;
            for (int i = 1; i < 3; i++)
            {
                int delta = 0;
                if (_url[i] >= '0' && _url[i] <= '9')
                {
                    delta = '0';
                }
                else if ((_url[i] >= 'A' && _url[i] <= 'F'))
                {
                    delta = 'A' - 10;
                }
                else if ((_url[i] >= 'a' && _url[i] <= 'f'))
                {
                    delta = 'a' - 10;
                }
                else
                {
                    c = 0;
                    break;
                }
                c = c * 16 + (_url[i] - delta);
            }
        }
        return c;
    }

    UrlReader &operator++()
    {
        if (_url[0] != 0)
        {
            if (_url[0] == '%')
            {
                if (_url[1] && _url[2])
                {
                    _url += 3;
                }
            }
            else
            {
                _url++;
            }
        }
        return *this;
    }

    UrlReader operator++(int)
    {
        UrlReader temp(_url);
        if (_url[0] != 0)
        {
            if (_url[0] == '%')
            {
                if (_url[1] && _url[2])
                {
                    _url += 3;
                }
            }
            else
            {
                _url++;
            }
        }
        return temp;
    }
};