#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    if ((a+b)>c && (b+c)>a & (c+a)>b)
    {
        cout<<"Triangle Valid"<<endl;
    }
    else
    {
        cout<<"Triangle Invalid"<<endl;
    }
}