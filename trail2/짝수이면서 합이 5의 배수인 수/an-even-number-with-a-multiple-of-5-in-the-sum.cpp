#include <iostream>
using namespace std;
bool function(int n) {
    if (n%2==0&& ((n/10)+(n%10)) % 5 ==0)
        return true;
    else 
        return false;
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    if (function(n)==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}