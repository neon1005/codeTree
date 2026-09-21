#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,K;
    cin>>N>>K;
    int arr[N];
    for (int i = 0;i<N;i++) {
        arr[i] = 0;
        
    }
    for (int i = 0;i<K;i++) {
        int A,B;
        cin>>A>>B;
        for (int j = A-1;j<=B-1;j++){
            arr[j] = arr[j] + 1;
        }
        
    }
    int max=0;
    for (int i = 0;i<N;i++) {
        if (max<=arr[i]) {
            max = arr[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}