//display 1,2,4,8,16..... till n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int gp = 1;
    for (int i = 1; i<=n; i++)
    {
        cout<<gp<<endl;
        gp = gp*2;
    }
}