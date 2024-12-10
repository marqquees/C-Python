def menor_numero(numero):
    menor = numero[0]
    for i in range(len(numero)):
        if numero[i] < menor:
            menor = numero[i]
    return menor

def men_numero(numero):
    return min(numero)

print("MENOR NÚMERO\n")

nome_numero = ["primeiro","segundo","terceiro"]
numero = []

for i in range(3):
    numero.append(int(input(f"Digite o {nome_numero[i]} número: ")))

print(f"\nMenor número: {menor_numero(numero)} | {men_numero(numero)}")