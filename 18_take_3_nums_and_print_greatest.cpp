#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1st num : ";
    cin>>a;
    cout<<"Enter 2nd num : ";
    cin>>b;
    cout<<"Enter 3rd num : ";
    cin>>c;

    if (a>=b && a>=c)
    {
        cout<<a<<" is largest"<<endl;;
    }
    else if (b>=a && b>=c)
    {
        cout<<b<<" is largest"<<endl;
    }
    else
    {
        cout<<c<<" is largest"<<endl;
    }
}