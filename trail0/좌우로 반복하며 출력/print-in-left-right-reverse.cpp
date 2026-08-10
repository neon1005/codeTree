#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    
    int arr[n];
    int cnt = 1;
    for (int i = 0;i<n;i++) {
        arr[i] = cnt;
        cnt++; // n = 4 -> arr = {1,2,3,4}
    }

    for (int i = 0; i<n;i++) {
        if (i % 2 == 0) {
            for (int j = 0;j<n;j++) {
                cout<<arr[j];
            }
            cout<<endl;
        }
        else {
            for (int j = 0;j<n;j++) {
                cout<<arr[n-1-j];
            }
            cout<<endl;
        }

    }
    return 0;
}