#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int sum = 0;
    for (;a <= b;a++) {
        if (a % 2 ==0) sum = sum + a; 

    }
    cout<<sum;
    return 0;
}