#include <iostream>
using namespace std;
#define N 5


int queue[N];
int tail = 0, head = 0;


void enqueue() {
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    if(tail == N) {
        cout<<"Overflow\n";
    }else {
        queue[tail] = num;
        tail++;
    }
}

void dequeue() {
    int element;
    
    if(head && tail == 0) {
        cout<<"Underflow\n";
    }else {
        element = queue[head];
        cout<<"Dequeue element: "<<element<<endl;
        head++;
    }
}

void display() {
    if(tail == 0){
        cout<<"Underflow\n";
    }else {
        cout<<"Queue value: ";
        for (int i = 0; i < N; i++)
            cout<<queue[i]<<" ";
    }
}



int main() {
    int choice;
    cout<<"1.Insert elements in Queue\n2.dequeue\n3.display\n4. Exit";
    
    do {
        cout<<"\nEnter the choice : ";
        cin>>choice;
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting.....";
                cout<<"Sucessfully exited.";
                break;
            default :
                cout<<"Invalid Input";
        }
    }while(choice!=0);

    return 0;
}