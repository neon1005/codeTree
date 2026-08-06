#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[5];
    str[0] =  "apple";
    str[1] =  "banana";
    str[2] = "grape";
    str[3] = "blueberry";
    str[4] = "orange";

    char a;
    cin>>a;

    int cnt = 0;
    for (int i = 0; i< 5; i++) {
        if (str[i][2] == a|| str[i][3] == a) {
            cout << str[i]<<endl;
            cnt++;
        }
    }
    cout<<cnt;
    return 0; 
}