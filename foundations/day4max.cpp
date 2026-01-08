#include<iostream>
using namespace std;

void maxx(int arr[] ,int n){
    int largest ;
    largest=arr[0];
    for(int i=0; i<n ; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"largest: "<<largest;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    maxx(arr, n);
    return 0;
}