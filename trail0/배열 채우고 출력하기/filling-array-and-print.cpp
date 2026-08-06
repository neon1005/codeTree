#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[9];
    for (int i = 0; i<10;i++) {
        cin>>arr[i];
    }

    for (int j = 0; j<10;j++) {
        cout<<arr[9-j];
    }
    return 0;
}