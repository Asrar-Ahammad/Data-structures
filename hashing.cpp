#include<iostream>
using namespace std;

#define mod %
#define n 10

int arr[n];

//liner probing 

void linear_probing(){
    int h,H,key;
    cout<<"Enter key value :";
    cin>>key; 
    h = key mod n;
    for(int i=0;i<n;i++){
        H = (h+i) mod n;
        if(arr[H] == 0){
            arr[H]=key;
            break;
        }
    }
}

//Quadratic probing

void quadratic_probing(){
    int h,H,key,c1 = 2,c2 = 1;
    cout<<"Enter key value :";
    cin>>key;
    h= key mod n;
    for(int i=0;i<n;i++){
        H = (h + c1*i + c2*i*i) mod n;
        if(arr[H]==0){
            arr[H]= key;
            break; 
        }
    }
}

//Display 

void display(){
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<" "<<arr[i];
        }
        else{
            cout<<" * ";
        }
    }
}

int main(){
    int ch;
    cout<<"\n1. linear probing insert";
    cout<<"\n2. Quadratic Probing";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch){
            case 1 : 
                linear_probing();
                break;
            case 2 : 
                quadratic_probing();
                break;
            case 3 : 
                display();
                break;  
            case 4 :
                cout<<"Sucessfully exited.";
                break;
            default : 
                cout<<"Enter valid choice.";
                break;
        }
    }while(ch!=4);
    return 0; 
}