"""
Utilizando do Algoritmo de Zeller, escreva e teste uma função que usa três argumentos (um dia, um mês e um ano) e 
retorna o dia da semana para a data fornecida.
"""


def dia_semana(dia, mes, ano):

    dia_semana = {
        0: "\nSábado.",
        1: "\nDomingo.",
        2: "\nSegunda-feira.",
        3: "\nTerça-feira.",
        4: "\nQuarta-feira.",
        5: "\nQuinta-feira.",
        6: "\nSexta-feira."
    }

    if mes < 3:
        mes = mes + 12
        ano = ano - 1
    
    k = ano % 100
    j = ano // 100
    h = (dia + (13 * (mes + 1)) // 5 + k + (k // 4) + (j // 4) + 5 * j) % 7

    return dia_semana[h]

print("Dia da Semana\n")

dia = int(input("Digite o Dia: "))
mes = int(input("Digite o Mês: "))
ano = int(input("Digite o Ano: "))
print(dia_semana(dia, mes, ano)) 