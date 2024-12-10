def soma(numero1: float, numero2: float, numero3: float) -> float:
    return numero1 + numero2 + numero3

print("SOMA\n")

numero = []
sequencia_numeros = ["primeiro", "segundo", "terceiro"]

for i in range(3):
    numero.append(float(input(f"Digite o {sequencia_numeros[i]} número: ")))

print(f"\nSoma: {soma(numero[0], numero[1], numero[2])}")

