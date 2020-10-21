def sumpares():
    sumatoria = 0

    for i in range(0, 101):
        if i % 2 == 0:
            sumatoria = sumatoria + i

    print("La sumatoria de los números pares entre el 0 y el 100 es igual a: " + str(sumatoria))


sumpares()
