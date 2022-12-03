/*
 PURPOSE :  This simple code is intended to give the grade of a student following the
            Nigerian university grading system [https://en.wikipedia.org/wiki/Academic_grading_in_Nigeria], 
            on the following inputs:
                Primary inputs: course name and course score.
                Secondary inputs: student name, registration number and department.

LAST UPDATE: Sat| 3rd | dec | 2022

*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    string Name, Dept, Course, RegNo;
    double Score; // range from 0 - 100
    char Grade;

    cout << "NAME: " ;
    cin >> Name;

    cout << "DEPARTMENT: ";
    cin >> Dept;

    cout << "REGISTRATION NUMBER: ";
    cin >> RegNo;

    cout << "COURSE : ";
    cin >> Course;

    cout << "SCORE: ";
    cin >> Score;

    while(Score < 0 || Score > 100){
        cout << "INVALID SCORE - SCORE RANGES FROM 0 - 100" << endl;
        cout << "SCORE: ";
        cin >> Score;
    }

    if(Score >= 70 && Score <= 100){
        Grade = 'A';
    } else if(Score >= 60 && Score <= 69){
        Grade = 'B';
    } else if(Score >= 50 && Score <= 59){
        Grade = 'C';
    } else if (Score >= 45 && Score <= 49){
        Grade = 'D';
    } else if (Score >= 40 && Score <= 44 ){
        Grade = 'E';
    } else{
        Grade = 'F';
    }
    
   cout << endl << endl; 
   cout << "NAME: " << Name << "  |  " << "REG NO: " << RegNo << "  |  " << "DEPT: " << Dept << endl;
   cout << "COURSE: " << Course << "  |  " << "SCORE: " << Score << "  |  " << "GRADE: " << Grade << endl;

}