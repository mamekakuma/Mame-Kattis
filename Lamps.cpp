// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dailyHr, price, bulb = 1, lamp = 1, day = 1, life;
    cin >> dailyHr >> price;
    double bulbPrice, lampPrice;
    while (true)
    {
        life = day * dailyHr ;
        bulbPrice =( (life * 60 * price ) / 100000.0 ) + ( (life % 1000) ? (life / 1000 + 1) : life / 1000 )*5 ; 
        lampPrice = ( (life * 11 * price ) / 100000.0 )+ ( (life % 8000) ? (life / 8000 + 1) : life / 8000 )*60 ;
        if ( bulbPrice > lampPrice )
        {
            cout << day;
            break;
        }
        day++;
    }
}