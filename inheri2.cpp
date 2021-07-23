#include <bits/stdc++.h>

using namespace std;


class Shape

{

   public:

   void print_shape()

   {

       cout<<"This is shape"<<endl;

   }

};


class Rectangle : public Shape

{

   public:

   void print_rect()

   {

       cout<<"This is rectangular shape"<<endl;

   }

};


class Circle : public Shape

{

   public:

   void print_cir()

   {

       cout<<"This is circular shape"<<endl;

   }

};


class Square : public Rectangle

{

   public:

   void print_sqr()

   {

       cout<<"Square is a rectangle"<<endl;

   }

};


int main() {


   Square o1;

   o1.print_shape();

   o1.print_rect();

   o1.print_sqr();


   return 0;

}


