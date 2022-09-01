// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string cipher, key;
    char temp;
    cin >> cipher >> key;
    int diff;
    for (int i = 0; i < cipher.length(); i++)
    {
        diff = cipher[i] - key[i];
        if (diff < 0)
            diff += 26;
        temp = char(diff % 65 + 65);
        cout << temp;
        key += temp;
    }
}