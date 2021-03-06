#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* link;
};

struct node* root = NULL;

void at_begin(){
    int val;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"\nEnter value :";
    cin>>val;
    temp->data=val;
    temp->link=NULL;
    if(root == NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
    cout<<"\nItem Inserted.";
}

void append(){
    int val;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    struct node* p;
    cout<<"Enter data :";
    cin>>val;
    temp->data=val; 
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
    cout<<"\nItem pushed.";
}

int length(){
    int count=0;
    struct node* p;
    p=root;
    while(p!=NULL){
        count++;
        p=p->link;
    }
    return count;
}

void atnode(){
    int loc,i=1;
    struct node* temp;
    struct node* p;
    int len=length();

    cout<<"\nEnter location value :";
    cin>>loc;

    if(loc>len){
        cout<<"\nInvalid location";
    }
    else{
        p=root;
        while(loc>i){
            p=p->link;
            i++;  
        }
        temp=(struct node*)malloc(sizeof(struct node));
        temp->link=p->link;
        p->link=temp;
        cout<<"Enter data :";
        cin>>temp->data;
    }
    cout<<"\nItem inserted.";
}
void delete_node(){
    int loc,len;
    struct node* temp;
    cout<<"\nEnter location :";
    cin>>loc;
    len=length();
    if(loc>len){
        cout<<"Invalid location.";
    }
    else if(loc==1){
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else{
        int i=1;
        struct node* p,*q;
        p=root;
        while(loc-1>i){
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}

void display(){
    struct node *p;
    p=root;
    if(root==NULL){
        cout<<"\nThe list is Empty.";
    }
    else{
        while(p!=NULL){
            cout<<p->data<<"->";
            p=p->link;
            }
            cout<<"NULL";
    }
}

int main(){
    int ch;
    do{
        cout<<"\n1. Insert at beginning";
        cout<<"\n2. Insert at Between";
        cout<<"\n3. Insert at End";
        cout<<"\n4. Delete";
        cout<<"\n5. Display";
        cout<<"\n6. Exit";
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1: 
                at_begin();
                break;
            case 2: 
                atnode();
                break;
            case 3: 
                append();
                break;
            case 4: 
                delete_node();
                break;
            case 5: 
                display();
                break;
            case 6: 
                cout<<"Successfully Exited.";
                break;
        }
    }while(ch!=6);
}