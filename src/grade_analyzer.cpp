#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    // Return the sum of the three scores.
    return score1 + score2 + score3;
}

double calculateAverage(double total, int count) {
    if(count <= 0)
    // If count is less than or equal to 0, return 0.0.
    // Otherwise, return total divided by count.
    return 0.0;
    else
    return total / count;
}

char determineLetterGrade(double average) {
    if(average >= A_MINIMUM)
    return 'A';
    if(average >= B_MINIMUM)
    return 'B';
    if(average >= C_MINIMUM)
    return 'C';
    if(average >= D_MINIMUM)
    return 'D';
    else
    // Return 'A' for averages 90 or higher.
    // Return 'B' for averages 80 or higher.
    // Return 'C' for averages 70 or higher.
    // Return 'D' for averages 60 or higher.
    // Return 'F' otherwise.
    return 'F';
}

bool isPassing(double average) {
    if(average >= PASSING_MINIMUM)
    return true;
    else
    // Return true when average is 70 or higher.
    return false;
}

bool isValidScore(double score) {
    if(score <= 100.0 && score >= 0.0)
    return true;
    else
    // Return true when score is between 0 and 100, inclusive.
    return false;
}

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}
