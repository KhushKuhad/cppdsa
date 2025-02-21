#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter num : ";
    cin>>x;

    if ((x%5==0 or x%3==0) && (x%15!=0))
    {
        cout<<"Number satisfies conditions"<<endl;
    }
    else
    {
        cout<<"Number does not satisfy the conditions"<<endl;
    }
    
}