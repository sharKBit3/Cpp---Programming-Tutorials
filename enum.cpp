#include <iostream>
using namespace std;


enum Gender {
    Male,
    Female
};

enum Status {
    Single,
    Married
};

// ----------- HOMEWORK -----------


void Homework()
{
    string name = "Mahmoud Dello", city = "Mersin", country = "Turkey";
    short age = 21;
    float monthlySalary = 5000;
    Gender gender = Gender::Male; // enum usage
    Status isMarried = Status::Single; // enum usage

    cout << "---------------------\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthlySalary << "\n";
    cout << "Yearly Salary: " << monthlySalary * 12 << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << isMarried << "\n";
    cout << "--------------------------\n" << endl;

}

int main()
{

    Homework();
    return 0;
}