#include<iostream>
using namespace std;



void summ(int n){
    int s=0;
    for(int i=1 ; i<=n ;i++){
        s=s+i;
    }
    cout<<"sum of first "<<n<<" number is:"<<endl;
    cout<<s<<endl;
}

int main(){
    int t;
    cout<<"enter number:";
    cin>>t;
    summ(t);

    return 0;
}