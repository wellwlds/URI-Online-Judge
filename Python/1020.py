tempo = input()

ano = 0
mes = 0
dia = 0

ano = tempo // 365
mes = ((tempo % 365) // 30)
dia = int(((tempo % 365) % 30))

print "%d ano(s)" % ano
print "%d mes(s)" % mes
print "%d dia(s)" % dia