#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
    	cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s[2] = {
        Student("Jinal", 01),
        Student("Bhumika", 02),
    };

    for(int i = 0; i < 2; i++)
    {
        s[i].display();
        cout << endl;
    }

    return 0;
}
