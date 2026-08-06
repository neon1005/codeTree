#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    while (1) {
        cout<<a<<" ";
        if (a %2 == 1) {
            a = a * 2 ;
        }
        else if (a%2 == 0) 
            a = a + 3 ;
        
        if (a>b) 
            break;


    }
    return 0;
}