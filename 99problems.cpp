    #include<bits/stdc++.h>
    using namespace std ;
    int nearest99( int input ){
        if( input < 149 )
            return 99 ;
            int temp = input % 100 ;
            return ( temp < 49 ) ? input-temp-1 : input + (99-temp) ;
    }
    int main(){
        int input ;
        cin >> input ;
        cout << nearest99( input ) ;
    }