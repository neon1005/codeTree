#include <iostream>
using namespace std;
void function(int n, int x[]) {
    for (int i = 0;i<n;i++) {
        if (x[i]%2==0) {
            x[i] = x[i] / 2;
        }
    }
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++) {
        cin>>arr[i];
    }
    function(n, arr);
    for (int j = 0; j<n;j++) {
        cout<<arr[j]<<" ";
    }
    return 0;
}