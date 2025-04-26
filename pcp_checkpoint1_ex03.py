ano = int(input(f"Digite a quantidade de anos que voce tem, referente a idade:"))
mes = int(input(f"Digite a quantidade de meses que voce tem, referente a idade:"))
dia = int(input(f"Digite a quantidade de dias que voce tem, referente a idade:"))

ano1 = ano * 365
mes1 = mes * 30
dia1 = ano * 1

total_dias = (ano1) + (mes1) + (dia1)


print(f"A quantidade de dias que voce ja viveu e: {total_dias}.")
