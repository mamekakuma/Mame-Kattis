#include<bits/stdc++.h>
using namespace std ;
#define s second 
#define f first
int main(){
    int len , val , minAttendee = 0 , temp ;
    cin >> len ;
unordered_map< int , int > distinct ;
   for( int i = 0 ; i < len ; i++ )
{
            cin >> val ;
            distinct[ val ]++ ;
}
for( auto itr : distinct ){
    minAttendee += itr.s  ;
    if( itr.s > itr.f+1 ){
        temp = itr.s % (itr.f+1) ;
        minAttendee += ( (itr.f+1) - temp ) ;
    }
    else if( itr.s < itr.f+1 )
    minAttendee += ( (itr.f+1) - itr.s ) ;
}
cout << minAttendee ;
} 