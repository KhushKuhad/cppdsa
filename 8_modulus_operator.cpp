#include<iostream>
using namespace std;

int main(){
    cout<<7%5<<endl; // modulus operator gives remainder
    cout<<7%10<<endl; // a%b = a (if a < b)
    cout<<7%7<<endl; // a%a = 0
    cout<<7%(-2)<<endl; // a%(-b) = a%b
    cout<<(-7)%2<<endl; // (-a)%b = -(a%b)
}