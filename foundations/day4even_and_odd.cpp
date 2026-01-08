#include<iostream>
using namespace std ;

void evenodd(int arr[],int n){
    for(int i=0; i<n ; i++){
        if(arr[i]%2==0){
            cout<<"even:"<<arr[i]<<endl;
        }
        else{
            cout<<"odd:"<<arr[i]<<endl;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    evenodd(arr,n);
}