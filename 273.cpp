#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    }

    // Parameterized Constructor
    student(string s, int a, int gen)
    {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = gen;
    }

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor Called" << endl;
    }

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name :";
        cout << name << endl;
        cout << "Age : ";
        cout << age << endl;
        cout << "Gender : ";
        cout << gender << endl;
    }

    /*
    bool operator==(student &a)
    {
        if (name == a.name &&age = a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    */
};

int main()
{
    /*
    student s1;
    s1.name = "Bharat Sharma";
    s1.age = 20;
    s1.gender = 'M';
    */

    /*
     student arr[3];

     for (int i = 0; i < 3; i++)
     {
         string s;
         cout << "Name :";
         cin >> s;
         arr[i].setName(s);
         cout << "Age : ";
         cin >> arr[i].age;
         cout << "Gender : ";
         cin >> arr[i].gender;
     }
     cout << endl;

     for (int i = 0; i < 3; i++)
     {
         arr[i].printInfo();
     }
     */

    student a("Bharat Sharma", 20, 1);
    // a.printInfo();
    student b;
    student c = a;

    /*
    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    */

    return 0;
}
