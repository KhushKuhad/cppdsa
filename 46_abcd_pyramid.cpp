#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter pyramid size(less than 26) : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        for (int j = 1; j <= i; j++)
        {
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}
