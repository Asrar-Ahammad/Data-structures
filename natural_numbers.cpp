#include<iostream>
using namespace std;

int natural(int n){
    if(n!=0){
        return n + natural(n-1);
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of terms :";
    cin>>n;
    cout<<"The sum is :"<<natural(n);
}