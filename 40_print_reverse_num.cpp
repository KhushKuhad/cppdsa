#include<iostream>
using namespace std;

int main(){
    int x,rev=0;
    cout<<"Enter Number : ";
    cin>>x;
    while (x>0)
    {
        rev = (rev + (x%10))*10;
        x = x/10;
    }
    cout<<rev/10<<endl;
}