#include <iostream>
#include <string>
#include <fstream>
#include "header.h"

using namespace std;

void ReadStudentInfo (Student mystudents[3]) {

	char tempName[40], firstName[20], secondName[20];

	fstream StudentInfo;
	StudentInfo.open("StudentInfo.txt", ios::in);

	// getline(StudentInfo, tempLine);
	
	if (StudentInfo.is_open()) {

		// cout << tempLine << endl;
		// getline(StudentInfo, tempLine);

		for (int i=0; i<3; i++) {

			StudentInfo >> firstName >> secondName >> mystudents[i].Score1 >> mystudents[i].Score2 >> mystudents[i].Score3 >> mystudents[i].Score4;

			strcpy(mystudents[i].name, firstName);

			// concatenate second name into full name
			strcat(mystudents[i].name, " ");
			strcat(mystudents[i].name, secondName);
		}
				
	}
	StudentInfo.close();
}

void CalcAverage (Student mystudents[3]) {
	for (int i=0; i<3; i++) {
		int Score1 = mystudents[i].Score1;
		int Score2 = mystudents[i].Score2;
		int Score3 = mystudents[i].Score3;
		int Score4 = mystudents[i].Score4;
		float AvgScore = (Score1+Score2+Score3+Score4)/4.0;

		mystudents[i].AvgScore = AvgScore;
	}
}

void WriteAvgScore (Student mystudents[3]) {

	fstream AvgScoreFile;
	AvgScoreFile.open("AvgScoreFile.txt", ios::out);

	if (AvgScoreFile.is_open()) {
		AvgScoreFile << mystudents[0].name << "\t" << mystudents[0].AvgScore << "\n"
					 << mystudents[1].name << "\t" << mystudents[1].AvgScore << "\n"
					 << mystudents[2].name << "\t" << mystudents[2].AvgScore;
		AvgScoreFile.close();
	
	}
}


// Alternative way of defining function WriteAvgScore

/*
void WriteAvgScore (Student mystudents[3]) {

	fstream AvgScoreFile;
	AvgScoreFile.open("AvgScoreFile.txt", ios::out);

	if (AvgScoreFile.is_open()) {
		for (int i=0; i<3; i++) {
			AvgScoreFile << mystudents[i].name << "\t" << mystudents[i].AvgScore << "\n";
		}
		AvgScoreFile.close();
	}
}
*/