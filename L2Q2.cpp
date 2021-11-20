//Write a program to check whether a given string is a palindrome or not using stacks.
//Complete!

#include<iostream>
#include<cstring>
using namespace std;

class palindrome{
    public:
    int top,size,*arr;
    void push(char a){
            if(top==size-1){
                cout<<"Stack Overflow"<<endl;
            }
            top++;
            arr[top]=a;
        }
    char pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            char a=arr[top];
            top--;
            return a;
        }
};

int main(){
    char s[50],pa[50];
    cout<<"Enter a string: ";
    cin>>s;
    palindrome p;
    p.size=50;
    p.top=-1;
    p.arr=new int[p.size];
    for(int i=0;i<strlen(s);i++){
        p.push(s[i]);
    }
    for(int i=0;i<strlen(s);i++){
        pa[i]=p.pop();
        if(i==strlen(s)-1){
            pa[i+1]='\0';
        }
    }
    if(strcmp(s,pa)==0){
            cout<<"Entered string is a Palindrome"<<endl;
        }
        else{
            cout<<"Entered string is not a Palindrome"<<endl;
        }

    return 0;
}