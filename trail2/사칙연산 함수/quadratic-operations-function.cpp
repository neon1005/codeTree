#include <iostream>
using namespace std;
int add(int a, int c) {
    return a+c;
}
int sub(int a, int c) {
    return a-c;
}
int multi(int a, int c) {
    return a*c;
}
int divi(int a, int c) {
    return a/c;
}
int main() {
    // Please write your code here.
    int a,c;
    char o;
    cin>>a>>o>>c;
    if (o == '+') cout<<a<<" + "<<c<<" = "<<add(a,c)<<endl;
    else if (o == '-') cout<<a<<" - "<<c<<" = "<<sub(a,c)<<endl;
    else if (o == '*') cout<<a<<" * "<<c<<" = "<<multi(a,c)<<endl;
    else if (o == '/') cout<<a<<" / "<<c<<" = "<<divi(a,c)<<endl;
    else cout<<"False"<<endl;
    
    return 0;
}