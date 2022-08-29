// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int len, jump, itr, val;
    cin >> len >> jump;
    itr = jump - 1;
    for (int i = 0; i < len; i++)
    {
        cin >> val;
        if (itr == i)
        {
            cout << val << " ";
            itr += jump;
        }
    }
}