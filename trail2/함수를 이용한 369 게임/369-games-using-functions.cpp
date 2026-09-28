#include <iostream>
using namespace std;
bool func369(int n) {
    
    while (n>=1) {
        if (n%10==3||n%10 ==6||n%10==9)
            return true;
    
        n = n / 10;        
    }
    return false;
}
bool function(int n) {
    return n%3==0||func369(n);

}
int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    int count = 0;
    for (int i = a;i<=b;i++) {
        if (function(i)==true)
            count++;
    }
    cout<<count<<endl;
    return 0;
}