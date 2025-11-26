/*
Contact info
Course details 
lecturer info

*/

#include <iostream>
#include <cmath>
using namespace std;

struct ContactINFO(){
    string  Name;
    string Surname;
    string Email;
    string Number;
    string Address;
     
    ContactINFO Student1; // structure instance inside a structure
}


struct Coursedetails(){
    CourseName;
    CourseDate;
    CourseHall;
    
    
    
}

struct lecturerINFO(){
    lecturerName;
    lecturerRoom;
    lecturerEmail;
    lecturerNum;

}
enum secdule(){
    Monday;
    Tuesday;
    Wednesday;
    Thrusday;
    Friday;
    Saturday;
    Sunday;
}



int main(){

    
    
    Student1.Name = "Abdullah";
    Student1.Surname = "Ashtar";
    Student1.Email = "abdullahashtar@gmail.com";
    Student1.Number = "534 620 914";
    Student1.Address = "WHATEVER ROAD, 39545Nordhausen";

    cout << Student1.Name << endl; 
    cout << Student1.Surname << endl; 
    cout << Student1.Email << endl; 
    cout << Student1.Number << endl; 
    cout << Student1.Address << endl; 

    //////////////////////////////////////////////////////////////////

    Coursedetails CoInfo;

    CoInfo.CourseDate = "20novmber - 18:00/ 21:00";
    cout << CoInfo.CourseDate();

}