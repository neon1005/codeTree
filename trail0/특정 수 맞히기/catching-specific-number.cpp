#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while (1) {
        int n;
        cin>>n;

        if (n>25) {
            cout<<"Lower"<<endl;
        }
        else if (n<25) {
            cout<<"Higher"<<endl;
        }
        else {
            cout<<"Good"<<endl;
            break;
        }
    }
    return 0;
}