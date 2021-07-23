#include <bits/stdc++.h>

using namespace std;


class Count_Objects

{

   private:


   static int count;



   public:

   Count_Objects()

   {

       ++count;

   }


   static void print_count()

   {

       cout<<count<<endl;

   }

};


int Count_Objects :: count = 0;



int main() {


   Count_Objects o1;

   Count_Objects::print_count();

   Count_Objects o2;

   Count_Objects::print_count();

   Count_Objects o3;

   Count_Objects::print_count();


   return 0;

}
