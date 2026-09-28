#include <iostream>
#include <algorithm>
using namespace std;
void function(int n, int m) {
    int num = max(n,m);
    while (true) {
        if (num%n ==0 && num%m ==0) {
            cout<<num<<endl;
            break;
        }
        num++;
    }
}
int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    function(n, m);
    return 0;
}