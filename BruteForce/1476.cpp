#include <iostream>

using namespace std;

int main(void)
{
    int E = 0, S = 0, M = 0, year = 1;

    cin >> E >> S >> M; 
    while (true)
    {
        if (((year - E) % 15 == 0) && ((year - S) % 28 == 0) && ((year - M) % 19 == 0))
        {
            cout << year;
            break;
        }
        else
            year++;
    }
}