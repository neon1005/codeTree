#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[2000];
    for (int i = 0;i<2000;i++) {
        arr[i] = 0;
    }
    int now = 1000;
    for (int j = 0;j<N;j++) {
        int x;
        char C;
        cin>>x>>C;
        if (C == 'L') {
            for (int k = now -1;k>=now - x;k--) {
                arr[k]++;
            }
            now = now - x;
        }
        else {
            for (int k = now ;k<now + x;k++) {
                arr[k]++;
            }
            now = now + x;
        }
    }
    int count = 0;
    for (int i = 0;i<2000;i++) {
        if (arr[i]>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}