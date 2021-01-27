#!/usr/bin/python3
'''log parser algorithm'''


import sys
import fileinput
from pathlib import Path


mydict = {
    "200": 0,
    "301": 0,
    "400": 0,
    "401": 0,
    "403": 0,
    "404": 0,
    "405": 0,
    "500": 0}
file_size = 0
try:
    for n, line in enumerate(fileinput.input()):
        _line = line.split()
        if len(_line) > 2:
            status_code = _line[len(_line) - 2]
            file_size += int(_line[len(_line) - 1])
            if status_code in mydict:
                mydict[str(status_code)] += 1
        if n % 10 == 0:
            print("File size: {}".format(file_size))
            for k, v in mydict.items():
                if v > 0:
                    print("{}: {}".format(k, v))
except KeyboardInterrupt:
    pass
finally:
    print('File size: {}'.format(file_size))
    for k, v in mydict.items():
        if v > 0:
            print("{}: {}".format(k, v))
