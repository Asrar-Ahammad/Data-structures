#include<iostream> 
using namespace std;
int stack[100],n=100,top=-1;
void push(int val){
    if(top>=n-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        stack[top] = val;
    }
}

void pop(){
    if(top<=-1){ 
        cout<<"Stack Underflow"<<endl;
    }
    else{ 
        cout<<"The popped element is :"<<stack[top]<<endl;
        top--;
    }
}

void display(){
    if(top>=0){
        cout<<"The elements in stack :";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<""<<endl;
        }
    }
    else{ 
        cout<<"Stack is empty"<<endl; 
        }
}

int main(){
    int choice,val;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    
    do{ 
        cout<<"Enter a choice :"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter the value to be pushed :"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                cout<<"Exiting.........................."<<endl;
                cout<<"Sucessfully exited."<<endl;
            }
            default:{
                cout<<"Enter a valid choice"<<endl;
            }
        }
    }while(choice!=4);
    return 0;
}
