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
    if (a<=b)
    {
        if (a<=c)
        {
            cout<<a<<" is smallest"<<endl;
        }
        else
        {
            cout<<c<<" is smallest"<<endl;
        }
    }
    else
    {
        if (b<=c)
        {
            cout<<b<<" is smallest"<<endl;
        }
        else
        {
            cout<<c<<" is smallest"<<endl;
        }
    }
}