#include<iostream>
using namespace std;
class Student {
    public: string name;
    int roll_no;
    float total_marks;
    float percentage;
    float marks[10];
    void getdata(){
        cout<<"Enter Name of Student: ";
        cin>>name;
        cout<<"Enter Roll Number: ";
        cin>>roll_no;
        cout<<"Enter Marks in 5 Subjects: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }

};