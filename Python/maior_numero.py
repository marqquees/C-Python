
print("MAIOR NÚMERO")

nome_numero = {"primeiro","segundo","terceiro"}
numero = [3]

def maior_numero(numero):
    maior = numero[0]
    for i in range(len(numero)):
        if numero[i] > maior:
            maior = numero[i]

for i in range(3):
    numero[i].append(float(input(f"Digite o {[nome_numero[i]]} número: ")))

print(f"O maior número é {maior_numero(numero)}")