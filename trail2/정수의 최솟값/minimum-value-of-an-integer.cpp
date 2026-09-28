#include <iostream>
#include <algorithm>
using namespace std;
int function(int a, int b, int c) {
    return min({a, b, c});
}
int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<function(a, b, c)<<endl;
    return 0;
}