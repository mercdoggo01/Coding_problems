 NUMBER THEORY-
BASICS OF BITS-
--------------
*in a bit a the max number that can be stored is (2^(number of bits))-1
*the amount of number that can be stored =2^(number of bits) numbers.
*if a bit ends with 0 then it is positive and if ends with 1 then it is
 negetive.
*operations on a bit-
1)AND- only 1 & 1 is 1,rest are 0.

2)OR -only 0|0 is 0,rest are 1.

3)XOR(^)- same elements results 0 rest 1.
a^0=a
a^a=0
a^(a^b)=a^b

4)<<(LEFT SHIFT)- 3<<1 means 11->110
used to calculatte power of 2. 1<<1 is 2
                               1<<2 is 4
                               1<<n is 2^n

5)>>(RIGHT SHIFT)-3>>1 means 11->1, 1>>1 means 1->0

6)~(TILDA)- inverts a binary. 1001->0110

7)NOT-  the NOT operator is a Boolean operator that returns TRUE
 or 1 when the operand is FALSE or 0, and returns FALSE or 0 when
 the operand is TRUE or 1
---------------------------------------------------
SIGNED INTEGER- the integer whose 1 bit out of its 32 bits is used to 
                store a bit that tells weather the integer is positive 
                 or negetive.
                This is also the reason why we cant store 2^32 in int
                as 1 bit is used to store the sign(0->+,1->-).
UNSIGNED INTEGER- Here all integers are positive and therefor 2^32 can be
                  stored. syntax-unsigned int a=1<<32. 
---------------------------------------------
SOME BIT OPRATION EXP-
//CHECK WEATHER NUMBERTH BIT IN THE GIVEN NUMBER IS SET t--
      int i=3;
      // indexing in bin nums- 0,1,2,3,4....
      int num=9;
      if((num & (1<<i))!=0)
      {
          cout<<"SET"<<endl;
      }
      else
      {
          cout<<"NOT SET"<<endl;
      }
        //to set a bit-
        cout<<(1<<i)|num<<endl;
        //to un set a bit-
        cout<<num & (~(1<<i))<<endl;
        //to toggle a bit-
        cout<<num & (1<<i)<<endl;
        //to count number of bits-
        cout<<__built_popcount(num);//for integers only
        cout<<__built_popcountll(1ll<<35);
-------------------------------------------------------------------
TRICKS IN BINARY OPERATOR-
int num=5;
     //to check even /odd-
     if(num&1)
     {
         cout<<"odd";
     }
     else
     {
         cout<<"EVEN";
     }
     //to multiply with 2;
     cout<<(num>>1);
     //to divide with 2-
     cout<<(num<<1);
       //to convert capital char to small char-
       cout<<'A'|(1<<5);
       //vise-versa-
       cout<<'a'&(~(1<<5));
-----------------------------------------------------------------------
QUESTION--
find the element whose count in the given array is odd-
   int arr[9]={1,1,2,2,3,3,4,4,5};
   int i,x;
   //algo used- take xor of all elements, as xor of elements occuring even times will cancel each other.
   for(i=0;i<9;i++)
   {
       x^=(arr[i]);
   }
   cout<<x<<endl;
------------------------------------------------------------------------
##BIT-MASKING-
---------------------------------------------------------------------
Q-FIND ALL THE SUBSETS OF THE GIVEN ARRAY USING BIT-MASKING-
(SUB-SET GENERATION USING BITS)
 //find all the subsets of the given array-
  int i,n;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
 for(i=0;i<1<<n;i++)
 {
     for(int j=0;j<=i;j++)
     {
         if((i&(1<<j)))
         {
             cout<<arr[j]<<" ";
         }
     }
   }  cout<<endl;
------------------------------------------------------------
**HOW TO CONVERT UPPERCASE TO LOWER CASE-
letter|=' ';
**HOW TO CONVERT LOWERCASE TO UPPERCASE-
letter&='_';
---------------------------------------------------------
TRICK TO PREINT FIBBONACCI NUMBERS-
int main() {
int fn[10];
int n=10;
fn[0]=0;
fn[1]=1;
for(int i=2;i<10;i++)
{
    fn[i]=fn[i-1]+fn[i-2];
}
for(int i=0;i<n;i++)

{
    cout<<fn[i]<<" ";
}
	return 0;
}