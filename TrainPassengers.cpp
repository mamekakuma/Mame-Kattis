//Mame-Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    long capacity , station , left , entered , waited  , train = 0 ;
    cin>> capacity >> station ;
    bool bul = true ; 
     for( int i = 0 ; i < station ; i++ ){
        cin >> left >> entered >> waited ;
        train -= left ; 
        if(train < 0 )
            bul = false ;
        train += entered ;
        if( train > capacity or (capacity-train > 0  and waited ) )
                        bul = false ;
    if( i == station-1 and train > 0 )
        bul = false ;
    if( !bul )
    {
        cout << "impossible\n" ; 
        return 0 ;
    }
     }
cout << "possible" ;
}