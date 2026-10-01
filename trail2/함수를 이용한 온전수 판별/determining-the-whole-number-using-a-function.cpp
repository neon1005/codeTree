#include <iostream>
using namespace std;
bool function(int n) {
    return !(n%2==0||n%10==5||(n%3==0&&n%9!=0));

}
int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    
    int cnt = 0;
    for (int i = a; i<=b;i++) {
        if (function(i))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}