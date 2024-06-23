from random import choice
from string import ascii_uppercase, ascii_lowercase, ascii_letters, digits

def genPassword(passwordLength):
    valueList = ascii_letters + ascii_lowercase + ascii_uppercase + digits
    charList = []
    for i in range (0,passwordLength,1):
        charList.append(choice(valueList))
    return "".join(charList)

secret = genPassword(20)

print('\n', secret, '\n', len(secret))
