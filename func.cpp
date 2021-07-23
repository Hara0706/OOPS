#include <bits/stdc++.h>

using namespace std;


class Employee

{

   public:


   int salary;

   int hour;


   Employee()

   {

       salary = 0;

       hour = 0;

   }


   void get_info(int sal, int hr)

   {


       salary = sal;

       hour = hr;

   }


   int addSal()

   {

       if(salary<500)

       {

           salary += 10;

       }

       return salary;

   }

   int addWork()

   {

       if(hour>6)

       {

           salary += 5;

       }

       return salary;

   }



};


class Test 

{

   public:

   int salary;


   Test(int sal)

   {

       salary = sal;

   }


   void final_sal()

   {

       cout<<salary;

   }

};


int main() {


   Employee e;

   int salary, hour;

   cin>>salary>>hour;

   e.get_info(salary, hour);

   salary = e.addSal();

   salary = e.addWork();


   Test emp(salary);

   emp.final_sal();



   return 0;

}


