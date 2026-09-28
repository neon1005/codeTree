#include <iostream>
#include <algorithm>
using namespace std;

void function(int n, int m) {
    int max_value;
    for (int i = 1; i<=max(n,m); i++) {
        if (n%i ==0 && m%i==0)
            max_value = i;
        
    }
    cout<<max_value<<endl;
}

int main() {
    // Please write your code here.
    int n, m;
    cin>>n>>m;
    function(n,m);
    return 0;
}