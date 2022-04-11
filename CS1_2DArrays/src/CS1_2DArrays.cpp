//============================================================================
// Name        : CS1_2DArrays.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int NUMOFSEM = 6;
const int NUMOFCOURSES = 8;


void gradeReport(float gradeArray[NUMOFSEM][NUMOFCOURSES], int semesterCount, int classCount){
	float sumGrades = 0.0;
	float sumGPA = 0.0;

	for(int i = 0; i <2; i++){
		cout << "Semester " << i+1 << " grades..." << endl;
		for(int j= 0; j<5; j++){
			sumGrades += gradeArray[i][j];
			cout << '\t' << "Class " << j+1 << ": " << gradeArray[i][j] << endl;
		}
		cout << "Average for this semester was: " << sumGrades/classCount << endl;
		sumGPA += sumGrades/5;
		sumGrades = 0.0;
		cout << "The student's average GPA is: " << sumGPA/semesterCount << endl;
	}
}

int main() {
	float sumGrades = 0.0;
	float sumGPA = 0.0;
	float studentGrades[NUMOFSEM][NUMOFCOURSES] = {0}; // [Column] [Rows]
												 // Column = semester
												 // Rows = classes

	studentGrades[0][0] = 3.0; //First Semester (0)
	studentGrades[0][1] = 4.0;
	studentGrades[0][2] = 2.2;
	studentGrades[0][3] = 1.0;
	studentGrades[0][4] = 3.5;

	studentGrades[1][0] = 4.0; //Second Semester (1)
	studentGrades[1][1] = 3.2;
	studentGrades[1][2] = 1.8;
	studentGrades[1][3] = 2.9;
	studentGrades[1][4] = 4.0;


	for(int i = 0; i <2; i++){
		cout << "Semester " << i+1 << " grades..." << endl;
		for(int j= 0; j<5; j++){
			sumGrades += studentGrades[i][j];
			cout << '\t' << "Class " << j+1 << ": " << studentGrades[i][j] << endl;
		}
		cout << "Average for this semester was: " << sumGPA/5 << endl;
		sumGPA += sumGrades/5;
		sumGrades = 0.0;
		cout << "The student's average GPA is: " << sumGPA/2 << endl;
	}

	gradeReport(studentGrades, 2, 5);

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
