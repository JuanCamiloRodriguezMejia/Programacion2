def pares_impares(numeros):
    numpares = 0
    numimpares = 0

    for i in numeros:
        if i % 2 == 0:
            numpares += 1

        else:
            numimpares += 1

    print("Hay " + str(numpares) + " números pares " + "y " + str(numimpares) + " números impares.")


numeros1 = []
print("El programa devuelve la cantidad de pares e impares en un intervalo de 20 números.")
print(" ")

for j in range(0, 20):
    numeros1.append(int(input("Ingrese un número: ")))
print(" ")

pares_impares(numeros1)
