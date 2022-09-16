// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main()
{
    int len, cntr = INT_MAX ;
    cin >> len;
    int  runners[len] ;
    for (int i = 0; i < len; i++)
    cin >> runners[i] ;
    for (int i = 0; i < len; i++)
        cntr = min( cntr , runners[i]+runners[(i-2+len)%len]) ;
    cout << cntr ;
}