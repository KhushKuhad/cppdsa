#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    for (int i = x; i <= x*10; i = i + x)
    {
        cout<<i<<endl;
    }
}