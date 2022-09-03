// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    #define int long long
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int quantity, item, maxDiscount = 0;
    cin >> quantity;
    vector<int> shelf;
    while (quantity--)
    {
        cin >> item;
        shelf.emplace_back(item);
    }
    sort(shelf.rbegin(), shelf.rend());
    for (int i = 2; i < shelf.size(); i += 3)
        maxDiscount += shelf[i];
    cout << maxDiscount;
}