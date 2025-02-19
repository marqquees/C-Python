"""
Número Primo

Número primo é um número natural, maior que 1, apenas divisível por 1 e por ele mesmo.
"""

def numero_primo(n):
    if n < 2:
        return False
    else:
        for i in range(2, n):
            if n % i == 0:
                return False
        return True
    
for i in range(0, 20):
    if numero_primo(i):
        print(i, end=" ")