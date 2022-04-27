package oops;

class Animal1 
{

	  // method in the superclass
	  public void eat() {
	    System.out.println("I can eat");
	  }
	
}

	// Dog inherits Animal
	class Dog1 extends Animal1 {

	  // overriding the eat() method
	  @Override
	  // or use super.eat();
	  public void eat() {
		  
	    System.out.println("I eat dog food");
	  }

	  // new method in subclass
	  public void bark() {
	    System.out.println("I can bark");
	  }
	}

	public class MethodOverrriding {
	  public static void main(String[] args) {

	    // create an object of the subclass
	    Dog1 labrador = new Dog1();

	    // call the eat() method
	    labrador.eat();
	    labrador.bark();
	  }
	}
