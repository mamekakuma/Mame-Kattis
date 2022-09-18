// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6], h1, h2, i, j, k;
    for (int b = 0; b < 6; b++)
        cin >> arr[b];
    sort(arr, arr + 6, greater<int>());
    cin >> h1 >> h2;
    bool bul = true ;
    for (i = 0; i < 4 && bul ; i++)
    {
        for (j = i + 1; j < 5 && bul ; j++)
        {
            for (k = j + 1; k < 6 && bul ; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == h1)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                    bul = false ;
                    break;
                }
            }
        }
    }
    for (int l = 0; l < 6; l++)
        if (l != i-1 and l != j-1 and l != k)
            cout << " " << arr[l];
}