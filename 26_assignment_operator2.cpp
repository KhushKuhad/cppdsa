#include<iostream>
using namespace std;

int main(){
    int x=3,y,z;
    y = x = 10; // x=10, then y = x (y=10)
    z = x < 10; // x < 10 (gives us 0) false = 0, true = 1
    cout<<x<<" "<<y<<" "<<z<<endl;
}