from math import pi

valD = float(input("Inserisci il valode di D/B: ")) 
valH = float(input("Inserisci il valode di H: ")) 

areaQuadrato = valD*4
circonferenzaCerchio = 2*pi*valD
perimetroRettangolo = 2*valD + 2*valH

print(f'Area del quadrato di lato D: {areaQuadrato}')
print(f'Circonferenza del cerchio di raggio D: {circonferenzaCerchio}')
print(f'Perimetro del rettangolo di base B e altezza H: {perimetroRettangolo}')
