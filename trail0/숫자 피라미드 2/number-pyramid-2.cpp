#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int last = 1;
    for (int i = 1;i<=n;i++) {
        
        for (int j = 1; j<=i;j++) {
            cout<<last<<" ";
            last++;
        }
        cout<<endl;
    }
    return 0;
}