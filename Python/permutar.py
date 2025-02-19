"""
Permutação de Lista.
"""

lista = []

while (n := int(input("Digite um número: "))) >= 0:
    lista.append(n)
    print("Digite um número negativo para encerrar.")
print(f"Lista a Permutar: {lista}")

for i in range(len(lista) // 2):
    lista[i], lista[-i-1] = lista[-i-1], lista[i]
print(f"Lista Permutada: {lista}")