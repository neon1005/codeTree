#include <iostream>
using namespace std;
int function(int a, int b) {
    int value = 1;
    for (int i = 0; i<b;i++) {
        value = value * a;
    }
    return value;
}
int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    cout<<function(a, b)<<endl;
    return 0;
}