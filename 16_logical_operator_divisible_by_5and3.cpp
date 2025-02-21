#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a 3 digit number : ";
    cin>>x;

    if (x%5==0 && x%3==0)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}