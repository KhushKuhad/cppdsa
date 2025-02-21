#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter marks : "<<endl;
    cin>>x;

    if (x>80 && x<=100)
    {
        cout<<"VERY GOOD"<<endl;
    }
    else if (x>60 && x<=80)
    {
        cout<<"GOOD"<<endl;
    }
    else if (x>40 && x<=60)
    {
        cout<<"Average"<<endl;
    }
    else
    {
        cout<<"FAIL"<<endl;
    }
}