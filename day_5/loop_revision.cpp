#include<iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n ;i++ ){
        cout<<i<<endl;
    }
}



int main(){
    int t;
    cout<<"enter number:";
    cin>>t;
    print(t);

    return 0;
}