#include<iostream>
using namespace std;

int tree[100];


/*Inserting at root node*/
void root_node(int root){
    if(tree[0]!=0){
        cout<<"The root node already exists. ";
    }
    else{
        cout<<"\nEnter root data :";
        cin>>root;
        tree[0]=root;
    }
    
}
//Inserting at left node
void left_node(int left, int parent){
    cout<<"\nEnter parent index : ";
    cin>>parent;
    if(tree[parent]==0){
        cout<<"\nParent node doesn't exist at "<<(parent*2)+1;
    }
    else{
        cout<<"\nEnter left node : ";
        cin>>left;
        tree[(parent*2)+1]=left;
    }
    
}
//Inserting at right node
void right_node(int right, int parent){
    cout<<"\nEnter Parent index :";
    cin>>parent;
    if(tree[parent]==0){
        cout<<"\nParent node donot exist at"<<(parent*2)+2;
    }
    else{
        cout<<"\nEnter right node :";
        cin>>right;
        tree[(parent*2)+2]=right;
    }
    
}

void display(){
    for(int i=0;i<10;i++){
        if(tree[i]!=0){
            cout<<tree[i]<<" ";
        }
        else{
            cout<<"*"<<" ";
        }
    }
    
}
int main(){
    int parent,root,left,right,ch;
    cout<<"\n1. To Enter root node";
    cout<<"\n2. To Enter left node";
    cout<<"\n3. To Enter right node";
    cout<<"\n4. To display tree";
    cout<<"\n5. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 :
                root_node(root);
                break;
            case 2:
                left_node(left,parent);
                break;
            case 3 :
                right_node(right,parent);
                break;
            case 4 :
                display();
                break;
            case 5:
                cout<<"\nSucessfully Exited";
                break;
            default :
                cout<<"\nEnter a valid choice ";
                break;
        }
    }while(ch!=5);
    return 0;
}