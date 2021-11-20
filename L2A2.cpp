//Write a program to check for matching parenthesis in a given expression.

#include<iostream>
#include<cstring>
using namespace std;

class parenthesis{
    public:
    int top;
    int size;
    int *arr;
    void push(char a){
        if(top==size-1){
                cout<<"Stack is full."<<endl;
        }
        else if(a==')' || a=='('){
            top++;
            arr[top]=a;
        }
    }

    void checkMatching(){

    }

    char pop(){
            if(top==-1){
                cout<<"Stack is empty."<<endl;
                return 0;
            }
            char a=arr[top];
            top--;
            return a;
        }
};

int main(){
    parenthesis p;
    char exp[50];
    int i,n;
    p.size=50;
    p.top=-1;
    p.arr=new int[p.size];
    cout<<"Enter the parenthesized expression: ";
    cin>>exp;
    n=strlen(exp);
    for(i=0;i<n;i++){
        p.push(exp[i]);
        if(i==n-1){
            p.push('\0');
        }
    }

    for(i=0;p.top!=-1;i++){
        cout<<p.pop()<<"\t";
    }    
}
