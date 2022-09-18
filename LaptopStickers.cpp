// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, clmn, letter, height, width, a, b;
    cin >> clmn >> row >> letter;
    char grid[row][clmn];
    memset(grid , '_' , sizeof(grid)) ;
    for (int i = 0; i < letter; i++ )
    {
        cin >> width >> height >> b >> a;
        char c = char(i + 97);
        for (int k = a; k < (a + height) && k < row ; k++)
            for (int l = b; l < (b + width) && l < clmn ; l++)
                grid[k][l] = c;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clmn; j++)
                cout << grid[i][j];
        cout << "\n";
    }
}