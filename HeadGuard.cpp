//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
string tally ;
while (cin >> tally )
{
    int counter = 1 ;
    for( int i = 1 ; i < tally.length() ; i++){
       if( tally[i] != tally[i-1] ){
          cout << counter << tally[i-1] ;
          counter=0 ;
       }
       counter++ ;
    }
    cout << counter << tally.back() << "\n" ;
}

}