#include<iostream>
using namespace std;

int main(){
    cout<<"ENTER OPERATION :"<<endl;
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<((float)n1)/((float)n2)<<endl;
        break;
    default:
        cout<<"invalid input!!"<<endl;
    }
}