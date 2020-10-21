def pares(numeros):

    multiplicacion = 1
    contpares = 0

    for i in numeros:
        if i % 2 == 0:
            multiplicacion = multiplicacion * i
            contpares = contpares + 1

    print("La multiplicación es: " + str(multiplicacion) + ".")
    print("Hay " + str(contpares) + " números pares.")


numeros1 = []
print("El programa devuelve la multiplicación y cantidad de pares de N números.")
print(" ")
n = int(input("¿Cuántos números desea usar? N="))
print(" ")

for j in range(0, n):
    numeros1.append(int(input("Ingrese un número: ")))
print(" ")

pares(numeros1)
