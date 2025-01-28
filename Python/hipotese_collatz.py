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

contador_etapas = 0
c0 = int(input("Digite um número: "))

while c0 != 1:
    if c0 % 2 == 0:
        c0 = c0 / 2
    else:
        c0 = 3 * c0 + 1
    contador_etapas += 1
    print(c0)

print("Número de Etapas:", contador_etapas)