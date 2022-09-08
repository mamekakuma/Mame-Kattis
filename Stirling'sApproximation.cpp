#include <bits/stdc++.h>
using namespace std;
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ld n, arr[100001], res = 1.0, e = M_E , sum = 0 , temp ;
    for (int i = 1; i < 100001 ; i++)
    {
        sum += log(i) ;
        arr[i] = sum ;
    }
    while (cin >> n)
    {
        if (n == 0)
            break;
            temp = (arr[(int)n ]+n) - ( 0.5*log(2*M_PI*n)+(n*log(n)) );
        cout << fixed << setprecision(8) << exp(temp) << "\n";
    }
}