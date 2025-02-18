#include<iostream>
using namespace std;

int main(){
    int cp;
    int sp;
    cout<<"Cost Price : ";
    cin>>cp;
    cout<<"Selling Price : ";
    cin>>sp;

    if (sp>cp)
    {
        cout<<"PROFIT of "<<sp-cp<<endl;
    }
    else if (sp<cp)
    {
        cout<<"LOSS of "<<cp-sp<<endl;
    }
    else
    {
        cout<<"break even"<<endl;;
    }
}