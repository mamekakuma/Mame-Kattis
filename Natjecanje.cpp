#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long
    int tot, damaged, reserved, val, cntr = 0;
    vector<int> inNeed(11, 0);
    cin >> tot >> damaged >> reserved;
    for (int i = 0; i < damaged; i++)
    {
        cin >> val;
        inNeed[val]--;
    }

    for (int i = 0; i < reserved; i++)
    {
        cin >> val;
        inNeed[val]++;
    }
    for (int i = 1; i < 11; i++)
    {
        if (inNeed[i] < 0)
        {
            if (i - 1 > 0 && inNeed[i - 1] > 0)
            {
                inNeed[i - 1]--;
                inNeed[i]++;
                continue;
            }
            else if (i + 1 < 11 && inNeed[i + 1] > 0)
            {
                inNeed[i + 1]--;
                inNeed[i]++;
                continue;
            }
            else
                cntr++;
        }
    }
    cout << cntr;
}