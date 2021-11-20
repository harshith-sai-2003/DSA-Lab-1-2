//c.) string comparison
//Complete!

#include<iostream>
using namespace std;

int main(){
    char s[50],c[50];
    int d=0,i=0,j=0;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>c;
    for(i=0;c[i]!='\0';i++){
        if(c[i]!=s[j]){
            d=s[j]-c[i];
            break;
        }
        j++;
    }
    if(d==0)
        cout<<"Both the strings are same.\n";
    else
        cout<<"The ASCII difference between the strings is "<<d<<".\n";
return 0;
}
