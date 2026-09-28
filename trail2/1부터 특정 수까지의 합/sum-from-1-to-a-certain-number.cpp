#include <iostream>
using namespace std;
int function(int n) {
    int value = 0;
    for (int i = 1; i<=n; i++) {
        value = value + i;
    }
    return value/10;

}
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    cout<<function(n)<<endl;

    return 0;
}