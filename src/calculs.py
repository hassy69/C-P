def calculer():
    num1 = int(input("Entrez le premier nombre: "))
    num2 = int(input("Entrez le deuxième nombre: "))
    op = input("Entrez un opérateur (+, -, *, /, %, &, |, ~): ")
    if op == '+':
        return num1 + num2
    elif op == '-':
        return num1 - num2
    elif op == '*':
        return num1 * num2
    elif op == '/':
        if num2 != 0:
            return num1 / num2
        else:
            return "Erreur: Division par zéro"
    elif op == '%':
        if num2 != 0:
            return num1 % num2
        else:
            return "Erreur: Division par zéro"
    elif op == '&':
        return num1 & num2
    elif op == '|':
        return num1 | num2
    elif op == '~':
        return ~num1
    else:
        return "Erreur: Opérateur non reconnu"

print(f"Résultat: {calculer()}")
