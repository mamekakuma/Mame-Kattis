len = int( input() )
lis = list(map(int , input().split() ))
lis.sort( reverse = True )
disc = 0
for i in range(2 , len ,3 ):
    disc += lis[i]
print( disc )