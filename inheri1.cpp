#include <bits/stdc++.h>

using namespace std;


class Member

{

   public:

   string name;

   int age;

   string phone_no;

   string address;

   int salary;


   void get_data()

   {

       cin>>name;

       cin>>age;

       cin>>phone_no;

       cin>>address;

       cin>>salary;

   }


   void printSalary()

   {

       cout<<name<<" "<<salary<<endl;

   }



};


class Employee : public Member

{

  public:

  string specialization;


  void get_data1()

  {

      cin>>specialization;

  }


};


class Manager : public Member

{

  public:

  string department;


  void get_data2()

  {

      cin>>department;

  }


};


int main() {


   Employee e1;

   e1.get_data();

   e1.get_data1();

   e1.printSalary();


   Manager m2;

   m2.get_data();

   m2.get_data2();

   m2.printSalary();


   return 0;

}


