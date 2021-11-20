/*
Write a C++ program to define a class student with the data members 
to store name, roll no and grade of the student. 
Also write the member functions to read, display, 
and sort student information according to the roll number of the student. 
All the member functions will have array of objects as arguments.
Complete!
*/

#include<iostream>
using namespace std;

class student{
    public:
    char name[50],grade;
    int roll;
    void read(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the roll number of the student: ";
        cin>>roll;
        cout<<"Enter the grade secured by the student: ";
        cin>>grade;
        cout<<endl;
    }
    void disp(){
        cout<<"\n"<<"Name: "<<name<<"\n";
        cout<<"Roll Number: "<<roll<<"\n";
        cout<<"Grade: "<<grade<<"\n";
    }
};

void sortStudents(student s[10], int n){
    int min,i,j;
    student temp;
    for(i=0;i<n;i++){
        min=s[i].roll;
        for(j=0;j<n;j++){
            if(s[i].roll<s[j].roll){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

int main(){
    student s[10];
    int n;
    int i=0;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        s[i].read();
    }
    for(i=0;i<n;i++){
        s[i].disp();
    }
    cout<<endl;

    sortStudents(s,n);
    
    cout<<"Sorted data is:\n";
    for(i=0;i<n;i++){
        s[i].disp();
    }
return 0;
}