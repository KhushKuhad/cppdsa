#include<iostream>
using namespace std;

int main(){
    int x,sum=0;
    cout<<"Enter Number : ";
    cin>>x;
    while (x>0)
    {
        sum = sum + (x%10); // x%10 gives the last digit of the number
        x = x/10;
    }
    cout<<sum<<endl;
}