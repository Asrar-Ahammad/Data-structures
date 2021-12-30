#include<iostream>
using namespace std;

#define n 10

int q[n];
int tail=0,head=0;

//Enqueue 
void enqueue(){
    int val;
    
    if(head==n){
        cout<<"\nThe Queue is full.";
    }
    else{
        cout<<"\nEnter value :";
        cin>>val;
        q[head]=val;
        head++;
        
    }
}

//Dequeue
void dequeue(){
    if(head==0){
        cout<<"The Queue is empty";
    }
    else{
        cout<<"The popped element :"<<q[tail];
        tail++;
    }
}

//Display
void display(){
    if(head == 0 ){
        cout<<"The Queue is empty.";
    }
    else{
        cout<<"The elements in Queue  ";
        for(int i=tail;i<head;i++){
            cout<<q[i]<<" : ";
        }
    }
}

int main(){
    int ch;
    cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 : 
                enqueue();
                break;
            case 2 : 
                dequeue();
                break;
            case 3 : 
                display();
                break;
            case 4 : 
                cout<<"Sucessfully exited.";
                break;
            default : 
                cout<<"Enter valid choice.";
        }
    }while(ch!=4);
}