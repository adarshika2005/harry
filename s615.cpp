#include<iostream>
using namespace std;
int main(){
    float pi,r,h ,volume;
    cout<<"enter the value of pi "<<endl;
    cin>>pi;
    cout<<"enter the value of r "<<endl;
    cin>>r;
    cout<<"enter the value of h "<<endl;
    cin>>h;
    volume =pi*r*r*h;
    cout<<"volume of cylinder is "<<volume<<endl;
    return 0;
}