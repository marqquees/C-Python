"""
Algortimo de Ordenação Bubble Sort
"""

lista = [5, 3, 8, 1, 2, 7]
houve_troca = True
passo = 0

print(f'Lista Original: {lista}\n')

while houve_troca:
    houve_troca = False
    for i in range(len(lista) - 1):
        if lista[i] > lista[i + 1]:
            houve_troca = True
            passo += 1
            lista[i], lista[i + 1] = lista[i + 1], lista[i]
            print(f"{lista} | {passo}")

print(f'\nPasso(s): {passo}')
print(f'Lista Ordenada: {lista}')