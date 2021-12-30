#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*link;
};
struct node* root=NULL;
void push(){
    struct node* temp;
    int val;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter value :";
    cin>>val;
    temp->data=val;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
    cout<<"\nItem pushed.";
}
void pop(){
    int loc=1;
    struct node* temp;
    if(root==NULL){
        cout<<"The stack is empty.";
        }
    else{
        temp=root;
        cout<<"The popped element :"<<temp->data;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
}

void display(){
    struct node* p;
    p=root;
    if(root==NULL){
        cout<<"The stack is empty.";
    }
    else{
        cout<<"The elements in stack :\n";
        while(p!=NULL){
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<"NULL";
    }
}
int main(){
    int ch;
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1:
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                display();
                break;
            case 4 :
                cout<<"\n-----Successfully Exited-----\n";
                break;
            default :
                cout<<"\nInvalid choice.";
                break;
        }
    }while(ch!=4);
    return 0;
}