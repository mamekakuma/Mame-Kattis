#include <bits/stdc++.h>
using namespace std;
string txt, str = "-1";
char c;
unordered_map<string, char> dic = {
    {"at", '@'},
    {"and", '&'},
    {"one", '1'},
    {"won", '1'},
    {"to", '2'},
    {"too", '2'},
    {"two", '2'},
    {"for", '4'},
    {"four", '4'},
    {"bee", 'b'},
    {"bea", 'b'},
    {"be", 'b'},
    {"sea", 'c'},
    {"see", 'c'},
    {"eye", 'i'},
    {"oh", 'o'},
    {"owe", 'o'},
    {"are", 'r'},
    {"you", 'u'},
    {"why", 'y'},
};
string checked(int start, int fin)
{
    string sliced = "", temp = "";
    for (int i = start; i <= fin; i++)
        sliced += txt[i];
    temp = "-1";
    bool bul = false;
    if (!start and isupper(sliced[0]))
    {
        transform(sliced.begin(), sliced.end(), sliced.begin(), ::tolower);
        bul = true;
    }
    if (dic[sliced])
    {
        temp = "";
        temp += dic[sliced];
        if (bul)
        {
            char c = toupper(temp[0]);
            temp = temp.substr(1) + c;
        }
    }
    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len, siz;
    cin >> len;
    cin.ignore();
    while (len--)
    {
        getline(cin, txt);
        string res = "";
        siz = txt.length();
        for (int i = 0; i < siz; i++)
        {
            if ((i + 2) < siz)
            {
                str = checked(i, i + 2);
                if (str != "-1")
                {
                    res += str;
                    i += 2;
                    continue;
                }
            }
            if (i + 1 < siz)
            {
                str = checked(i, i + 1);
                if (str != "-1")
                {
                    res += str;
                    i += 1;
                    continue;
                }
            }
            str = checked(i, i);
            if (str == "-1")
            {
                str = "";
                str += txt[i];
            }
            res += str;
        }
        cout << res << "\n";
    }
}