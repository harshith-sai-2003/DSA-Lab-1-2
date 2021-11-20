//d.) to insert a sub string
//Complete!

#include<iostream>
using namespace std;

int main(){
    string s,c;
    char r[100];
    int n,i=0,p=0,q=0;
    cout<<"Enter the main string: ";
    getline(cin,s);
    cout<<"Enter the substring: ";
    getline(cin,c);
    cout<<"Enter the position where the string needs to be inserted: ";
    cin>>n;
    for(i=0;s[i]!='\0';i++)
        p++;
    for(i=0;c[i]!='\0';i++)
        q++;
    for(i=0;i<n;i++){
        r[i]=s[i];
    }
    for(i=0;i<q;i++){
        r[n+i-1]=c[i];
    }
    for(i=0;i<p-n+1;i++){
        r[n+q-1+i]=s[n-1+i];
    }
    r[p+q]='\0';
    cout<<"Combined string is: "<<r<<endl;
return 0;
}