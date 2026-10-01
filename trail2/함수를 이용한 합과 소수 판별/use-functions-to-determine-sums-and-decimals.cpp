#include <iostream>
using namespace std;
bool prime(int n) {
    for (int i = 2; i<=n/2; i++) {
        if (n%i==0) return false;

    }
    return true;
}
bool function(int n) {
    if (!prime(n)) return false;
    else {
        
        int sum = 0;
        while (n>=1) {
            sum = sum + n%10;
            n = n / 10;
        }
        if (sum %2 ==0) return true;
        else return false;
    }
    
}

int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    int cnt = 0;
    for (int i =a;i<=b;i++) {
        if (function(i)) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}