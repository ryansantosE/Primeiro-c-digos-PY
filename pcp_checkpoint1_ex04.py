idade = int(input(f"digite sua idade em dias:"))

anos = idade // 365

resto_de_dias_pos_anos = idade % 365
meses = resto_de_dias_pos_anos // 30

dias = resto_de_dias_pos_anos % 30

print(f"Sua idade é:{anos} anos, {meses} meses, {dias} dias.")