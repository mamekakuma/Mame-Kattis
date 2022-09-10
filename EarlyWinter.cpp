#include<bits/stdc++.h>
using namespace std ;
int main(){
int years , dm , res = -1 , val ;
cin >> years >> dm ;
for(int i = 0; i < years ; i++)
    {
        cin >> val ;
        if( val <= dm ){
            res = i ;
            break;
        }
        }
        if( res == -1 )
            cout << "It had never snowed this early!" ;
        else
        cout << "It hadn't snowed this early in " << res <<" years!" ;
}