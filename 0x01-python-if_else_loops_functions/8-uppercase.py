#!/usr/bin/python3
def uppercase(str):
    for ch in range(len(str)):
        upper = ord(str[ch])
        if upper >= 97 and upper <= 122:
            upper = upper - 32
        tochar = chr(upper)
        print("{}".format(tochar), end="")
    print()
