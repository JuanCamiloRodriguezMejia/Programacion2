def meses(mes):
    lista = ['enero', 'febrero', 'marzo', 'abril', 'mayo', 'junio', 'julio', 'agosto', 'septiembre', 'octubre',
             'noviembre', 'diciembre']
    mes = mes.lower()
    for i in range(0, 12):
        if mes == lista[i]:
            mes = mes.capitalize()
            print(mes + " es el mes número " + str(i+1) + ".")


print("El programa muestra el número del mes según el mes que ingrese.")
mes1 = str(input("Ingrese un mes: "))
print(" ")

meses(mes1)
