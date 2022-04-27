package oops;

// tutorial for object and classes as well as basic oops in Java

//basic OOPS concepts

// 1.) What is object oriented programming ?
// Object-Oriented Programming is a methodology or 
// paradigm to design a program using classes and objects.

// 2.) What is object ?
//Object means a real-world entity such as a pen, chair, table, computer, watch, etc. 
// An object is an instance of a class , all objects get memory in Heap memory area.

// 3.) What is class ?
// Collection of objects is called class. It is a logical entity.
// It is a template or blueprint from which object is created.

// 4.) What is inheritance ?
// When one object acquires all the properties and behaviors of a parent object, it is known as inheritance. 

// 5.) What is  polymorphism ?
// If one task is performed in different ways, it is known as polymorphism.

// 6.) What is abstraction ?
// Hiding internal details and showing functionality is known as abstraction.

// 7.) What is encapsulation ?
// Hiding internal details and showing functionality is known as abstraction.


// Naming conventions
// 1.) class  first letter should be upper-case.
// 2.) Interface first letter should be upper-case.
// 3.) methods/functions first letter should be lower-case.
// 4.) variable first letter should be lower-case.

// creating an object outside main method
class  Student
{
	String name,id;
	// this a method (i.e function)
	void insert(String n, String r)
	{
		name  = n;
		id = r;
	}
	void display()
	{
		System.out.println("Name is: "+name+" having reg no.: "+id);
	}
}

// An object can be initialized by three ways
/*
 *  1.) by reference variable
 *  2.) by method
 *  3.) by constructor
 * */


public class ObjectAndClass 
{
   public static void main(String args[])
   {
	   // 1.) Initialization through reference
	   Student s1 = new  Student();
	   s1.id = "RA1911005010078";
	   s1.name = "Gigachad";
	   s1.display();
	   
	   // 2.) Initialization through method
	   Student s2 = new Student();
	   s2.insert("Doggo Mac Choggo", "RA1911005010200");
	   s2.display();  
   }
}
