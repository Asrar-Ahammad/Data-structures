#include<iostream>
using namespace std;

#define n 10

int top = -1;
int arr[n];

void push(){
    int val;
    cout<<"Enter value  :";
    cin>>val;

    if(top>=n-1){
        cout<<"Stack Overflow";
    }
    else{
        top++;
        arr[top]=val;
    }
}

void pop(){
    if(top<=-1){
        cout<<"Stack Underflow";
    }
    else{
        cout<<"The element popped :"<<arr[top]<<endl;
        top--;
    }
}

void display(){
    if(top>0){
        cout<<"\nThe elements in stack  ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" : ";
        }
    }
    else{
        cout<<"The stack is empty";
    }
}

int main(){
    int ch;
    cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 : push();
                break;
            case 2 : pop();
                break;
            case 3 : display();
                break;
            case 4 : 
                cout<<"Sucessfully exited.";
                break;
            default : 
                cout<<"Enter valid choice.";
        }
    }while(ch!=4);
}