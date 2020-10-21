def multprom(lista):

    multiplicacion = 1
    sumatoria = 0
    cont = 0

    for i in lista:
        multiplicacion = multiplicacion * i
        sumatoria = sumatoria + i
        cont = cont + 1

    promedio = sumatoria/cont

    print("La multiplicación es: " + str(multiplicacion))
    print("El promedio es: " + str(promedio))


lista1 = []
print("El programa devuelve la multiplicación y promedio de N números.")
print(" ")
n = int(input("¿Cuántos números desea usar? N="))

for j in range(0, n):
    lista1.append(float(input("Ingrese un número: ")))
print(" ")

multprom(lista1)
