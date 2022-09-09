#include<bits/stdc++.h>
using namespace std ;
int main(){
    int friends , friendships , friend1 , friend2 ;
    cin >> friends >> friendships ;    
    vector< int > popularity( friends , 0 ) ;
    while (friendships--)
    {
        cin >> friend1 >> friend2 ;
        popularity[friend1-1]++ ;
        popularity[friend2-1]++ ;
    }
    cout << popularity[0] -1 ;
    for( int i = 2 ; i <= friends ; i++ )
        cout << " " << popularity[i-1] - i ;
    }