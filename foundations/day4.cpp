#include<iostream>
using namespace std;

void swap(int a , int b){//pass by value
    int hold=a;
    a=b;
    b=hold;
    cout<<"values of a and b after swaping"<<endl;
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}
void swapr(int &a , int &b){//pass by reference
    int hold=a;
    a=b;
    b=hold;
    cout<<"values of a and b after swaping"<<endl;
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
     cout<<"values of a and b before swaping"<<endl;
    cout<<a<<endl<<b<<endl;
}