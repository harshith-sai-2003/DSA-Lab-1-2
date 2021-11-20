/*
b.) string concatenation
Complete!
*/

#include<iostream>
using namespace std;

int main(){
    string s,c;
    char r[100];
    int i,n=0;
    cout<<"Enter the string: ";
    getline(cin, s);
    cout<<"Enter the string to be concatenated: ";
    getline(cin, c);
    cout<<"Concatenated string is: ";
    for(i=0;s[i]!='\0';i++){
        r[i]=s[i];
        n++;
    }
    for(i=0;c[i]!='\0';i++){
        r[n+i]=c[i];
    }
    r[n+i]='\0';
    cout<<r;
return 0;
}
