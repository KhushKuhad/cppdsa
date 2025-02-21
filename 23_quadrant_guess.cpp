#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    if (x==0 and y==0)
    {
        cout<<"Origin"<<endl;
    }
    else if ((x>=0 and y>=0))
    {
        cout<<"1st Quadrant"<<endl;
    }
    else if ((x<=0 and y>=0))
    {
        cout<<"2nd Quadrant"<<endl;
    }
    else if ((x<=0 and y<=0))
    {
        cout<<"3rd Quadrant"<<endl;
    }
    else
    {
        cout<<"4th Quadrant"<<endl;
    }
}