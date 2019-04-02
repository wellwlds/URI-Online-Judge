tempo = input()

horas = 0
minutos = 0
segundos = 0

while tempo >0:
	if tempo >=3600:
		tempo = tempo - 3600
		horas = horas + 1
	elif tempo >=60:
		tempo = tempo - 60
		minutos = minutos + 1
	else:
		segundos = segundos + tempo
		tempo = 0

print "%d:%d:%d" % (horas,minutos,segundos)