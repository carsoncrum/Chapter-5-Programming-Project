
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

  string studentName;
  string firstStudent = "";
  string lastStudent = "";
  int studentCount = 0;
 
  studentName = "Jackie";
  if (studentCount == 0) {
    firstStudent = studentName;
  }
  lastStudent = studentName;
  studentCount++;
  studentName = "Sam";
  lastStudent = studentName;
  studentCount++;
  studentName = "Tom";
  lastStudent = studentName;
  studentCount++;
  studentName = "Bill";
  lastStudent = studentName;
  studentCount++;
  studentName = "Mary";
  lastStudent = studentName;
  studentCount++;
  studentName = "Paul";
  lastStudent = studentName;
  studentCount++;
  studentName = "Zev";
  lastStudent = studentName;
  studentCount++;
  studentName = "Barb";
  lastStudent = studentName;
  studentCount++;
  cout << "Number of students: " << studentCount << endl;
  cout << "Student at the front of the line: " << firstStudent << endl;
  cout << "Student at the end of the line: " << lastStudent << endl;
  return 0;
}