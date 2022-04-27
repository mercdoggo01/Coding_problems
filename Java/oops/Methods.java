package oops;
// scanner class for taking user inputs
import java.util.Scanner; 
// This means all the classes of io package can be imported
//import java.io.*;

//there are 2 types of methods in java
// 1.) predefined method
// 2.) user defined method

public class Methods 
{
    // user defined method
	public int add(int a, int b)
	{
		int res = a+b;
		return res;
	}
	
	// This is an example of method overloading
	public double add(double a, double b)
	{
		double res = a+b;
		return res;
	}
	
	// another user defined void method
	public void display()
	{
		System.out.println("Answer of addition is: ");
	}
	
	
	// main method
	public static void main(String[] args) 
	{	
		// Structure of method
		// access specifier return-type name (parameters)
		
		
		// Example:
		// 1.) predefined method:
		System.out.println("The maximum number is: " + Math.max(9,7));
        // In the above example, we have used three predefined methods main(), print(), and max(). 
		//We have used these methods directly without declaration because they are predefined. 
		
		
		// Example
		// 2.) user defined using static method
		System.out.println("Enter number of choice");
		// create object of scanner
		Scanner sc = new Scanner(System.in);
		// take input from user
		int n = sc.nextInt();
		
		findEvenOdd(n);
		
		// closing scanner
		sc.close();
		
		
		//Example 
		// 2.) user defined method
		int num1 = 25,num2=30;
		double num3=1.6666, num4=1.789;
		
		Methods obj = new Methods();
		
		int result = obj.add(num1, num2);
		obj.display();
		System.out.println(result);
		
		double result1  = obj.add(num3, num4);
		obj.display();
		System.out.println(result1);
		
		
		
	}

	// Static method
	/* method that has static keyword is known as static method
	/* The main advantage of a static method is that we can call it without creating an object. 
	/*It can access static data members and also change the value of it. 
	/*It is used to create an instance method. It is invoked by using the class name. */
	
	public static void findEvenOdd(int num)  
	{  
	//method body  
	if(num%2==0)   
	System.out.println(num+" is even");   
	else   
	System.out.println(num+" is odd");  
	}  
	
	
}
