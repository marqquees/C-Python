numero_secreto = 777

print(
"""
+===================================+
| Bem vindo ao meu jogo, trouxa!    |
| Insira um número inteiro e tente  |
| adivinhar o número que eu tenho   |
| escolhido para você.             |
| Então, qual é o número secreto?   |
+===================================+
""")

palpite = int(input("Qual é o seu palpite? "))

while palpite != numero_secreto:
    print("Ha ha! Você está preso no meu loop!")
    palpite = int(input("Qual é o seu novo palpite? "))
if palpite == numero_secreto:
    print("Muito bem, trouxa! Você está livre agora!")
