#include <iostream>
#include <algorithm>
using namespace std;

int check(char board[51][51], int scale);

int main(void)
{
    char board[51][51];
    int scale;
    int maxval = 0;

    cin >> scale;
    for (int i = 0; i < scale; i++)
        for (int j = 0; j < scale; j++)
            cin >> board[i][j];

    for (int i = 0; i < scale; i++)
        for (int j = 0; j < scale - 1; j++)
        {
            swap(board[i][j], board[i][j + 1]);
            maxval = max(check(board, scale), maxval);
            swap(board[i][j], board[i][j + 1]);

            swap(board[j][i], board[j + 1][i]);
            maxval = max(check(board, scale), maxval);
            swap(board[j][i], board[j + 1][i]);
        }
    cout << maxval;
}

int check(char board[51][51], int scale)
{
    int max_val = 0;
    int leng_val, wid_val;

    for (int i = 0; i < scale; i++)
    {
        leng_val = 1;
        wid_val = 1;
        for (int j = 0; j < scale - 1; j++)
        {
            if (board[i][j] == board[i][j + 1])
            {
                wid_val++;
                max_val = max(wid_val, max_val);
            }
            else
                wid_val = 1;
            if (board[j][i] == board[j + 1][i])
            {
                leng_val++;
                max_val  = max(leng_val, max_val);
            }
            else
                leng_val = 1;
        }
    }

    return (max_val);
}
