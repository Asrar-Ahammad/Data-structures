#include<iostream>
#include<string>
using namespace std;

void rev(string &str,int &i,int j){ 
    if(j==str.length()){
        return;
    }
    rev(str,i,j+1);

        if(i<=j){ 
            swap(str[i],str[j]);
            i++;
        }
    }

void rev(string &str){
    int i=0;
    rev(str,i,0);
}

int main(){
    string str;

    cout<<"Enter a String :";
    cin>> str;

    rev(str);
    cout<<str;

    return 0;

}