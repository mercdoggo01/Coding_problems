#include <bits/stdc++.h>
using namespace std;

class obj{
 public:
     int a,b;

     // default constructors
     obj()
     {
         a=10;
         b=20;
     }
};

class obj1
{
private:
    int x,y;
public:
    // parameterized constructor
    obj1(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};


class A
{
   public:
    int x;
    A(int a)                // parameterized constructor.
    {
      x=a;
    }
    A(A &i)               // copy constructor
    {
        x = i.x;
    }
};

int main()
{
    obj1 x(1,2);
    cout<< x.getX() <<" " << x.getY() <<"\n";

    // Calling the parameterized constructor.
    A a1(20);
    //  Calling the copy constructor.
    A a2(a1);
   cout<<a2.x<<"\n";


    return 0;
}
