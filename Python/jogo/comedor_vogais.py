"""
Comedor de Vogais

Escreva um programa que receba uma palavra e retorne a palavra sem as vogais.
"""

letras_sem_vogais = ""
palavra = input("Digite uma palavra: ")
palavra = palavra.upper()

for letra in palavra:
    if letra in "AEIOU":
        continue
    else:
        letras_sem_vogais += letra
print(letras_sem_vogais)
        
    