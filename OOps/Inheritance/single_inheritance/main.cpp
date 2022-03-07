#include <bits/stdc++.h>
using namespace std;

// super class: The class whose properties are inherited by sub class is called Base Class or Super class.
class vehicle
{
   public: // access modifier
       int fuel;

   void fuel_capacity(int val)
   {
       cout<< "The fuel capacity of the vehicle is: " << val <<"liters \n";
   }

   void capacity(int data)
   {
       cout<< "Capacity of: " <<  data <<" people\n";
   }

   void brake_dist(float dist)
   {
       cout<<"Braking distance is: " << dist <<"Kilometers\n";
   }

   void stats(int x,int y, float z)
   {
       fuel_capacity(x);
       capacity(y);
       brake_dist(z);
   }

};

// derived or sub classes
// below is an example of single inheritance : since 1 base class
class bus : public vehicle{

};



/* NOTE
Public mode:
If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class
and protected members of the base class will become protected in derived class.

Protected mode:
If we derive a sub class from a Protected base class.
Then both public member and protected members of the base class will become protected in derived class.

Private mode:
If we derive a sub class from a Private base class.
Then both public member and protected members of the base class will become Private in derived class.
*/





int main()
{
    // derived class using functions of base class
    bus volvo;
    volvo.fuel_capacity(50);
    volvo.capacity(50);
    volvo.brake_dist(0.25);

    cout<<"\n";
    cout<<"\n";

    volvo.stats(1000,60,0.30);

    return 0;
}
