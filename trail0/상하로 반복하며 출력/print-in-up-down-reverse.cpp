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
        cnt++;
    }

    for (int i = 0;i<n;i++) {
        if (1) {
            for (int j = 0;j<n;j++) {
                if (j % 2 ==0) {
                    cout<<arr[i];
                }
                else {
                    cout<<arr[n-i-1];
                }
                
            }
            cout<<endl;
            
        }
        
    }
    return 0;
}