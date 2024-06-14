from math import pi

shapedict = {1:"Quadrato", 2:"Cerchio", 3:"Rettangolo"}
shapelst = [1, 2, 3]
iter = 0

while len(shapelst)>0:
    print("\nSeleziona una delle figure disponibili di seguito:\n")
    for i in shapedict.keys():
        if i in shapelst:
            print(f"\t{i}.\t{shapedict[i]}")

    userSelection = int(input("\n$> "))

    if (userSelection == 1):
        if iter == 0:
            userVal = float(input("\nInseriesci il lato del quadrato.\n$> "))
        print("\nIl perimetro del quadrato e': ", userVal*4)
        userVal = userVal*userVal
        print("L'area del quadrato e': ", userVal)
        iter = iter + 1
    elif (userSelection == 2):
        if iter == 0:
            userVal = float(input("\nInseriesci il raggio del cerchio.\n$> "))
        print("\nLa circonferenza del cerchio e': ", 2*pi*userVal)
        userVal = pi*userVal*userVal
        print("\nL'area del cerchio e': ", userVal)
        iter = iter + 1
    elif (userSelection == 3):
        if iter == 0:
            base = float(input("\nInseriesci la base del rettangolo.\n$> "))
            userVal = base
        print("\nIl perimetro del rettangolo e': ", 3*userVal)
        userVal=userVal*(userVal/2)
        print("\nL'area del rettangolo e': ", userVal)
        iter = iter + 1
    else:
        print("Valore non valido! Adios :P\n")
        exit

    shapelst.remove(userSelection)
