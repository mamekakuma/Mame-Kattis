//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int cards , prevActs , found = 0 ,idx1 , idx2 , hiddenCard ;
string word1 , word2 ;
cin >> cards >> prevActs ;
vector<string>visited(cards,"empty"); 
unordered_map< string , int >pics ;
while ( prevActs-- )
{
    cin >> idx1 >> idx2 >> word1 >> word2 ;
    if( word1 == word2 )
        {
            found++ ;
            word1 = "fnd" ;
            word2 = "fnd" ;
        }
    visited[ idx1-1 ] = word1 ;
    visited[ idx2-1 ] = word2 ;
}
int empty = 0 , certain = 0 , revealed ;
for(auto itr : visited ){
    if( itr == "empty" )
        empty++ ;
    else if( itr != "fnd" ){
        pics[itr]++ ;
        if(pics[itr] == 2 )
            certain++ ;    
    }
}
revealed = pics.size() + found ;
cards /= 2 ;
hiddenCard = cards - revealed ; 
if( (hiddenCard == 1 and empty == 2) or !hiddenCard )
    certain = cards - found ;
cout << certain ;
}