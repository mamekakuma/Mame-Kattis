//Mame-Kakma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool Map[200001], value = true;
    Map[1] = true;
    int itr = 2, temp, cobbles;
    while (itr < 200001)
    {
        value = !value;
        temp = ceil(sqrt(itr));
        for (int i = itr; i < (itr + temp) and i < 200001; i++)
            Map[i] = value;
        itr += temp;
    }
    cin >> cobbles;
    cout << ((Map[cobbles] ) ? "YES" : "NO");
}
