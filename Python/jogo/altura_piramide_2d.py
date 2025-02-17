"""
Altura da Pirâmide Plana (2D)

Dado um número de blocos, o programa calcula a altura da pirâmide plana (2D) e o número de blocos restantes.
"""

bloco = int(input("Número de Bloco(s): "))
altura = 0 

while altura < bloco:
    altura = altura + 1
    bloco = bloco - altura
    if bloco < 0:
        altura = altura - 1
        break

print(f"Altura da Pirâmide: {altura}")
print(f"Bloco(s) restante(s): {bloco}")