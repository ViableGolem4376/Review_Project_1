#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include "grades.h"
using namespace std;

int Student::calculateGrade() {
        ofstream infile("dataset.txt",ios::in);
        if(!infile){cerr<<"File could not be found!";exit(1);}
        
        while (i < 1 && total < 100) {
            if (name_taken == false) {
                cout << "Enter your first name." << endl;
                cin >> student_f_name;
                infile << student_f_name << " ";
        
                cout << "Enter your last name." << endl;
                cin >> studentl_name;
                infile << studentl_name << " " << endl;
                name_taken = true;
            }
            
            cout << "Enter the amount of points an assignment was worth out of the total of 100 for the class." << endl;
            cin >> weight;
            cout << "Enter the number of points you received on the assignment." << endl;
            cin >> grade;
            
            total = total + weight;

            infile << grade << " " << endl;
            
            sum = sum + grade;
            
            cout << "Would you like to enter another grade? (Type 0 for yes and 1 for no)." << endl;
            cin >> i;
            counter++;
        }
        
        infile << "Your grade average is" << " ";
        infile << sum << endl;

        return 0;
    }
