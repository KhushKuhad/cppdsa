#include<iostream>
using namespace std;

int main(){
    int x,count=0;
    cout<<"Enter number : ";
    cin>>x;

    while (x>0)
    {
        x = x/10;
        count++;
    }
    cout<<count<<endl;
}