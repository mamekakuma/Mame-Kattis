//Mame Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int height , len , width ,  bricksNum, check = 0 , clmn = 0 ;
cin >> height >> width >> bricksNum ;
while( bricksNum-- ){
    cin >> len ;
    check += len ;
    if( check == width ){
        clmn++ ;
        check = 0 ;
    }
    else if( check > width ){
        cout << "NO";
        return 0 ;
    }
}
if( clmn < height )
    cout << "NO" ;
else
    cout << "YES" ;
}