ano = int(input("Ano: "))

if ano < 1582:
    print("Não está dentro do período do calendário Gregoriano.")
else:
    if ano % 4 != 0:
        print("Ano Comum.")
    elif ano % 100 != 0:
        print("Ano Bissexto.")
    elif ano % 400 != 0:
        print("Ano Comum.")
    else:
        print("Ano Bissexto.")