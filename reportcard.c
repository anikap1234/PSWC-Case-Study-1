#include <stdio.h>
#include "report.h"
//#include "report.c"

#define NUM_STUDENTS 2
#define NUM_SUBJECTS 2



int main() {
    float marksISA1[NUM_STUDENTS][NUM_SUBJECTS];
    float marksISA2[NUM_STUDENTS][NUM_SUBJECTS];
    float marksESA[NUM_STUDENTS][NUM_SUBJECTS];
    float totalMarks[NUM_STUDENTS];
    char grade[NUM_STUDENTS];

    inputMarksISA1(marksISA1);
    inputMarksISA2(marksISA2);
    inputMarksESA(marksESA);

    calculateTotalMarks(marksISA1, totalMarks);
    calculateTotalMarks(marksISA2, totalMarks);
    calculateTotalMarks(marksESA, totalMarks);

    calculateGrade(totalMarks, grade);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        displayReportCard(i + 1, marksISA1, marksISA2, marksESA, totalMarks, grade);
    }

    return 0;
}
