def maior_numero(numero):
    maior = numero[0]
    for i in range(len(numero)):
        if numero[i] > maior:
            maior = numero[i]
    return maior

def mai_numero(numero):
    return max(numero)

print("MAIOR NÚMERO\n")

nome_numero = ["primeiro","segundo","terceiro"]
numero = []

for i in range(3):
    numero.append(int(input(f"Digite o {nome_numero[i]} número: ")))

print(f"\nMaior número: {maior_numero(numero)} | {mai_numero(numero)}")