//report.c
//user defined functions

#include <stdio.h>
//#include <conio.h>
//#include "report.h"

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 6

void inputMarksISA1(float marks[][NUM_SUBJECTS]) {
    printf("Enter marks for ISA1 (out of 40):\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d. Subject %d: ", i + 1, j + 1);
            scanf("%f", &marks[i][j]);
            marks[i][j] /= 2; // Reduce by half
        }
    }
}

void inputMarksISA2(float marks[][NUM_SUBJECTS]) {
    printf("Enter marks for ISA2 (out of 40):\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d. Subject %d: ", i + 1, j + 1);
            scanf("%f", &marks[i][j]);
            marks[i][j] /= 2; // Reduce by half
        }
    }
}

void inputMarksESA(float marks[][NUM_SUBJECTS]) {
    printf("Enter marks for ESA (out of 100):\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d. Subject %d: ", i + 1, j + 1);
            scanf("%f", &marks[i][j]);
            marks[i][j] /= 2; // Reduce by half
        }
    }
}

void calculateTotalMarks(float marks[][NUM_SUBJECTS], float total[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        total[i] = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            total[i] += marks[i][j];
        }
    }
}

void calculateGrade(float total[], char grade[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (total[i] >= 80) grade[i] = 'S';
        else if (total[i] >= 70 && total[i] < 80) grade[i] = 'A';
        else if (total[i] >= 60 && total[i] < 70) grade[i] = 'B';
        else if (total[i] >= 50 && total[i] < 60) grade[i] = 'C';
        else if (total[i] >= 40 && total[i] < 50) grade[i] = 'D';
        else if (total[i] >= 30 && total[i] < 40) grade[i] = 'E';
        else grade[i] = 'F';
    }
}

void displayReportCard(int studentNum, float marksISA1[][NUM_SUBJECTS], float marksISA2[][NUM_SUBJECTS], float marksESA[][NUM_SUBJECTS], float totalMarks[], char grade[]) {
    printf("\n\nStudent %d Report Card:\n", studentNum);
    printf("------------------------------------------------------\n");
    printf("Subject\tISA1\tISA2\tESA\tTotal\tGrade\n");
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("%d\t%.1f\t%.1f\t%.1f\t", j + 1, marksISA1[studentNum - 1][j], marksISA2[studentNum - 1][j], marksESA[studentNum - 1][j]);
        printf("%.1f\t%c\n", totalMarks[studentNum - 1], grade[studentNum - 1]);
    }
    printf("------------------------------------------------------\n");
}
