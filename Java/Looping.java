package looping;

public class Looping 
{
 public static void main(String args[])
 {
	 // if 
	 int age=20;
	 if(age>18) {System.out.println("working");}
	 
	 // if-else
	 if(age<18) {System.out.println("working");}
	 else {System.out.println("not working");}
	 
	 // ternary
	 int number=13;
	 String op=(number%2==1)?"Odd":"Even";
	 System.out.println(op);
	 
	 //else if
	 int marks=65;  
     
	    if(marks<50){  
	        System.out.println("fail");  
	    }  
	    else if(marks>=50 && marks<60){  
	        System.out.println("D grade");  
	    }  
	    else if(marks>=60 && marks<70){  
	        System.out.println("C grade");  
	    }  
	    else if(marks>=70 && marks<80){  
	        System.out.println("B grade");  
	    }  
	    else if(marks>=80 && marks<90){  
	        System.out.println("A grade");  
	    }else if(marks>=90 && marks<100){  
	        System.out.println("A+ grade");  
	    }else{  
	        System.out.println("Invalid!");  
	    }  
	    
	  //switch
	    int number1=20;  
	    //Switch expression  
	    switch(number1){  
	    //Case statements  
	    case 10: System.out.println("10");  
	    break;  
	    case 20: System.out.println("20");  
	    break;  
	    case 30: System.out.println("30");  
	    break;  
	    //Default case statement  
	    default:System.out.println("Not in 10, 20 or 30");  
	    }  
	    
	  //for
	    for(int i=1;i<=10;i++){  
	        System.out.println(i);  }
	    
	  //while
	    int i=1;  
	    while(i<=10){  
	        System.out.println(i);  
	    i++;  
	    }  
	    
	  // do while
	     i=1;    
	    do{    
	        System.out.println(i);    
	    i++;    
	    }while(i<=10);    
	    
	  // break and continue
	    for(int i1=1;i1<=10;i1++){  
	        if(i1==5){  
	            //breaking the loop  
	            break;  
	        }  
	        System.out.println(i1);  
	    }  
	    
	    
	    for(int i1=1;i1<=10;i1++){  
	        if(i1==5){  
	            //using continue statement  
	            continue;//it will skip the rest statement  
	        }  
	        System.out.println(i1);  
	    }  
	    
 }
}
