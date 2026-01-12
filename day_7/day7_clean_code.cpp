#include<iostream>
using namespace std;

void prime(int n){

    if(n<1){
        cout<<"it is not prime number";
    }

    bool isprime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isprime=false;
        }
    }

    if(isprime==true){
        cout<<"it is a prime number";
    }
    else{
        cout<<"it is not a prime number";
    }

}
int reverse(int n){
    int element,rev, i;
    rev=0;
    while(n!=0){
        element=n%10;
        rev=element*10+rev;
        n=n/10;

    }
    return rev;
}

int main(){
    int n;
    cout<<"enter your number";
    cin>>n;

    cout<< reverse(n);

    return 0;
}