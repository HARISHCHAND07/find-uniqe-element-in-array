#include<iostream>
using namespace std;
int find(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }return ans;
}
int main(){
    int arr[50],n;
    cout<<"size=";
    cin>>n;
    cout<<"element=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int no=find(arr,n);//------------------------------n----------------
    cout<<"no. appears one="<<no;
    

    return 0;
}