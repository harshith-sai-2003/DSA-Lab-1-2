//e.) to delete a substring
//Completed!

#include<iostream>
using namespace std;

int main(){
    string str,del;
    char p[100];
    int i,j,n=0,m=0,diff,x;
    cout<<"Enter the string: ";
    getline(cin, str);
    cout<<"Enter the string to be deleted: ";
    getline(cin,del);
    for(i=0;str[i]!='\0';i++)
    n++;

    for(j=0;del[j]!='\0';j++)
    m++;

   for(i=0;i<n;i++)
    {
        x=i;
        for(j=0;j<m;j++)
        {
            if(str[i]==del[j])
            {
                i++;
            }
        }
        diff=i-x;
        if(diff==m){
            break;
        }
    }
    if(diff==m){
    i=x;
    for(j=i;j<(n-m);j++){
        str[j]=str[j+m];
        }
    n=n-m;
    for(i=0;i<n;i++){
        p[i]=str[i];
    }
    p[n]='\0';
    cout<<"Final string is: "<<p<<endl;
    }
    else{
        cout<<"Entered substring does not exist in main string."<<endl;
    }

return 0;
}