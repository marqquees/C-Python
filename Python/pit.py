receita = float(input("Rendimento Anual: "))

if receita < 85528:
    imposto = (receita * 0.18) - 556.02
elif receita > 85528:
    imposto = 14839.02 + (receita - 85528) * 0.32
if imposto < 0:
    imposto = 0

taxa = round(imposto, 0)
print("Taxa:", taxa, "thalers.")