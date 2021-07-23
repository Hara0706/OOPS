#include <bits/stdc++.h>

using namespace std;


class Employee

{

   public:

   string name;

   int year_of_joining;

   double salary;

   string address;


   Employee(string n, int year, double sal, string add)

   {

       name = n;

       year_of_joining = year;

       salary = sal;

       address = add;

   }


   void print_details()

   {

       cout<<name<<"          "<<year_of_joining<<"                      "<<address<<endl;

   }


};


int main() {


   cout<<"Name"<<"          "<<"Year of Joining"<<"            "<<"Address"<<endl;

   Employee e1("Robert", 1994, 45000.00, "64C- WallsStreat");

   e1.print_details();

   Employee e2("Sam", 2000, 35000.00, "68D- WallsStreat");

   e2.print_details();

   Employee e3("John", 1999, 40000.00, "26B- WallsStreat");

   e3.print_details();


   return 0;

}


