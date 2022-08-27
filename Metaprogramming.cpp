//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
unordered_map< string , int > definitions ;
string cmd , key , cmp , key1 , key2 ;
int value , value1 ;

while( cin >> cmd ){
    if( cmd[0] == 'd' ){
        cin >> value >> key ; 
        if( value == 0 )
            value = 10001 ;
        definitions[ key ] = value ;
    }
    else{
        cin >> key1 >> cmp >> key2 ;
        if( !definitions[key2] or !definitions[key1] ){
            cout << "undefined\n" ;
        }
        else{
            if( cmp == "=" )
                cout << (( definitions[key1] == definitions[key2] ) ? "true" : "false" )<< "\n" ;
            else if( cmp == "<" )
                cout << (( definitions[key1] < definitions[key2] ) ? "true" : "false" )<< "\n" ;
            else
                cout << (( definitions[key1] > definitions[key2] ) ? "true" : "false")<< "\n" ;
        }
    }
}
}