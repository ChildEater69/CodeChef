Subtraction and division of numbers
Prev module
While sum and addition of 
2
2 numbers did not require any specific precautions, we need to be careful during subtraction and division operations

Subtraction can return a positive or negative value depending on which number is larger
Division can return an integer or float
Task
Write a program that does the following

Accepts the number of inputs / test cases as 't'
The only line of each test case contains 2 integers - declare them as variables 
 
A and 
 
B
For each test case, you need to perform the following operations
Create a variable - 
 
D - what you get after subtracting 
 
B from 
 
A.
Create a variable - 
 
Q - the quotient when 
 
A is divided by 
 
B
Output 2 space separated integers - 
 
D and 
 
Q in a single line
Note: The inputs have been created such that

 
A is necessarily greater than or equal to 
 
B
 
A is necessarily exactly divisible by 
 
B
Sample 1:
Input
Output
2
10 5
16 4
5 2
12 4
Explanation:
Test case 1: The 2 integers are 
10
10 and 
5
5 and we output 
5
5 as their difference and 
2
2 as the quotient of their division

Test case 2: The 2 integers are 
16
16 and 
4
4 - we output 
12
12 as their difference and 
4
4 as the quotient of their division



//  Update the '_' below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int A,B,D,Q;
   //Accept 2 integers as inputs. Note that A >= B and A is divisble by B.
   cin>>A>>B;
   //Difference of inputs
   D = A - B;               
   //Division of inputs. 
   Q = A / B;      
   //Print the desired output for each test case
    cout<<D<<" "<<Q<<endl;  
   }
 return 0;
}




Division with integer and decimal output
Prev
Lets focus a bit more on division to clarify the concept

Division can return an integer value or decimal value, it all depends on which datatype you declare the variables as.
To get an integer output you need to declare the variables as int:

int a = 3;
int b = 2;
int c = a/b;
cout<<c;

Output: 1
To get a decimal output you need to declare the variables as double:

double a = 3;
double b = 2;
double c = a/b;
cout<<c;

Output: 1.5
Task
In this problem you need to write a program which does the following

Accepts the number of inputs / test cases as '
 
t'
The only line of each test case contains 2 integers - declare them as variables 
 
A and 
 
B
For each test case, you need to perform the following operations
Create a variable 
 
X - the division of 
 
A by 
 
B which returns a float value
Create a variable 
 
Y - the division of 
 
A by 
 
B which returns a integer value
Output 2 space separated integers - 
 
X and 
 
Y in a single line.
Sample 1:
Input
Output
2
10 4
10 6
2.5 2
1.66667 1
Explanation:
Test case 1: The 2 integers are 
10
10 and 
4
4 and we output 
2.5
2.5 and 
2
2 as the value of 
 
X and 
 
Y respectively

Test case 2: The 2 integers are 
10
10 and 
6
6 and we output 
1.66667
1.66667 and 
1
1 as the value of 
 
X and 
 
Y respectively


// Update the '_' below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   double A,B,X;
   cin>>A>>B;
   //Division of A by B - float / decimal result
   X = A / B;
   int C, D, Y;
   C = A;
   D = B;
   //Division of A by B - integer result
   Y = A / B;
   cout << X << " " << Y << endl;
  }
 
}


Integer and decimals - Type Conversion
Prev problem
In the previous problem, we divided a double by a double, and stored it in a double. What happens if we mix up these data types?

Let's try dividing a double by a double, but store it in an int:

double a = 3;
double b = 2;
int c = a/b;
cout<<c;

Output: 1
We get only an integer output. This is because a/b is first computed, and it is actually a double. But when it is stored in c (which is an int), c can't store the decimal digits, and takes only the integer part.

Now let's try the opposite. Divide an int by an int and store it in a double:

int a = 3;
int b = 2;
double c = a/b;
cout<<c;

Output: 1
We still get an int, because a/b is itself only 1. So even though c can store decimal digits, those decimal digits aren't even produced at first.

Now, let's divide a double by an int and see what happens:

double a = 3;
int b = 2;
double c = a/b;
cout<<c;

