#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for (int i = 0;i<10;i++) {
        cin>>arr[i];
    }
    int count_3 = 0;
    int count_5 = 0;

    for (int i = 0; i<10;i++) {
        if (arr[i] % 3 == 0) {
            count_3++;
        }
        
        if (arr[i] % 5 == 0) {
            count_5++;
        }

    }
    cout<<count_3<<" "<<count_5;
    return 0;
}