#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3;
    float average;

 
    cout << "Enter marks for 3 subjects:" << endl;
    cout << "Subject 1: ";
    cin >> mark1;
    cout << "Subject 2: ";
    cin >> mark2;
    cout << "Subject 3: ";
    cin >> mark3;

    average = (mark1 + mark2 + mark3) / 3.0;


    cout << "\nAverage Marks: " << average << endl;

    if (average >= 70 && average <= 100) {
        cout << "Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Grade: B" << endl;
    } else if (average >= 50) {
        cout << "Grade: C" << endl;
    } else if (average >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E (Fail)" << endl;
    }

    return 0;
}
