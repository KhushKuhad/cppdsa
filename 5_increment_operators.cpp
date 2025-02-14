#include<iostream>
using namespace std;

int main(){
    int x = 5;
    cout<<x<<endl;
    cout<<x++<<endl; // post increment happens after using the value of x
    cout<<x<<endl;
    cout<<"---"<<endl;
    cout<<x<<endl;
    cout<<--x<<endl; // pre increment happens before using value of x
}