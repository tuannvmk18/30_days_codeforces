#include <iostream>
using namespace std;

int n;
char **input;

void solve()
{
    cin >> n;
    input = new char *[n];
    
    for (int i = 0; i < n; ++i)
    {
        input[i] = new char[2];
        cin >> input[i];
    }
    
    int result = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (input[i][0] != input[i + 1][0])
        {
            result++;
        }
    }
    cout << result;
}

int main()
{
    solve();
    return 0;
}