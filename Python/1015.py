linha1 = raw_input().split(" ")
linha2 = raw_input().split(" ")

n1 = [float(numero) for numero in linha1] 
n2 = [float(numero) for numero in linha2] 

x1,y1 = n1
x2,y2 = n2

print "%.4f" % ( ( ( ( x2 - x1 ) ** 2 ) + ( ( y2 - y1 ) ** 2 ) ) ** (1.0/2.0) )