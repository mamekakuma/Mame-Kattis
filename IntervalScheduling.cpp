#include<iostream>
#include<algorithm>
using namespace std;
#define f first
#define s second
bool lambda( pair< int , int >x , pair< int , int > y){
        return x.s < y.s ;
}
int main(){
ios_base::sync_with_stdio(false) ;
cin.tie(0);
cout.tie(0);
int n , i , j ;
cin >> n ;
pair<int , int >interval[n] ;
for(int itr = 0 ; itr <  n ; itr++ ){
    cin >> i >> j ;
    interval[itr] = { i,j } ;
}
sort(interval , interval+n , lambda ) ;
int maximum = 1 , temp = interval[0].s;
for( int itr = 1 ; itr < n ; itr++ )
    {

            if( interval[itr].f >= temp ){
                maximum++ ;
                temp = interval[itr].s ;
            }
    }
    cout << maximum ;
}
