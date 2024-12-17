#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter four num : ";
    cin >> a >> b >> c>> d;
    int greatest = a;
    if( b> greatest){
        greatest = b;
    }
    if( c> greatest){
        greatest = c;
    }
    if( d> greatest){
        greatest = d;
    }
    cout<<"the greatest num is : "<< greatest <<endl;
    return 0;
}