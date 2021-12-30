#include<iostream>
using namespace std;

int main(){
    int n=100;
    int arr[n];
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"\nEnter elements in array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nThe elements in array :";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    int pos;
    cout<<"\nEnter position to be deleted :";
    cin>>pos;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"\nThe array after deletion :";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}