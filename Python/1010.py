linha1 = raw_input().split(" ")
linha2 = raw_input().split(" ")

n1 = [float(numero) for numero in linha1] 
n2 = [float(numero) for numero in linha2] 

a,b,c = n1
d,e,f = n2

print "VALOR A PAGAR: R$ %.2f" % (b*c + e*f)