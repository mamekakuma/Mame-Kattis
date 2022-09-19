// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
char grid[5][5];
unordered_map<char, int> visited;
unordered_map<char, pair<int, int>> coordinate;
string encrypt(char a, char b)
{
    string res;
    pair<int, int> x = coordinate[a], y = coordinate[b];
    if (x.f == y.f)
    {
        res += grid[x.f][(x.s + 1) % 5];
        res += grid[y.f][(y.s + 1) % 5];
    }
    else if (x.s == y.s)
    {
        res += grid[(x.f + 1) % 5][x.s];
        res += grid[(y.f + 1) % 5][y.s];
    }
    else
    {
        res += grid[x.f][y.s];
        res += grid[y.f][x.s];
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int idx = 0;
    string str, str1, keyPhrase, plainTxt, temp, alphabet = "abcdefghijklmnoprstuvwxyz";
    getline(cin, str);
    getline(cin, str1);
    istringstream stream(str), stream1(str1);
    while (stream >> temp)
        keyPhrase += temp;
    while (stream1 >> temp)
        plainTxt += temp;
    for (int i = 0; i < keyPhrase.length(); i++)
    {
        char chr = keyPhrase[i];
        if (!visited[chr])
        {
            visited[chr] = true;
            coordinate[chr] = {idx / 5, idx % 5};
            grid[idx / 5][idx % 5] = chr;
            idx++;
        }
    }
    for (auto chr : alphabet)
    {
        if (!visited[chr])
        {
            visited[chr] = true;
            coordinate[chr] = {idx / 5, idx % 5};
            grid[idx / 5][idx % 5] = chr;
            idx++;
        }
    }
    int siz = plainTxt.length();
    for (int i = 0 ; i < siz; i ++)
    {
        if( i+1 < siz )
        {
        if( plainTxt[i+1 ] == plainTxt[i] )  
        {
        temp = encrypt(plainTxt[i], 'x');
               }
        else{
            temp = encrypt(plainTxt[i], plainTxt[i+1] );
            i++;
        }
        }
        else{
            temp = encrypt(plainTxt[i], 'x');
        }
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
        cout << temp ;    
    }
}
