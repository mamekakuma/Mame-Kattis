// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
string grid[10], Map[10];
bool checkAdjacent(int i, int j)
{
    bool bul = true;
    if (i + 1 < 10 and Map[i + 1][j] == '*')
        bul = false;
    else if (i - 1 >= 0 and Map[i - 1][j] == '*')
        bul = false;
    else if (j + 1 < 10 and Map[i][j + 1] == '*')
        bul = false;
    else if (j - 1 >= 0 and Map[i][j - 1] == '*')
        bul = false;

    else if (i - 1 >= 0 and j - 1 >= 0 and Map[i - 1][j - 1] == '*')
        bul = false;
    else if (i + 1 < 10 and j + 1 < 10 and Map[i + 1][j + 1] == '*')
        bul = false;
    else if (i + 1 < 10 and j - 1 >= 0 and Map[i + 1][j - 1] == '*')
        bul = false;
    else if (j + 1 < 10 and i - 1 >= 0 and Map[i - 1][j + 1] == '*')
        bul = false;
    return bul;
}
bool floodCheck(int i, int j, char c)
{
    int cntr = 0;
    stack<pair<int, int>> st;
    st.push({i, j});
    grid[i][j] = '@';
    pair<int, int> top;
    while (!st.empty())
    {
        top = st.top();
        st.pop();
        if (Map[top.f][top.s] == '*')
            cntr++;
        if (top.f + 1 < 10 and grid[top.f + 1][top.s] == c)
        {
            grid[top.f + 1][top.s] = '@';
            st.push({top.f + 1, top.s});
        }
        if (top.f - 1 >= 0 and grid[top.f - 1][top.s] == c)
        {
            grid[top.f - 1][top.s] = '@';
            st.push({top.f - 1, top.s});
        }
        if (top.s + 1 < 10 and grid[top.f][top.s+1] == c)
        {
            grid[top.f][top.s + 1] = '@';
            st.push({top.f, top.s + 1});
        }
        if (top.s - 1 >= 0 and grid[top.f][top.s - 1] == c)
        {
            grid[top.f][top.s - 1] = '@';
            st.push({top.f, top.s - 1});
        }
    }
    if (cntr != 2)
        return false;
    return true;
}
int main()
{
    bool bul = true;
    string temp, row;
    for (int i = 0; i < 10; i++)
        cin >> grid[i];
    for (int i = 0; i < 10; i++)
    {
        cin >> row;
        Map[i] = row ;
        if (count(row.begin(), row.end(), '*') != 2)
            bul = false;
    }
    for (int j = 0; j < 10; j++)
    {
        temp = "";
        for (int k = 0; k < 10; k++)
            temp += Map[k][j];
        if (count(temp.begin(), temp.end(), '*') != 2)
            bul = false;
    }
    for (int i = 0; i < 10 and bul; i++)
    {
        for (int j = 0; j < 10 and bul; j++)
        {
            if (Map[i][j] == '*')
            {
                if (!checkAdjacent(i,j))
                    bul = false;
            }
            if (grid[i][j] != '@')
            {
                if (!floodCheck(i, j, grid[i][j]))
                    bul = false;
            }
        }
    }
    cout << ((bul) ? "valid" : "invalid");
}