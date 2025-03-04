#include<iostream>
using namespace std;

int main(){
    int x,result=1;
    cout<<"Enter Number : ";
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        result = result*i;
    }
    cout<<result<<endl;
}