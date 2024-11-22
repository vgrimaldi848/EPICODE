import requests

inStr = 'aaabbccddd'

def encode_str(inStr):
    outStr = ''
    charArray = [c for c in inStr]
    KeysArray = sorted(set(charArray).union())
    aggrCount = {}
    for x in KeysArray:
        aggrCount[x] = charArray.count(x)
    for x in KeysArray:
        outStr = f'{outStr}{x}{aggrCount[x]}'
    return outStr

def encode_str2(inStr):
    outStr = ''
    aggrCount = {}
    for c in inStr:
        if c in aggrCount:
            aggrCount[c] += 1
        else:
            aggrCount[c] = 1
    for x in sorted(aggrCount.keys()):
        outStr = f'{outStr}{x}{aggrCount[x]}'
    return outStr

# print(encode_str(inStr), encode_str2(inStr))    

s = requests.session()
r = s.get('https://ineapple.com/known_pass1')
t, s = r.raw, r.status_code
print(t)