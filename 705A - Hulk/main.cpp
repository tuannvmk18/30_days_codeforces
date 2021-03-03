#include <iostream>
#include <cstring>
using namespace std;

int n;

void solve()
{
    cin >> n;
    string feeling = "I hate it";
    
    for(int i = 2; i <= n; i++) {
        if(i % 2 == 0) {
            feeling.replace(feeling.size() - 2, 2, "that I love it");
        } else {
            feeling.replace(feeling.size() - 2, 2, "that I hate it");
        }
    }
    cout << feeling;
}

int main()
{
    solve();
    return 0;
}