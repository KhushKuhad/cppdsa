#include<iostream>
using namespace std;

int main(){
    //printing ascii using typecasting
    char x;
    cin>>x;
    cout<<(int)x<<endl; // typecasting char -> int gives us ascii value

    // Vice versa
    int y;
    cin>>y; //enter num to get ascii character
    cout<<(char)y<<endl;

}