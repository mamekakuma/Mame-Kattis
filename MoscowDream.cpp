//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int easy , medium , hard , total ;
cin >> easy >> medium >> hard >> total ;
if( !easy or !medium or !hard or (easy + medium + hard )< total or total < 3 )
    cout << "NO" ;
else
    cout << "YES" ;
}