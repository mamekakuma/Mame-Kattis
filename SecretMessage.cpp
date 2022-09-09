//Mame-kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string message, str = "";
    int len;
    cin >> len;
    while (len--)
    {
        cin >> message;
        int siz = message.length(), temp;
        temp = ceil(sqrt(siz));
        temp *= temp;
        for (int i = 0; i < (temp - siz); i++)
            message += '*';
        siz += (temp - siz);
        temp = (int)sqrt(temp);
        vector<string> vec;
        for (int j = 0; j < siz; j += temp)
        {
            for (int i = 0; i < temp; i++)
                str += message[j + i];
            vec.emplace_back(str);
            str = "";
        }
        for (int j = 0; j < temp; j++)
        {
            for (int i = temp - 1; i >= 0; i--)
                if (vec[j][i] != '*')
                    cout << vec[i][j];
        }
        cout << "\n";
    }
}