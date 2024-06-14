from math import pi

valD = float(input("Inserisci il valode di D/B: ")) 
valH = float(input("Inserisci il valode di H: ")) 

areaQuadrato = round(valD*4,2)
circonferenzaCerchio = round(2*pi*valD,2)
perimetroRettangolo = round(2*valD + 2*valH,2)

print(f'Area del quadrato di lato D: {areaQuadrato}')
print(f'Circonferenza del cerchio di raggio D: {circonferenzaCerchio}')
print(f'Perimetro del rettangolo di base B e altezza H: {perimetroRettangolo}')
