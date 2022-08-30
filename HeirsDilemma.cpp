// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
bool correct(int code)
{
    string temp = to_string(code);
    int idx = 0;
    sort(temp.begin(), temp.end());
    for (auto itr : temp)
    {
        if (idx < 5)
            if (itr == temp[idx + 1])
                return false;

        if ((itr == '0') or code % (itr - 48))
            return false;
        idx++;
    }
    return true;
}
int main()
{
    int ini, fin, cntr = 0;
    cin >> ini >> fin;
    for (int i = ini; i <= fin; i++)
    {
        if (correct(i))
            cntr++;
    }
    cout << cntr;
}