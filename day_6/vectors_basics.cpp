#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,element;
    vector<int> v;
    cout<<"enter size of vector:";
    cin>>n;

    for(int i=0; i<n ;i++){
        cin>>element;
        v.push_back(element);
    }

    for(auto element:v){
        cout<<element;
    }
    return 0;
}