// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, rad;
    cin >> len >> rad;
    rad *= 2;
    len *= len;
    len += len;
    cout << ((sqrt(len) > rad) ? "nope" : "fits");
}