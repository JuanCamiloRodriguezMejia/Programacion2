def vocales(letra):

    minusculas = ['a', 'e', 'i', 'o', 'u']
    mayusculas = ['A', 'E', 'I', 'O', 'U']

    if letra in mayusculas:
        print("Verdadero")

    elif letra in minusculas:
        print("Falso")

    else:
        print("La letra es una consonante.")


print("El programa muestra Verdadero al ingresar una vocal mayúscula")
print("y falso si es una vocal minúscula.")
letra1 = str(input("Ingrese una vocal: "))
vocales(letra1)
