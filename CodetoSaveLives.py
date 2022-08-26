len = int( input())
for i in range(len):
    val1 = int( "".join( input().split() ) ) 
    val2 = int( "".join(input().split()  ) ) 
    print( *list( str( val1+val2 ) ) )