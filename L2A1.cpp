//Write a program to implement Multiple stack using arrays.
//Complete!

#include<iostream>
using namespace std;

class mStack{
public:
    int s[100],top[10],bot[10],n,maxSize,i,j;
    mStack(){
        cout<<"Enter the maximum size of the stack: ";
        cin>>maxSize;
        cout<<"Enter the number of stacks: ";
        cin>>n;
        for(i=0;i<n;i++){
            top[i]=(maxSize*i/n)-1;
            bot[i]=(maxSize*i/n)-1;
        }
    }
    void push(int a, int i){
        if(top[i]==(maxSize*(i+1)/n)-1)
            cout<<"Stack is full.\n";
        else
            s[++top[i]]=a;
    }
    int pop(int i){
        if(top[i]==bot[i])
            cout<<"Stack is empty.\n";
        else
            return s[top[i]--];
    }
};

int main(){
    mStack m1;
    int i,j,x;
    for(i=0;i<m1.n;i++){
            cout<<"Enter the elements in stack "<<i+1<<endl;
        for(j=0;j<m1.maxSize/m1.n;j++){
            cin>>x;
            m1.push(x,i);
        }
    }

    for(i=0;i<m1.n;i++){
        cout<<"Pop elements of stack "<<i+1<<endl;
        for(j=0;j<m1.maxSize/m1.n;j++){
            cout<<m1.pop(i)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
