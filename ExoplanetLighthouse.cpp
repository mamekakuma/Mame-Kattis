#include<bits/stdc++.h>
using namespace std;
int main(){
    long double cases , rad , h1 , h2, res ;
cin >> cases ;
while( cases-- )
{
    cin >> rad >> h1 >> h2 ;
    h1 = (h1/1000) +rad  ;
    h2 = (h2/1000) +rad ;
res = (acos(rad/h1) + acos(rad/h2))*rad ;
cout << fixed << setprecision(5) << res << "\n" ; 
}
}