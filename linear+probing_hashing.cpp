#include<iostream>
using namespace std;

int main(){
    int n=100,h,h1,i=0,temp;
    int arr[n];
    cout<<"Enter size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEnter an element to be inserted  in hash array :";
        cin>>arr[i];
        temp=i;
        h1=arr[i]%n;
        i=0;        //Again setting the value of i as 0;
        h=(h1+i)%n;         //Here mod is written as "%".
        if(arr[h]==NULL){
        arr[h]=arr[i];
        }
        else{       //This is the state at which collision occurs.
            
        }
    }
}