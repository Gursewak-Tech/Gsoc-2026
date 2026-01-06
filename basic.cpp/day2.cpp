#include<iostream>
using namespace std;

 void takeprint(int n){
    int arr[n];
    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }
        cout<<"values of array are:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
void maxx(int n){
    int arr[n];

    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }
        
    int largest=arr[0];

    for(int i=0; i<n ;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"max value in array is:"<<largest;
}
void minn( int n){
    int arr[n];

    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int i=0 ; i<n ;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"minimum value in array is:"<<smallest;

}
void reverse(int n){
    int arr[n];

    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }
    cout<<"reverse of anarray is: ";
    for(int i=n-1; i>=0 ;i--){
        cout<<arr[i]<<" ";
    }
    
}
void oddeven(int n){
    int arr[n];

    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }

    for(int i=0; i<n ;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" is even"<<endl;
        }
        else{
            cout<<arr[i]<<" is odd"<<endl;
        }
    }
}
void linear(int n , int key){
    int arr[n];

    for(int i=0; i<n ;i++){  // input array values
        cin>>arr[i];
    }
    
    bool found= false;
    for(int i=0; i<n ;i++){
        if(arr[i]==key){
            cout<<"key found";
            found=true;
            break;
             }
         }
    if(found==false){
        cout<<"key not found";
    }     
        
        
}


int main(){
        int t , key;
        cin>>t;
        cout<<"enter key: ";
        cin>>key;
        linear(t , key);
        return 0;
}