#ifndef GRADES_H
#define GRADES_H
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string student_f_name;
    string studentl_name;
    double grade;
    double weight;
    double points_received;
    double sum = 0;
    int i = 0;
    double total;
    bool name_taken = false;
    int counter = 0;
    int counter2 = 0;
    int calculateGrade();
};
#endif
