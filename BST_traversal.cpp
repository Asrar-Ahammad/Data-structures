#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node* right;
    struct node* left;
};

struct node* root=NULL;

void adding_node(){
    struct node* temp,*p;
    int val;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter value :";
    cin>>val;
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    p=root;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node* current;
        current = root;

        while (current){
            p=current;
            if(temp->data > current->data){
                current = current->right;
            }
            else {
                current = current->left; 
            }
        
        }
         if(temp->data > p->data){
                p->right= temp;
            }
            else{
                p->left=temp;
            }
    }
}

void in_order(struct node* temp){
    if(temp->left){
        in_order(temp->left);
    }
    cout<<temp->data<<"->";
    if(temp->right){
        in_order(temp->right);
    }
}

void post_order(struct node* temp){
    if(temp->left){
        post_order(temp->left);
    }
    if(temp->right){
        post_order(temp->right);
    }
    cout<<temp->data<<"->";
}

void pre_order(struct node* temp){
    cout<<temp->data<<"->";
    if(temp->left){
        pre_order(temp->left);
    }
    if(temp->right){
        pre_order(temp->right);
    }
}

int main(){
    int ch;
    cout<<"\n1. INSERT"; 
    cout<<"\n2. INORDER TRAVERSAL";
    cout<<"\n3. PREORDER TRAVERSAL";
    cout<<"\n4. POSTORDER TRAVERSAL";
    cout<<"\n5. EXIT";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 : 
                adding_node();
                break;
            case 2 : 
                cout<<"Inorder Traversal :"<<endl;
                in_order(root);
                break;
            case 3 : 
                cout<<"PreOrder Traversal :"<<endl;
                pre_order(root);
                break;
            case 4 : 
                cout<<"PostOrder Traversal :"<<endl;
                post_order(root);
                break;
            case 5 : 
                cout<<"Suceccfully exited.";
                break;
            default : 
                cout<<"Enter vaild choice. ";
                break;
        } 
    }while(ch!=5);
    return 0;
}