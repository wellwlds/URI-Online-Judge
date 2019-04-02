entrada = input()

cem = 0
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
dois = 0
um = 0

print entrada
while entrada > 0:
	if entrada >= 100:
		entrada = entrada - 100
		cem = cem + 1
	elif entrada >= 50:
		entrada = entrada - 50
		cinquenta = cinquenta + 1
	elif entrada >= 20:
		entrada = entrada - 20
		vinte = vinte + 1
	elif entrada >= 10:
		entrada = entrada - 10
		dez = dez + 1
	elif entrada >= 5:
		entrada = entrada - 5
		cinco = cinco + 1
	elif entrada >= 2:
		entrada = entrada - 2
		dois = dois + 1
	elif entrada >= 1:
		entrada = entrada - 1
		um = um + 1

print "%d nota(s) de R$ 100,00" % cem
print "%d nota(s) de R$ 50,00" % cinquenta
print "%d nota(s) de R$ 20,00" % vinte
print "%d nota(s) de R$ 10,00" % dez
print "%d nota(s) de R$ 5,00" % cinco
print "%d nota(s) de R$ 2,00" % dois
print "%d nota(s) de R$ 1,00" % um