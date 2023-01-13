#!/usr/bin/python3
import uncompyle6
with open("crackme4.pyc", "rb") as f:
    bytecode = f.read()
print(uncompyle6)
