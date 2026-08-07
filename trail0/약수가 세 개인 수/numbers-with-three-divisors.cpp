#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    cin>>start>>end;
    
    int result = 0;

    for (;start<=end;start++) {
        int count = 0;
        for (int i = 1;i<=start;i++) {
            if (start % i ==0 ) count++;
        }
        if (count == 3) result++;
        
    }
    cout<<result;
    return 0;
}