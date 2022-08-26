//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int len ;
cin >> len ;
string val ;
while (len--)
{
    cin >> val ;
    for( int i = val.length()-1 ; i >= 0 ; i-- ){
          if( val[i] != '0' ){
            val[i] -- ;
            cout << stoi( val ) << "\n" ;
            break ;
          }
    }
}
}