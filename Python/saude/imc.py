"""
Cálculo do IMC (Índice de Massa Corporal)
"""

def imc(peso, altura):
    """
    Calcula o IMC (Índice de Massa Corporal)

    peso: peso em kg.
    altura: altura em metros.
    return: cálculo IMC.
    """
    return peso / pow(altura, 2)

def classifica_imc(imc):
    """
    Classifica o IMC (Índice de Massa Corporal)

    imc: IMC calculado.
    return: classificação do IMC.
    """
    if imc < 16:
        return "Baixo peso Grau III"
    elif imc < 17:
        return "Baixo peso Grau II"
    elif imc < 18.5:
        return "Baixo peso Grau I"
    elif imc < 25:
        return "Peso ideal"
    elif imc < 30:
        return "Sobrepeso"
    elif imc < 35:
        return "Obesidade Grau I"
    elif imc < 40:
        return "Obesidade Grau II"
    else:
        return "Obesidade Grau III"
    
def main():
    """
    Função principal.
    """
    peso = float(input("Peso (kg): "))
    altura = float(input("Altura (m): "))
    valor_imc = imc(peso, altura)
    
    print(f"IMC: {valor_imc:.2f}")
    print(f"Classificação: {classifica_imc(valor_imc)}")

if __name__ == "__main__":
    main()