#include <iostream>
using namespace std;

struct stSubject
{
    string Name;
    float Mark;
};

void ReadSubject(stSubject& Subject)
{
    cout << "Please enter the subject name?\n";
    cin >> Subject.Name;

    cout << "Please enter the subject mark?\n";
    cin >> Subject.Mark;
}

void PrintSubject(stSubject Subject)
{
    cout << "**************************" << endl;
    cout << "Subject Name: " << Subject.Name << endl;
    cout << "Subject Mark: " << Subject.Mark << endl;
    cout << "**************************" << endl;
}

void ReadSubjects(stSubject Subjects[3])
{
    ReadSubject(Subjects[0]);
    ReadSubject(Subjects[1]);
    ReadSubject(Subjects[2]);
}

void PrintSubjects(stSubject Subjects[3])
{
    PrintSubject(Subjects[0]);
    PrintSubject(Subjects[1]);
    PrintSubject(Subjects[2]);
}

float SubjectsAverage(stSubject Subjects[3])
{
    return (Subjects[0].Mark + Subjects[1].Mark + Subjects[2].Mark) / 3;
}

int main()
{
    stSubject Subjects[3];

    ReadSubjects(Subjects);
    PrintSubjects(Subjects);

    cout << "Subjects Average = " << SubjectsAverage(Subjects) << endl;

    return 0;
}
