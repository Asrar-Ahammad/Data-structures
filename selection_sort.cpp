#include<iostream>
using namespace std;

int main(){
    int n=100,temp;
    int arr[n];

    cout<<"Enter the size of array :";
    cin>>n;

    cout<<"Enter elements in array :";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The array after sorting :";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0; 
}