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
    bool t=false;
    for(int i=2; i<n ;i++){
        if(n%i==0){
            t=true;
        }
        else{
            t=false;
        }
        
    }
    if(t==true){
        cout<<"prime number";
    }
    else{
        cout<<"not prime number";
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
    cin>>n>>m;
    swap(n,m);
    cout<<"a:"<<n<<endl<<"b:"<<m;
    return 0;
}



