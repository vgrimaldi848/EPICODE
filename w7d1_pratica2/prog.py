from random import choice

def genPassword(passwordLength):
    valueList = """qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBN"""
    charList = []
    for i in range (0,passwordLength,1):
        charList.append(choice(valueList))
    return "".join(charList)

secret = genPassword(20)

print('\n', secret, '\n', len(secret))
