#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[100];
    for (int i = 0;i<100;i++) {
        arr[i] = 0;
    }
    for (int j = 0;j<N;j++) {
        int x1,x2;
        cin>>x1>>x2;
       
        for (int k = x1;k<=x2;k++) {
            arr[k]++;
        }
    }
    int max = 0;
    for (int i = 0; i<100;i++) {
        if (max<=arr[i]) max = arr[i];
    }
    cout<<max<<endl;
    return 0;
}