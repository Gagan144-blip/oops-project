#include<iostream>
using namespace std;
class Student {
    public: int roll_no;
    string name;
    float marks[10];
    void getdata(){
        cout<<"Enter Student Roll Number: ";
        cin>>roll_no;
        cout<<"Enter Student name: ";
        cin>>name;
        cout<<"Enter Student marks in 5 subjects: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void compute_total(){
        float total=0;
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        cout<<"Total marks of "<<name<<" (Roll No: "<<roll_no<<") is: "<<total<<endl;
    }

};