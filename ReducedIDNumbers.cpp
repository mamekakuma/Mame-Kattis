#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , id , temp ;
    cin >> n ;
    vector< int > lis ;
for( int k = 0 ; k <  n ; k++ ){
    cin >> id ;
    lis.emplace_back(id) ;
}
for (int i = 1 ; i < 1000000 ; i++)
{
    unordered_map< int , bool > check ;
    for (int j = 0 ; j < n  ; j++){
        temp = lis[j]%i ;
            if( j == n-1 && !check[ temp ] ){
                cout << i ;
                return 0 ;
            }
            if( check[ temp ] )
                break;
            else
            check[ temp ] = true ;

    }
}
}