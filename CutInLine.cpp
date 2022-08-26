//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int len , actions ;
string person , cmd , person1 , person2;
cin >> len ;
vector< string > line ;
while( len-- ){
    cin >> person ;
    line.emplace_back( person );
} 
cin >> actions ;
while( actions-- ){
    cin >> cmd ;
    if( cmd[0] == 'l' ){
        cin >> person1 ;
        if( line.back() == person1 ) 
        line.pop_back() ;
        else
        remove( line.begin() , line.end() , person1 ); 
    }
    else{
        cin >> person1 >> person2 ;
        line.insert( line.begin()-(line.begin()- find( line.begin() , line.end()  , person2 ) ) , person1 ) ;
    }
    }
for( auto pupil : line )
        cout << pupil << "\n" ; 
}