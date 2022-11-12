#include<iostream>
using namespace std;

/*
    Types of variables:    
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false

*/

int main(){
    int x;cin>>x;
    cout<<"type of x is "<<typeid(x).name()<<endl;
    double y;cin>>y;
    cout<<"type of y is "<<typeid(y).name()<<endl;
    char z;cin>>z;
    cout<<"type of z is "<<typeid(z).name()<<endl;
    string s;cin>>s;
    cout<<"type of s is "<<typeid(s).name()<<endl;
    bool b;cin>>b;
    cout<<"type of b is "<<typeid(b).name()<<endl;
}