entrada = input()

cem = 0
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
dois = 0
um = 0
c50 = 0
c25 = 0
c10 = 0 
c5 = 0
c1 = 0

while entrada > 0:	
	if entrada >= 100.0:
		entrada = entrada - 100.0
		cem = cem + 1
	elif entrada >= 50.0:
		entrada = entrada - 50.0
		cinquenta = cinquenta + 1
	elif entrada >= 20.0:
		entrada = entrada - 20.0
		vinte = vinte + 1
	elif entrada >= 10.0:
		entrada = entrada - 10.0
		dez = dez + 1
	elif entrada >= 5.0:
		entrada = entrada - 5.0
		cinco = cinco + 1
	elif entrada >= 2.0:
		entrada = entrada - 2.0
		dois = dois + 1
	elif entrada >= 1.0:
		entrada = entrada - 1.0
		um = um + 1
	elif entrada >= 0.5:
		entrada = entrada - 0.50
		c50 = c50 + 1
	elif entrada >= 0.25:
		entrada = entrada - 0.25
		c25 = c25 + 1
	elif entrada >= 0.1:
		entrada = entrada - 0.1
		c10 = c10 + 1
	elif entrada >= 0.05:
		entrada = entrada - 0.05
		c5 = c5 + 1
	elif entrada >= 0.01:
		entrada = 0
		c1 = c1 + 1

print "NOTAS:"
print "%d nota(s) de R$ 100.00" % cem
print "%d nota(s) de R$ 50.00" % cinquenta
print "%d nota(s) de R$ 20.00" % vinte
print "%d nota(s) de R$ 10.00" % dez
print "%d nota(s) de R$ 5.00" % cinco
print "%d nota(s) de R$ 2.00" % dois

print "MOEDAS:"
print "%d moeda(s) de R$ 1.00" % um
print "%d moeda(s) de R$ 0.50" % c50
print "%d moeda(s) de R$ 0.25" % c25
print "%d moeda(s) de R$ 0.10" % c10
print "%d moeda(s) de R$ 0.05" % c5
print "%d moeda(s) de R$ 0.01" % c1