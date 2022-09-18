// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long
    int cases, degree1, degree2, totDegree = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> degree1;
        vector<int> pol1(degree1 + 1);
        for (int k = 0; k <= degree1; k++)
            cin >> pol1[k];
        cin >> degree2;
        vector<int> pol2(degree2 + 1);
        for (int k = 0; k <= degree2; k++)
            cin >> pol2[k];
        totDegree = degree1 + degree2;
        vector<int> multd(totDegree + 1);
        cout << totDegree << "\n";
        for (int i = 0; i <= degree1 ; i++)
           for (int j = 0 ; j <= degree2; j++)
                multd[ i+j ] += pol1[i]*pol2[j] ;
   for(auto itr : multd )
    cout << itr << " " ;
    cout << "\n" ;           
    }
}