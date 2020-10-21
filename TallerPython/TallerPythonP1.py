import numpy as np


def max_min(num1, num2, num3, num4, num5, num6):

    numeros = np.array([num1, num2, num3, num4, num5, num6])
    maximo = 0

    for i in range(0, 6):
        if numeros[i] > maximo:
            maximo = numeros[i]

    minimo = maximo
    for i in range(0, 6):
        if numeros[i] < minimo:
            minimo = numeros[i]

    print("El número menor es el " + str(minimo))
    print("El número mayor es el " + str(maximo))


print("El programa devuelve el número mayor y el número menor entre 6 números ingresados por teclado.")
print(" ")

numero1 = int(input("Ingrese un número: "))
numero2 = int(input("Ingrese un número: "))
numero3 = int(input("Ingrese un número: "))
numero4 = int(input("Ingrese un número: "))
numero5 = int(input("Ingrese un número: "))
numero6 = int(input("Ingrese un número: "))
print(" ")

max_min(numero1, numero2, numero3, numero4, numero5, numero6)
