#include<iostream>
using namespace std;

class person                   //Abstract class
{
public:
   virtual void give() = 0;    //pure virtual function
};
class boy : public person
{
public:
   void give()
   {
       cout << "Brown Bun" << endl;
   }
};
class girl : public person
{
public:
   void give()
   {
       cout << "Pink Bun" << endl;
   }
};
int main()
{
    person *ptr;
    ptr = new boy;
    ptr -> give();
    ptr = new girl;
    ptr -> give();

    return 0;
}