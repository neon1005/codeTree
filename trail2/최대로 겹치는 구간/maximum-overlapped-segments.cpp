#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[200];
    for (int i = 0;i<200;i++) {
        arr[i] = 0;
    }
    for (int i = 0;i<N;i++) {
        int x1,x2;
        cin>>x1>>x2;
        x1 = x1 + 100;
        x2 = x2 + 100;
        for (int j = x1;j<x2;j++) {
            arr[j]  = arr[j] + 1;
        }

    }
    int max = 0;
    for (int i = 0;i<200;i++) {
        if (max<=arr[i])
            max = arr[i];
    }
    cout<<max<<endl;
    return 0;
}