Output: 1.5
Here, something called "type conversion" happens. C++ can only divide two values of the same type. So it can't do double/int. But it cleverly understands that every integer can also be represented as a double (for eg. 4 is 4.0). So it automatically converts the int into a double. And hence a/b is a double, and it's stored in a double. So the output contains the decimal part as well.

Task
In this problem you need to write a program which does the following

Accepts the number of inputs / test cases as '
 
t'
The only line of each test case contains 2 integers - declare them as variables 
 
A (double) and 
 
B (int)
For each test case, you need to output 
 
A divided by 
 
B.
Sample 1:
Input
Output
2
6 4
10 3
1.5
3.33333
Explanation:
Test case 1: The 2 integers are 
6
6 and 
4
4 and we output 
1.5
1.5.

Test case 2: The 2 integers are 
10
10 and 
3
3 and we output 
3.33333
3.33333.

// Update the '_' below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   double A, X;
   int B;
   cin >> A >> B;
   //Division of A by B (double / int)
   X = A /B;
   cout << X << endl;
  }
}




Practice problem - Squats
Prev problem
Some more practice problems for you to do yourself.

You decided to do 
 
X sets of squats at the gym today.
Each set consists of 
15
15 squats.
Determine the total number of squats that you did today.

Input Format
The first line contains a single integer 
 
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer 
 
X — the total number of sets of squats that you did.
Output Format
For each test case, output the total number of squats done.

Sample 1:
Input
Output
3
1
4
99
15
60
1485


// Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y=1;
   cin>>X;
   cout<<X*15<<endl;





  }
 return 0;
}







Debug this code - Determine the Score
Prev problem
The code given in the IDE is incorrect - Try and debug this program!!!

There is a problem worth 
 
X points and it has 
10
10 test cases.
It is known that 
 
X is a multiple of 
10
10.
It is known that each test case is worth the same number of points.
You pass 
 
N test cases among them. Determine the score that you will get.

Input Format
First line will contain 
 
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers 
 
X and 
 
N, the total points for the problem and the number of test cases which pass.
Output Format
For each test case, output the points scored by you.

Sample 1:
Input
Output
2
10 3
100 10
3
100
Explanation:
Test Case 
1
1: The problem is worth 
10
10 points and since there are 
10
10 test cases, each test case is worth 
1
1 point. Since you pass 
3
3 test cases, your score will be 
1
⋅
3
=
3
1⋅3=3 points.

Test Case 
2
2: The problem is worth 
100
100 points and since there are 
10
10 test cases, each test case is worth 
10
10 points. Since you pass all the 
10
10 test cases, your score will be 
10
⋅
10
=
100
10⋅10=100 points.



// The code below is incorrect. Debug the code to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,N;
   cin>>X>>N;
   int points_per_testcase=1 ,score=1;
   points_per_testcase=X/10;
   score= points_per_testcase*N;
   cout<<score<<endl;
   }
 return 0;
}




Debug this code - Population
Prev problem
The code given in the IDE is incorrect - Try and debug this program!!!

Problem statement
There were initially 
 
X million people in a town, out of which 
 
Y million people left the town and 
 
Z million people immigrated to this town.
Determine the final population of the town in millions.

Input format
The first line of input will contain an integer 
 
T — the number of test cases.
The first and only line of each test case contains three integers 
 
X, 
 
Y and 
 
Z.
Output format
For each test case, output on a new line the final population of the town
Sample 1:
Input
Output
2
3 1 2
2 2 2
4
2
Explanation:
Test case 
1
1: The initial population of the town was 
3
3 million, out of which 
1
1 million people left and 
2
2 million people entered the town. So, final population 
=
3
−
1
+
2
=
4
=3−1+2=4 million.

Test case 
2
2: The initial population of the town was 
2
2 million, out of which 
2
2 million left and 
2
2 million immigrated. The final population is thus 
2
+
2
−
2
=
2
2+2−2=2 million.



// The code below is incorrect. Debug this code to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,Z;
   cin>>X>>Y>>Z;
   // Variable declared to hold the final population of the town
   int total_population = X - Y;

   total_population = total_population + Z;
   cout<<total_population<<endl;
   }
 return 0;
}














