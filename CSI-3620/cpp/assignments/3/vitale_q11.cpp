/* Filename: vitale_q11.cpp
 * Author: Michael Vitale
 * Description:
 */

#include <iostream>
#include <stdio.h>
using namespace std;

double calculateFinalGrade(const double &grade1, const double &grade2, const double &grade3);

int main() {
	double assignments_grade;
    double exams_grade;
    double final_exam_grade;

    printf("Enter your assignments grade:\n> ");
    scanf("%d", &assignments_grade);
    printf("Enter your exams grade:\n> ");
    scanf("%d", &exams_grade);
    printf("Enter your final exam grade:\n> ");
    scanf("%d", &final_exam_grade);

    double gpa = calculateFinalGrade(assignments_grade, exams_grade, final_exam_grade);
}

double calculateFinalGrade(const double &grade1, const double &grade2, const double &grade3) {

}