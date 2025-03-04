/* Filename: vitale_q11.cpp
 * Author: Michael Vitale
 * Description: Calculate final grade based on weights in CSI-3620 syllabus.
 */

// #include <iostream>
#include <stdio.h>
using namespace std;

// function declaration
double calculateFinalGrade(const double &grade1, const double &grade2, const double &grade3);

int main() {
    // Grade categories according to syllabus
	double assignments_grade;
    double exams_grade;
    double final_exam_grade;

    // get user input
    printf("Enter in percentages (i.e. 0.90) for an accurate calculation.\n");
    printf("Enter your assignments grade:\n> ");
    scanf("%lf", &assignments_grade);
    printf("Enter your exams grade:\n> ");
    scanf("%lf", &exams_grade);
    printf("Enter your final exam grade:\n> ");
    scanf("%lf", &final_exam_grade);

    // calculate the final grade
    double finalGrade = calculateFinalGrade(assignments_grade, exams_grade, final_exam_grade);
    finalGrade = finalGrade * 100;
    // %.2f formats the float so that it only shows a maximum of 2 decimal places
    printf("Your final grade is: %.2f\n", finalGrade);
}

double calculateFinalGrade(const double &grade1, const double &grade2, const double &grade3) {
    // grade1, grade2, & grade3 are expected to be assignments, exams, and final exam respectively
    float weight1, weight2, weight3;
    // weights according to the syllabus
    weight1 = .15;
    // total of all homework assignments
    weight2 = .6;
    weight3 = .25;
    double grade = (grade1*weight1) + (grade2*weight2) + (grade3*weight3);
    return grade;
}