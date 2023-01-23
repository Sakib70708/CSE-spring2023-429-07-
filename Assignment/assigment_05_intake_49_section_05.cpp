//Assignment No:05
//assignment name:BUBT grading policy is :


#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your BUBT Semester Marks : ";
    cin>>marks;
    if (marks >= 80){
        cout<<"You got in this semester A+";
    }
    else if (marks >= 75){
        cout<<"Your Grade is A";
    }
    else if (marks >= 70){
        cout<<"You got in this semester  A-";
    }
    else if (marks >= 60){
        cout<<"You got in this semester  B";
    }
    else if (marks >= 55){
        cout<<"You got in this semester  B-";
    }
    else if (marks >= 50){
        cout<<"You got in this semester  C+";
    }
    else if (marks >= 45){
        cout<<"You got in this semester  C";
    }
    else if (marks >=40){
        cout<<"You got in this semester  D";
    }
    else if (marks <= 40){
        cout<<"You got in this semester  F";
    }
    else{
        cout<<"Your marks us unvalid";
    }
    return 0;
}
