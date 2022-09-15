// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> facts;
vector<string> split(string str, bool flag)
{
    vector<string> qry;
    string dispaced = "", temp, temp1, temp2;
    int idx;
    for (auto itr : str)
        if (itr != ' ')
            dispaced += itr;
    stringstream container(dispaced);
    while (getline(container, temp, ')'))
    {
        vector<string> vec;
        idx = temp.find('(');
        temp1 = temp.substr(idx + 1);
        vec.emplace_back(temp.substr(0, idx));
        stringstream cont1(temp1);
        while (getline(cont1, temp2, ','))
            vec.emplace_back(temp2);
        if (flag)
            facts.push_back(vec);
        else
            qry = vec;
    }
    return qry;
}
int counter(vector<string> query)
{
    int siz1 = query.size(), siz, cntr = 0, siz2;
    bool bul;
    map<string, vector<int>> repeated;
    for (int i = 0; i < siz1; i++)
        if (query[i] != "_" and query[i][0] == '_')
            repeated[query[i]].emplace_back(i);
    for (auto truth : facts)
    {
        siz = truth.size();
        if (siz == siz1 && query[0] == truth[0])
        {
            bul = true;
            for (auto x : query)
            {
                if (!bul)
                    break;
                vector<int> vec1 = repeated[x];
                siz2 = vec1.size();
                if (siz2 > 1)
                {
                    for (int j = 1; j < siz2; j++)
                    {
                        if (truth[vec1[j]] != truth[vec1[j - 1]])
                        {
                            bul = false;
                            break;
                        }
                    }
                }
            }
            if (!bul)
                continue;
            for (int i = 0; i < siz; i++)
            {
                if (query[i][0] == '_')
                {
                }
                else if (query[i] != truth[i])
                {
                    bul = false;
                    break;
                }
            }
            if (bul)
                cntr++;
        }
    }
    return cntr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    while (getline(cin, str) and !str.empty())
    {
        split(str, true);
    }
    while (getline(cin, str))
    {
        cout << counter(split(str, false)) << "\n";
    }
}