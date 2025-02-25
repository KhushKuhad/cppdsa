#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int highest_factor = 1;
    for (int i = n/2; i >= 1; i--)
    {
        if (n%i==0)
        {
            highest_factor = i;
            break;
        }
    }
    (highest_factor==1) ? cout<<"Prime"<<endl:cout<<"Composite"<<endl;
}