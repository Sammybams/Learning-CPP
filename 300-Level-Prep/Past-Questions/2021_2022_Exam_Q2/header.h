#ifndef HEADER_H
#define HEADER_H

struct Student {
	char name[40];
	int Score1, Score2, Score3, Score4;
	float AvgScore;
};

void ReadStudentInfo(Student[]);
void CalcAverage(Student[]);
void WriteAvgScore(Student[]);

#endif