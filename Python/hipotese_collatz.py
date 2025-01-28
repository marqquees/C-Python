"""
Hipotese de Collatz.

A hipótese de Collatz é um problema matemático sem solução que foi proposto por Lothar Collatz em 1937. 
A hipótese é definida da seguinte forma:

1. Comece com um número inteiro positivo qualquer.
2. Então, se ele for par, divida por 2.
3. Se for ímpar, multiplique por 3 e adicione 1.
4. Repita o processo indefinidamente.
5. A hipótese diz que, para qualquer número inteiro positivo que você escolher, você eventualmente chegará a 1.
"""

etapas = 0
numero = int(input("Digite um número inteiro positivo: "))

while numero != 1:
    if numero % 2 == 0:
        numero = numero / 2
    else:
        numero = numero * 3 + 1
    etapas += 1
    print(numero)

print(f"\nEtapas necessárias: {etapas:.0f}")