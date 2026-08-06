#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int r = 0;

    for (int i = 0; i<n; i++) {
        if ((n-i)%2 == 0) continue;
        else if ((n-i)%3 == 0) continue;
        else if ((n-i)%5 == 0) continue;
        else r = r + 1;

        if (n - i == 1) cout<<r;

    }
    return 0;
}