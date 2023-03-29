#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;

class marksheet
{
public:
    int seatNo;
    string name;
    int className;
    string subjectName[5];
    float intMarks[5];
    float extMarks[5];
    float total[5];
    float grandTotal = 0;
    float percentage;
    char grade;

    marksheet()
    {
        cout << "enter student details"
             << "\n";
        cout << "enter student seat no ::";
        cin >> seatNo;
        cout << "enter student name ::";
        cin >> name;
        cout << "Standard ::";
        cin >> className;
        cout << "\nenter subjects \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject" << i + 1 << "::";
            cin >> subjectName[i];
        }
        cout << "\nenter internal marks for subjects(out of 20)"
             << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "enter internal marks for ::" << subjectName[i] << "::";
            cin >> intMarks[i];
        }
        cout << "\nenter external marks for subjects (out of 80)"
             << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "enter external marks for ::" << subjectName[i] << "::";
            cin >> extMarks[i];
        }

        // total for each subject internal + external
        for (int i = 0; i < 5; i++)
        {
            total[i] = intMarks[i] + extMarks[i];
            this->grandTotal = this->grandTotal + total[i];
        }

        // calculate percentage
        percentage = float(grandTotal / 5);

        // grade of the student
        if (this->percentage >= 90)
        {
            grade = 'A';
        }
        else if (this->percentage >= 80 && this->percentage <= 89)
        {
            grade = 'B';
        }
        else if (this->percentage >= 70 && this->percentage <= 79)
        {
            grade = 'C';
        }
        else if (this->percentage >= 60 && this->percentage <= 69)
        {
            grade = 'D';
        }
        else if (this->percentage >= 50 && this->percentage <= 59)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }
    }

    void display()
    {
        cout << "-------------------------------------marksheet------------------------------------------"
             << "\n";
        cout << "\nseatno ::" << seatNo << "\t"
             << "name ::" << name << "\t"
             << "class ::" << className;

        cout << "\nSub-Name"
             << "  "
             << "int-marks"
             << "  "
             << "Ext-Marks"
             << "  "
             << "Total";
        for (int i = 0; i < 5; i++)
        {
            cout << "\n" <<subjectName[i] << "   \t" << setw(4) << intMarks[i] << setfill('*') << "   \t" << setw(4) << extMarks[i] << setfill('*') << "   \t" << setw(4) << total[i] << setfill('*');
        }
        cout << "\nGrand Total ::" << grandTotal;
        cout << "\nGrade ::" << grade;
        cout << "\n"
             << "Percentage ::"<<setprecision(10)<< percentage <<"\n";
    }
};

int main()
{
    marksheet m;
    m.display();
}