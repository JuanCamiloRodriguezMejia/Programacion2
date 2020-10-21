def secuencia():
    print("El programa pide números hasta que la suma sea par.")
    print(" ")

    a = int(input("Ingrese un número: "))
    b = int(input("Ingrese otro número: "))
    while (a+b) % 2 != 0:
        print(str(a) + " + " + str(b) + " = " + str(a+b))
        print("La suma es impar.")
        print(" ")
        a = b
        b = int(input("Ingrese otro número: "))
    print(str(a) + " + " + str(b) + " = " + str(a+b))
    print("La suma es par.")


secuencia()
