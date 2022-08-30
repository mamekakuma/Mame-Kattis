#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long rollLen , nickLen , noCrise = 0 , mod = 1 ;
    cin >> rollLen >> nickLen ;
    mod = rollLen%nickLen ;
    while( mod ){
        noCrise++ ;
        nickLen -=mod ; 
        mod = rollLen%nickLen ;
    }
    cout << ++noCrise ;
}