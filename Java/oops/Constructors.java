package oops;

// What is a constructor
// It is a method which is created as soon as the object is invoked

// There are three types of constructors
/*
 * 1.) No argument
 * 2.) Parameterized
 * 3.) Default
 * */

//A constructor can be overloaded but can not be overridden.
public class Constructors 
{

	String name;
	int id;
  //  no argument constructor
  Constructors()
  {
	  System.out.println("Object detected Constructor initiated");
  }
  
  //parameterized constructor
  Constructors(String n, int x)
  { name=n; 
    id=x; 
    System.out.println("parameterised constructor with values: " + name +" id "+ id);
  }
  
  // In above same constructor is used 2 times in different way performing constructor overloading
  // one has no parameters and other has 2 parameters
  
  public static void main(String args[]) 
  {
	Constructors c1 = new Constructors();
	Constructors c2  = new Constructors("Husky",69);
	System.out.println(c2.id);
	System.out.println(c2.name);
	
	// values are assigned by default constructor
	System.out.println("default values: ");
	System.out.println(c1.id);
    System.out.println(c1.name);
  }
}
