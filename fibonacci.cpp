// /* This is a program to print fibonacci series*/
// /* The output is 0 1 1 2 3 5 8 ...... */

#include<iostream>
using namespace std;

int fibonacci(int x){
    if(x==1 || x==0){
        return (x);
    }
    else{
        return (fibonacci(x - 1) + fibonacci(x - 2));
    }
}

int main(){
    int n,i=0;
    cout<<"Enter number of terms to be printed :";
    cin>>n;
   
    cout<<"\nThe Fibonacci series :";

    for(int i=0;i<n;i++){
        cout<<" "<<fibonacci(i);
    }
    return 0;
}