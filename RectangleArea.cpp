//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
float x1 , y1 , x2 , y2 , area ;
cin >> x1 >> y1 >> x2 >> y2 ;
area = ( x1-x2 ) * ( y2-y1 ) ;
cout <<  fixed << setprecision(3) << ((area < 0 ) ? -1*area : area) ;
}