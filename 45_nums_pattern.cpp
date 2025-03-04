#include<iostream>
using namespace std;

int main(){
    int n,itr=1;
    cout<<"Enter number of rows : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<itr<<" ";
            itr++;
        }
        cout<<endl;
    }  
}