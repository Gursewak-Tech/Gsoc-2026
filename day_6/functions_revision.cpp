#include<iostream>
using namespace std;

void factorial(int n){   // give factorial of a number
    int fact=1;
    for(int i=1; i<=n ; i++){
        fact=fact*i;
        cout<<i<<" *";
    }

    cout<<" = " <<fact;
}
void  prime(int n){    // check numcer if it is prime or not.
 if(n<=1){
    cout<<"not a prime number";
    return;
 }

 bool isprime= true;
 for(int i=2;i*i<n; i++){
    if(n%i==0){
        isprime=false;
        break;
    }
 }

 if(isprime==false){
    cout<<"not a prime number";
 }
 else{
    cout<<"it's a prime number";
 }  
 
}
void swap(int &a , int &b){ // by reference swap two numbers
    int hold=a;
    a=b;
    b=hold;
    
}



int main(){
    int n,m;
    cout<<"enter your numbers: ";
    cin>>m;
    prime(m);
    return 0;
}



