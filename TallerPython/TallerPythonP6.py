def descuento(valor):

    if valor <= 30000:
        precio = valor

    if valor > 30000:
        precio = valor-(valor*0.2)

    return precio


valor1 = int(input("Ingrese el valor de la compra: "))
precio1 = descuento(valor1)
print("El precio final es de " + str(precio1) + " COP.")
