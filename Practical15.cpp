#include<iostream>
using namespace std;

class Student {
  public:
    string name;   
    string course;
    int birthYear;
};

int main() {
  Student student1;
  student1.name = "Shiv";
  student1.course = "BCA";
  student1.birthYear = 2002;

  Student student;
  student.name = "Sagar";
  student.course = "BCA";
  student.birthYear = 2002;

  cout << student1.name << " " << student1.course << " " << student1.birthYear <<endl;
  cout << student.name << " " << student.course << " " << student.birthYear <<endl;
  return 0;
}