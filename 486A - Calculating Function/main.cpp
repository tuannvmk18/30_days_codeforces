#include <iostream>

using namespace std;

long long int n;

void solve() {
    long long int result = 0;
    cin >> n;
    result = n % 2 == 0 ? n / 2 : (-(n + 1) / 2); 
    cout <<  result;
}

int main() {
    solve();
    return 0;
}