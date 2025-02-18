#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;

    if (x<0)
    {
        x = -x;
    }
    cout<<x<<endl;
}