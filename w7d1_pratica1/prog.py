
def getlengthList(wordList):
  return list(map(lambda x: len(x), wordList))

text = "La tele resta spenta e non la guardo piu ho un nodo in gola che e difficile mandare giu fumo un po sposto via la tenda"
wordList = text.split(' ')
print(wordList)
print(getlengthList(wordList)) 
