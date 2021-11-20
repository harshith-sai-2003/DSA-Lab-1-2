/*
Write a program to perform following string operations without using string handling functions:
a.) length of the string
Complete!
*/

#include<iostream>
using namespace std;

int main(){
    int count=0;
    char s[50];
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Length of the string is: ";
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    cout<<count;
return 0;
}
