package oops;

// super class
class Animal
{
	String name;
	Animal()
	{
		System.out.println("Animal detected constructor invoked");
	}	
}

// sub class
class Dog extends Animal{
	void eat()
	{
		System.out.println(name+" can eat");
	}
}


public class Inheritence 
{
  public static void main(String args[])
  {
	  // object creation
	  Dog ShibaInu = new Dog();
	  
	  // accessing field of Animal superclass
	  ShibaInu.name = "Kai";
	  ShibaInu.eat();  
  }
}
