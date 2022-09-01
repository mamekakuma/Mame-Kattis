// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int cross, row, size1 = s1.length(), size2 = s2.length() , idx ;
    for (int i = 0; i < s1.length(); i++)
    {
        if ( s2.find(s1[i]) != string::npos)
        {
            row = s2.find(s1[i]); ;
            idx = i;
            break;
        }
    }
    string temp , temp1 ;
    for (int i = 0; i < size1 ; i++ )
        temp += '.' ;
    for (int j = 0; j < size2; j++)
    {
        temp1 = temp ;
        temp1[idx] = s2[j];
        if( j == row )
            temp1 = s1 ;
        cout << temp1 << "\n";
    }
}