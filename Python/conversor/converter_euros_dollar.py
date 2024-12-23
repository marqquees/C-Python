
def cambio_dollar(valor_a_cabiar):
    return valor_a_cabiar * 0.95

def cambio_euro(valor_a_cabiar):
    return valor_a_cabiar * 1.05

print("CAMBIO (EURO DOLLAR)")

valor_a_cabiar = float(input("\nValor a cambiar: "))
print("\n1. DOLLAR")
print("2. EURO")
op = int(input("\nDigite a opção: "))

while op < 1 or op > 2:
    op = int(input("\nDigite uma opção válida (1 ou 2).\nDigite outro número: "))

if op == 1:
    print(f"\nO valor {valor_a_cabiar} cambiado para dollar é {cambio_dollar(valor_a_cabiar)}")
elif op == 2:
    print(f"\nO valor {valor_a_cabiar} cambiado para euro é {cambio_euro(valor_a_cabiar)}")