#include<iostream>
using namespace std;

int main(){
    int count =0;
    int n;
    cout<<"enter your number: ";
    cin>>n;

    if(n==0){
        count=1;
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
        cout<<"number of digits in a number is: "<<count<<endl;
        return 0;


    }

    return 0;
}