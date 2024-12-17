#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n% 97==0){
        cout<<n<<"is divide by 97"<<endl;
    }
    else{
        cout<<n<<"is not divide by 97 "<<endl;
    }
    return 0;
}