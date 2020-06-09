import os.path
import glob
import zlib

files = glob.glob(
    os.path.join(
    os.path.dirname(
    os.path.dirname(
    os.path.realpath(__file__))), 'main/html', "*.*"))


for fileName in files:
    with open(fileName, "rb") as file:
        data = file.read()
        compressedData = zlib.compress(data, 9)
        recource_name = os.path.basename(fileName).replace('.', '_')

        resourceFileName =  os.path.join(
            os.path.dirname(
            os.path.dirname(
            os.path.realpath(fileName))), 'resources', 
                recource_name + '.h')
        with open(resourceFileName, "w") as resFile:
            resFile.write('#pragma once\n\n')
            resFile.write('const char %s[] = {\n' % recource_name)
            
            for i, byte in enumerate(compressedData):
                if i % 16 == 0:
                    resFile.write('\n\t')
                resFile.write('0x%02x, ' % byte)
            resFile.write('0x00, 0x00')
            resFile.write('\n};\n\n')