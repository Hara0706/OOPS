#include <bits/stdc++.h>

using namespace std;


class Parent

{

   public:

   void print_parent()

   {

       cout<<"This is Parent"<<endl;

   }



};


class Child : public Parent

{

  public:

  void print_child()

  {

      cout<<"This is Child"<<endl;

  }

};


int main() {


   Parent o1;

   o1.print_parent();

   Child o2;

   o2.print_child();

   o2.print_parent();


   return 0;

}


