#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, weight;
    string alphabet = "abcdefghijklmnopqrstuvwxyz", res = "";
    cin >> len >> weight;
    if (weight > (26 * len) or len > weight)
        cout << "impossible";
    else
    {
        int chr = weight / len, chr1, temp;
        chr1 = weight - (chr * (len - 1));
        if (chr1 > 26)
        {
            chr++;
            chr1 = weight - (chr * (len - 2));
            res.insert(0, len - 2, alphabet[chr - 1]);
            res += alphabet[ceil(chr1 / 2.0) - 1];
            res += alphabet[floor(chr1 / 2.0) - 1];
        }
        else
        {
            res.insert(0, len - 1, alphabet[chr - 1]);
            res += alphabet[chr1 - 1];
        }
        cout << res;
    }
}