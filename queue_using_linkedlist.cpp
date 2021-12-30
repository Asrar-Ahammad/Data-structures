#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node* root=NULL;

void enqueue(){
    int val;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"\nEnter value :";
    cin>>val;
    temp->data=val;
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
    cout<<"\nItem pushed.";
}
int length(){
    int count=0;
    struct node* p;
    p=root;
    while(p->link!=NULL){
        count++;
        p=p->link;
    }
    return count;
}
void dequeue(){
    struct node *p,*q;
    int len=length();
    int i=0;
    // cout<<"\nlength:"<<len;
    if(root==NULL){
        cout<<"The Queue is empty.";
    }
    else{ 
        p=root;
        while(len-1>i){
            p=p->link;
            i++;
        }
        // cout<<"The element popped :"<<p->data<<endl;
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}

void display(){
    struct node *p;
    if(root==NULL){
        cout<<"\nQueue is empty";
    }
    else{
        p=root;
        while(p!=NULL){
            cout<<p->data<<"->";
            p=p->link;
        }
    cout<<"NULL";
    }
}

int main(){
    int ch;
        cout<<"\n1. Enqueue";
        cout<<"\n2. Dequeue"; 
        cout<<"\n3. Dispaly"; 
        cout<<"\n4. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 :
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4 :
                cout<<"\n-----Successfully Exited-----\n";
                break;
            default :
                cout<<"\nEnter a valid choice.";
                break;
        }
    }while(ch!=4);
}