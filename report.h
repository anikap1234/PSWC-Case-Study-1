//report.h
//header file
//function declaration

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 6
void inputMarksISA1(float marks[][NUM_SUBJECTS]);
void inputMarksISA2(float marks[][NUM_SUBJECTS]);
void inputMarksESA(float marks[][NUM_SUBJECTS]);
void calculateTotalMarks(float marks[][NUM_SUBJECTS], float total[]);
void calculateGrade(float total[], char grade[]);
void displayReportCard(int studentNum, float marksISA1[][NUM_SUBJECTS], float marksISA2[][NUM_SUBJECTS], float marksESA[][NUM_SUBJECTS], float totalMarks[], char grade[]) ;


