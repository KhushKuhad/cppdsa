#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= i*2; j=j+2)
        {
        cout<<j<<" ";
        }
        cout<<endl;
    }
    

}