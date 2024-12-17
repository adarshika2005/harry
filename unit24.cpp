#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    if(isupper(ch))
    cout<<"uppercase";
  else if(islower(ch))
    cout<<"lowercase";
     else
    cout<<"not an alphabetic latter";
return 0;


}