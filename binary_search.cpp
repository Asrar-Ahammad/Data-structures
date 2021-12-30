#include<iostream>
using namespace std;
int binary_search(int val,int arr[]){
    int low = 0;
    int high = 7;
    while(low<=high){
        int mid=(low+high)/2;
        if(val>arr[mid]){
            low = mid+1;
        }
        if(val<arr[mid]){
            high = mid-1;
        }
        if(val==arr[mid]){
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,8,23,34,51,72,97,104};
    int num;
    cout<<"\nEnter number to find index :";
    cin>>num;
    int result= binary_search(num,arr);
    if(result==-1){
        cout<<"The element is not found.";
    }
    else{
    cout<<"\nThe element is at index :"<<binary_search(num,arr);
    }
    return 0;
}