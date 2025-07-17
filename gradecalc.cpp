#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks[5];
    float total, average;
    char grade;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void calculateGrade() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }

        average = total / 5;

        if (average >= 90) grade = 'A';
        else if (average >= 80) grade = 'B';
        else if (average >= 70) grade = 'C';
        else if (average >= 60) grade = 'D';
        else grade = 'F';
    }

    void displayResult() {
        cout << "\n--- Student Report ---\n";
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Total     : " << total << "/500" << endl;
        cout << "Average   : " << average << "%" << endl;
        cout << "Grade     : " << grade << endl;
    }
};

int main() {
    Student s1;
    cin.ignore(); // to clear input buffer before getline
    s1.inputDetails();
    s1.calculateGrade();
    s1.displayResult();

    return 0;
}