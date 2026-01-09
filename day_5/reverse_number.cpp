#include<iostream>
using namespace std;

int main(){
    int n , rev , last;
    cout<<"enter your number : ";
    cin>>n;

    rev=0;
    while(n!=0){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
  }
  cout<<rev;
  return 0;


}