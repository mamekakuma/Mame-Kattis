// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cases, prizes, stickers, k, val;
    cin >> cases;
    while (cases--)
    {
        cin >> prizes >> stickers;
       vector< vector<int> > collection;
        while (prizes--)
        {
            cin >> k;
            k++;
            vector<int> stickerInNeed(k);
            for (int i = 0; i < k; i++)
                cin >> stickerInNeed[i];
            collection.push_back(stickerInNeed);
        }
        vector<int> coach(stickers + 1);
        for (int i = 1; i <= stickers; i++)
            cin >> coach[i];
        int cash = 0, minVal = LONG_LONG_MAX, siz;
        for (auto &itr : collection)
        {
            siz = itr.size();
            for (int i = 0; i < siz - 1; i++)
                minVal = min(minVal, coach[itr[i]]);
            cash += (minVal * itr.back());
            for (int i = 0; i < siz - 1; i++)
                coach[itr[i]] -= minVal;
            minVal = LONG_LONG_MAX;
        }
        cout << cash << "\n";
    }
}