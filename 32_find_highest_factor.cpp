#include<iostream>
using namespace std;

// int main(){
//     int x,highest_factor = 0;
//     cout<<"Enter number to find highest factor : ";
//     cin>>x;
//     for (int i = 1; i <= (x/2); i++)
//     {
//         if (x%i==0) highest_factor = i;
//     }
//     cout<<highest_factor<<endl;
// }
//BETTER WAY
int main(){
    int x,highest_factor=1;
    cout<<"Enter Number : ";
    cin>>x;
    for (int i = x/2; i >= 1; i--)
    {
        if (x%i==0){
            cout<<i<<endl;
            break;
        }
    }
}