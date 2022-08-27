//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
bool relative( int x ,int y , int absDiff ){
    return ( (x+absDiff) >= y ) ; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int socks , maxCap , absDiff , colorVals ;
vector< int >container ;
cin >> socks >> maxCap >> absDiff ;
for( int itr = 0 ; itr < socks ; itr++ ){
    cin >> colorVals ;
    container.emplace_back( colorVals ) ;
}
sort( container.begin() , container.end() ) ;
int machines = 1 , temp = maxCap-1 ;
for( int i = 1 ; i < socks ; i++ ){
    if( !relative( container[i-1] , container[ i ] , absDiff ) or temp == 0 ){
        machines++ ;
        temp = maxCap-1 ;
        continue ;
    }
    temp-- ;
}
cout << machines << "\n" ;
}