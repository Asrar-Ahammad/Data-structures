#include<iostream>
using namespace std;

int main(){
    int n=100,e;
    int arr[n];

    cout<<"Enter size of array :";
    cin>>n;

    cout<<"Enter elements in array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter an element to find it's position :";
    cin>>e;

    for(int i=0;i<=n;i++){
        if(arr[i]==e){
            cout<<"\nThe position of element is at index "<<i<<"\n";
        }
    }
}