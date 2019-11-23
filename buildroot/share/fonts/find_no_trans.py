#!/opt/local/bin/python

import os
import re

targetFileName = 'language_zh_CN.h'

enFileName = 'language_en.h'
baseDir = '/Users/gaoxiang/GIT/coolflyreg/MulbotFramework/MulbotFirmware/src/lcd/language'

pattern = re.compile('(.*PROGMEM Language_Str ([A-Z0-9_]+).*)')

enFile = "{0}/{1}".format(baseDir, enFileName)
targetFile = "{0}/{1}".format(baseDir, targetFileName)

def readFileContent(path):
    fileHandle = open(path, 'r')
    fileContent = fileHandle.read()
    fileHandle.close()
    return fileContent

enContent = readFileContent(enFile)
targetContent = readFileContent(targetFile)

enResult = pattern.findall(enContent)
targetResult = pattern.findall(targetContent)

for enItem in enResult:
    found = False
    for targetItem in targetResult:
        if targetItem[1] == enItem[1]:
            found = True
            continue
    if found == False:
        print("{0}".format(enItem[0]))





