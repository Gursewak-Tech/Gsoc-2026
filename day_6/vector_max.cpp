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


    int largest=v[0];
    for(int i=1; i<n ;i++){
        if(largest<v[i]){
            largest=v[i];
        }
        
    }
    cout<<"maximum element of vector is: "<<largest<<endl;
    return 0;
}