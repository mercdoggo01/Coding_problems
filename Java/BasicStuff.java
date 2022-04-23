package basics1;

/*Java is an object-oriented, 
class-based, concurrent, secured and general-purpose 
computer-programming language*/

// this is the source file
// file name has to be class name in java and file name should have first letter capital

//JDK is an acronym for Java Development Kit. 
//The Java Development Kit (JDK) is a software development environment 
//which is used to develop Java applications and applets. It physically exists. 
//It contains JRE + development tools.

public class BasicStuff 
{
	
   static int m=100;//static variable 
	     
   
   void method()  
   {   
	 
	 int n=90;//local variable   
	 System.out.println(n);
   }  
	
   // main function  args[] & []args both are valid expressions for receiving arguments
   public static void main(String args[])
   {
	   // basic printing
	   
	   System.out.println("Hello World");
	   
	   // shortcut for print next line print syso + ctrl + space
	   
	   System.out.println("Shortcut worked");
	   
	   // variables
	   // A variable is a container which holds the value while java
	   // program is executed
	   
	   // There are 3 types of variables in Java
	  
	   // 1.) instance
	   // 2.) local
	   // 3.) static
	   
	   int n = 10; // instance variable
	   
	   //data types are of two types
	   // 1.) primitive
	   // 2.) Non primitive (classes,interferences,arrays)
	   
	   
	   
	   /*data types in java
	    * boolean    1 bit
	    * byte       1 byte
	    * char       2 byte    uses unicode where code value assigned to each character since 2 byte hold values from \u0000 to \uFFFF
	    * short      2 byte
	    * integer    4 byte
	    * long       8 byte
	    * float      4 byte
	    * double     8  byte
	    * */
	   
	   int i=5; //  4bytes ->32 bits
	   short s = 5; //  2bytes ->32 bits -32768 to 32767
	   byte b = 5; // 1 byte -> 8 bits -> -128 to 127
	   long l = 5000000000l;
	   float f = 5.5f;
	   double d = 5.5;
	   // double is default preferred over float
	   
	   char c = 'A';
	   c = 66; // ASCII 
	   
	   System.out.println(c);
	   
	   double d1 = 5; // implicit conversion
	   int k=(int)5.5; // type-casting
	   System.out.println(d1);
	   System.out.println(k);
	   
	     // value assignment 
	    // byte -> short -> int -> long ->float->double
	   //         char ----^
	   
	   
	   // operators in Java
	   /*
	    * Arithmetic: +,-,*,/,%
	    * Bitwise: >>, <<, ^, |, &
	    * Relational:
	    * Logical:
	    * */
	   
	   int x1 = 6, x2=4;
	   System.out.println(x1+x2);
	   System.out.println(x1-x2);
	   System.out.println((double)x1/x2);
	   System.out.println(x1*x2);
	   System.out.println(x1%x2);
	   
   }
}

// file is saved as BasicStuff.java
// compiler converts it into byte code
// then it is fed to a JVM (java virtual machine)
// JVM is not a physical machine but a virtual machine where environment is provided
// in which java byte-code can be executed.
// While execution it uses JRE(java run time environment)

