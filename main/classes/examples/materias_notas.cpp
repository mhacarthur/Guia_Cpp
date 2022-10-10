
#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int mark1;
    int mark2;
    int mark3;
    int mean;

    void printmarks()
    {
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
        cout << "Mark 3: " << mark3 << endl;
    }

    void meanmarks();

};

void Student::meanmarks()
    {
        int mm;
        mean = (mark1 + mark2 + mark3)/3;
        cout << endl;
        cout << "Mean  : " << mean << endl;
    }

int main()
{
    Student obj1;
    obj1.mark1 = 12;
    obj1.mark2 = 15;
    obj1.mark3 = 17;

    obj1.printmarks();
    obj1.meanmarks();

    return 0;
}



