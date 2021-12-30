#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
void append(){
    int val;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    struct node* p;
    cout<<"\nEnter value :";
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

void atbegin(){
    struct node* temp;
    int val;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"\nEnter value :";
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

int length(){
    int count=0;
    struct node* p;
    p=root;
    while(p->link!=NULL){
        p=p->link;
        count++;
    }
    return count;
}
void atnode(){
    int loc,i=1;
    int len=length();
    struct node* temp;
    struct node* p;
    cout<<"\nEnter location :";
    cin>>loc;
    
    if(loc>len){
        cout<<"\nThe value is more than lenght of list.";
    }
    else{
        p=root;
        while(loc>i){
            p=p->link;
            i++;
        }
        temp= (struct node*)malloc(sizeof(struct node));
        temp->link=p->link;
        p->link=temp;
        cout<<"\nEnter data :";
        cin>>temp->data;
        
    }
    cout<<"\nItem pushed.";
}

void display(){
    struct node* p;
    p=root;
    if(p==NULL){
        cout<<"\nThe list is empty.";
    }
    else{
        while(p!=NULL){
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<"NULL";
    }
}

void delete_node(){
    struct node* temp;
    int loc,i;
    int len=length();
    cout<<"\nEnter location :";
    cin>>loc;
    if(loc>len){
        cout<<"\nInvalid location.";
    }
    else if(loc==1){
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else{
        struct node *p,*q;
        p=root;
        i=1;
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
int main(){
    int ch;
    cout<<"\n1. Insert at beginning";
    cout<<"\n2. Insert at middle"; 
    cout<<"\n3. Insert at end"; 
    cout<<"\n4. Display"; 
    cout<<"\n5. Delete";
    cout<<"\n6. Exit";

    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 :
                atbegin();
                break;
            case 2:
                atnode();
                break;
            case 3:
                append();
                break;
            case 4 :
                display();
                break;
            case 5 :
                delete_node();
                break;
            case 6 :
                cout<<"\nSucessfully exited.";
                break;
            default :
                cout<<"\nEnter a valid choice.";
                break;
        }
    }while(ch!=6);
    return 0;
}