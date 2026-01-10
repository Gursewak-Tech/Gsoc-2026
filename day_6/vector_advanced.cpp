#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,element;
    cout<<"enter size of vector: ";
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>element;
        v.push_back(element);
    }cout<<endl;

    for(vector<int>::iterator it=v.begin(); it!=v.end() ; it++){
        cout<<*it<<endl;
    }cout<<endl;

    for(auto it=v.begin(); it!=v.end(); it++ ){
        cout<<*it<<endl;
    }cout<<endl;

    for(auto element:v){
        cout<<element<<endl;
    }


    cout<<"size of vector: "<<v.size()<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<endl;
    }
    int largest=v[0];
    for(int i=1; i<v.size(); i++){
        if(largest<v[i]){
            largest=v[i];
        }
    }
    cout<<"maximum element in a vector is: "<<largest<<endl;

    int smallest=v[0];
    for(int i=1; i<v.size(); i++){
        if(smallest>v[i]){
            smallest=v[i];
        }
    }
    cout<<"minimum element in a vector is: "<<smallest<<endl;
   
    v.pop_back();
    
    int mx=*max_element(v.begin(), v.end());
    cout<<mx<<endl;

    int mn=*min_element(v.begin(),v.end());
    cout<<mn<<endl;
}