// day 1  (5 codes).

#include<iostream>
using namespace std;

void print(){
    for(int i=1; i<=10 ; i++){
        cout<<i<< endl;
    }

}
void sumN(int n){

    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum<<endl;
    
}
void check(int n){
    if(n%2==0)
    cout<<"even";
    else
    cout<<"odd";
}
void add(int a,int b){
    cout<< a+b;
}
void swap(int a,int b){
    int hold;//by value no chang in original
    hold=a;
    a=b;
    b=hold;
    cout<<"a:"<<a << endl<<"b:"<<b<<endl;
}
void swapref(int &a,int &b){
    int hold;//by reference change in originals
    hold=a;
    a=b;
    b=hold;
    cout<<"a:"<<a << endl<<"b:"<<b<<endl;
}
int swapee(int &a, int &b){
    int hold;
    hold=a;
    b=hold;    // it has some problems .
    return a,b ;
    

}




int main(){
    int a,b;
    cin>>a>>b;
    cout<<swapee(a,b);
    return 0;



}
