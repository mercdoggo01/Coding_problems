package oops;

public class ThisAndFinalKeyword 
{
 
  // If only this one is used it will give value of age as 0
  // Because his is because the Java compiler gets confused because 
  //of the ambiguity in names between instance the variable and the parameter.
  int age;
  /*ThisAndFinalKeyword(int age)
  {
	  age = age;
  }*/
  
  
  ThisAndFinalKeyword(int age){this.age=age;}
	
  public static void main(String args[])
  {
	  ThisAndFinalKeyword ob1 = new ThisAndFinalKeyword(8);
	  System.out.println(ob1.age);
	  
	  
	  // final keyword
	  final int x = 45;
	  // x = 32;
	   System.out.println(x);
	   // will give error
  }
}
