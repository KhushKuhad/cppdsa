#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;

    if ((l*b)>(l+b))
    {
        cout<<"Area Greater"<<endl;
    }
    else if ((l*b)<(l+b))
    {
        cout<<"Perimeter Greater"<<endl;
    }
    else
    {
        cout<<"Both Equal"<<endl;
    }
    
}