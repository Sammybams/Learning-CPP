#include <iostream>
#include "header.h"

using namespace std;

int main () {
	Student mystudents[3];

	ReadStudentInfo(mystudents);
	CalcAverage(mystudents);
	WriteAvgScore(mystudents);
	
	// system("pause");
	return 0;
}
