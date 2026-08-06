#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++) {
        cin>>arr[i];
    }

    for (int j = 0; j<n; j++) {
        if (arr[n-j-1] % 2 != 0) {
            continue;
        }
        cout<<arr[n-j-1]<<" ";
    }

    return 0;
}