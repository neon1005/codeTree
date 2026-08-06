#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    cin>>arr[0]>>arr[1];
    
    cout<<arr[0]<<" "<<arr[1]<<" ";

    for (int i = 0; i<8;i++) {
        arr[i+2] = arr[i] + arr[i+1];
        if (arr[i+2]>=10) arr[i+2] = arr[i+2] - 10;

        cout <<arr[i+2]<<" ";

    }
    return 0;
}