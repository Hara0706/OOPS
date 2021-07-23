#include <bits/stdc++.h>

using namespace std;


class Triangle

{

   public:

   int a,b,c;


   Triangle()

   {

       a = 0;

       b = 0;

       c = 0;

   }


   Triangle(int a1, int b1, int c1)

   {

       a = a1;

       b = b1;

       c = c1;

   }


   double calculate_perimeter()

   {

       cout<<(a+b+c)<<endl;

   }

   double calculate_area()

   {

       double s = (a+b+c)/2;

       cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;

   }

};


int main() {


   Triangle b(3,4,5);

   b.calculate_perimeter();

   b.calculate_area();


   return 0;

}
