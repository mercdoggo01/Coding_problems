package oops;

public class Strings 
{
  public static void main(String args[])
  {
	    // create a string
	    String experiments="GigaChad ka Bhai Peta Chad";
	   
	    // create a string using new
	    String name = new String("Java String");

	    System.out.println(name);  // print Java String
	   
	   
	  // get the length of greet
	    int length = experiments.length();
	    System.out.println("Length: " + length);
	  
	 // concatenation of two strings
	  String second = " Programming";
	  String joinedString = experiments.concat(second);
	  System.out.println("Joined String: " + joinedString);
	  
	  
	  // The instanceof operator in Java is used to check whether an 
	  // object is an instance of a particular class or not
	  String name1 = "Programiz";
	    
	  // checks if name is instance of String
	  boolean result1 = name1 instanceof String;
	  System.out.println("name is an instance of String: " + result1);
  }
}
