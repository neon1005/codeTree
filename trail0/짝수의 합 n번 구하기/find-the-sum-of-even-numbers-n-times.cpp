#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int a,b;

    for (int i = 0; i<n;i++) {
        cin>>a>>b;
        int sum = 0;
        for (;a<=b;a++) {
            if (a%2 == 0) sum = sum + a;
        }
        cout<<sum<<endl;
    }
    return 0;
}