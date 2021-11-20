//Write a program to convert a given decimal number to a number in any base using stack.
//Complete!

#include<iostream>
using namespace std;

class converter{
    public:
    int top,size,arr[];
    void push(char a){
            if(top==size-1){
                cout<<"Stack is full."<<endl;
                return;
            }
            top++;
            arr[top]=a;
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
    void decimalConverter(int number,int b) {
        int num=number;
      while(number > 0) {
      int rem = number % b;
      number = number / b;
      if(rem>=0 && rem<=9)
      push((char)(rem+'0'));
      else
      push(rem-10+'A');
   }
   cout<<num<<" in base "<<b<<" is ";
   while(top!=-1) {
      cout <<pop();
   }
}
};

int main() {
   int num,base;
   converter c;
   c.top=-1;
   c.size=50;
   cout << "Enter a number: ";
   cin >> num;
   cout<<"Enter the base: ";
   cin>>base;
   c.decimalConverter(num,base);
   return 0;
}