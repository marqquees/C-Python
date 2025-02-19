"""
Escreva uma função que usa dois argumentos (o ano e o mês) e retorne o número de dias para o determinado par de ano-mês, 
embora apenas fevereiro seja sensível ao valor do ano, sua função deve ser universal.
"""

def ano_bissexto(ano):
    if ano % 4 != 0:
        return False
    elif ano % 100 != 0:
        return True
    elif ano % 400 != 0:
        return False
    else:
        return True

def quantos_dias(ano, mes):
    dias_meses = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    if (mes < 1 or mes > 12) or ano < 1582:
        print("\nMês inválido.")
    elif ano_bissexto(ano) and mes == 2:
        dias_meses[1] = 29
        print(f"\nAno Bissexto | {dias_meses[mes - 1]} dias")
    else:
        print(f"\nAno Comum | {dias_meses[mes - 1]} dias")

print("Quantos Dias?\n")

ano = int(input("Digite o Ano: "))
mes = int(input("Digite o Mês: "))
quantos_dias(ano, mes)