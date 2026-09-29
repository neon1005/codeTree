#include <iostream>
using namespace std;
bool function(int n) {
    return (n%4==0&&n%100!=0)||(n%100==0&&n%400==0);
}
int main() {
    // Please write your code here.
    int y;
    cin>>y;
    cout<< boolalpha << function(y);
    return 0;
}