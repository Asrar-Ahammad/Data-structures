#include<iostream>
using namespace std;

int prime(int n,int i){
    if(i==1){
        return 1;
    }
    else{
        if(n%i==0){
            return 0;
        }
        else{
            return prime(n,i-1);
        }
    }
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int p;
    p = prime(n,n/2);
    (p==1)?cout<<"It is a Prime number": cout<<"It is not Prime number";
}