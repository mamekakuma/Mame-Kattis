// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int guess;
    cout << 2 << "\n";
    while (cin >> guess)
    {
        if ((guess + 2) % 3 == 0)
            cout << guess + 2 << "\n";
        else
            cout << guess + 1 << "\n";
    }
}