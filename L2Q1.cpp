//Write a program to implement stack concept.
//Complete!

#include<iostream>
using namespace std;

class stack{
public:
    int top=-1,m,arr[50];
    void push(int a){
        if(top==m-1)
            cout<<"Stack is full.\n";
        else{
                top++;
        arr[top]=a;
        }
    }
    int pop(){
        int x;
        if(top==-1)
            cout<<"Stack is empty.\n";
        else
            x=arr[top--];
        return x;
    }
    void disp(){
        int i;
        if(top==-1)
            cout<<"Empty Stack\n";
        else{
            for(i=0;i<top+1;i++)
            cout<<arr[i]<<"\t";

            cout<<endl;
        }
    }
};

int main(){
    stack s;
    int i,x;
    cout<<"Enter the maximum size of the stack: ";
    cin>>s.m;
    cout<<"Enter the elements into the stack:\n";
    for(i=0;i<s.m;i++){
        cin>>x;
        s.push(x);
    }
    cout<<"The elements in the stack are:\n";
        s.disp();
    cout<<"Pop all elements of the stack:\n";
    for(i=0;i<s.m;i++)
        cout<<s.pop()<<"\t";
    return 0;
}
