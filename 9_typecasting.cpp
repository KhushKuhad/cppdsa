#include<iostream>
using namespace std;

int main(){
    //typecasting for int to float 
    int x,y;
    cout<<"Enter 1st num : ";
    cin>>x;
    cout<<"Enter 2nd num : ";
    cin>>y;
    cout<<x<<"/"<<y<<" : ";
    cout<<((float)x)/((float)y)<<endl; // (float)x -> typecasting x into a float
}