Basic math - Addition and multiplication
Prev module
Next problem
Basic math and logic based programming problems are the correct starting point for Beginners.

In the previous module, we have learnt how to accept multiple inputs and test cases
The current module will use our knowledge of C++ syntax and learnings from the previous module
Task
Lets start with a simple problem - you need to write a program which does the following

Accepts the number of inputs / test cases as '
 
t'
The only line of each test case contains 2 integers - declare them as variables 
 
A and 
 
B
For each test case, you need to perform the following operations
Create a variable - 
 
S - the sum of the 2 input integers
Create a variable - 
 
P - the product of the 2 input integers
Output 2 space separated integers - 
 
S and 
 
P in a single line
Note:

The syntax for product of 2 integers in C++ is (
 
X * 
 
Y)
Sample 1:
Input
Output
2
5 10
3 4
15 50
7 12
Explanation:
Test case 1: The 2 integers are 
5
5 and 
10
10 and we output 
15
15 as their sum and 
50
50 as their product

Test case 2: The 2 integers are 
3
3 and 
4
4 - we output 
7
7 and 
12
12 as their sum and product respectively







//Update the '_' in the code below

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int A,B,S,P;
   cin>>A>>B;;
   //Sum of inputs
   S = A + B;               
   //Product of inputs
   P = A * B;               
   //Print the desired output for each test case
   cout<<S<<" "<<P<<endl;
   }
 return 0;
}



Practice problem - Tuition fees
Prev problem
Let's solve this practice problem.

You will attend tuitions for 
 
X weeks, and the cost of tuition per week is 
 
Y dollars.
You need to compute and output your total tuition fees.

Hint

Refer to the multiplication syntax you learnt in the previous questions
Run your code on the sample test cases before submitting the same
Input Format
The first line of input will contain an integer 
 
T — the number of test cases.
The first and only line of each test case contains two space-separated integers 
 
X and 
 
Y
Output Format
For each test case, output on a new line your total tuition fees.
Sample 1:
Input
Output
4
1 10
1 15
2 10
2 15
10
15
20
30




//Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,tuition;
   cin>>X>>Y;
   cout<<Y*X<<endl;

   }
 return 0;
}






Practice problem - Fitness
Prev problem
Another practice problem for you.

Chef wants to become fit for which he decided to walk to the office and return home by walking.
It is known that Chef's office is 
 
X km away from his home.
If his office is open on 
5
5 days in a week, find the number of kilometres Chef travels through office trips in a week.

Hint

Return trips imply that 
2
2*
 
X distance is travelled each day
Input Format
First line will contain 
 
T, number of test cases. Then the test cases follow.
Each test case contains of a single line consisting of single integer 
 
X.
Output Format
For each test case, output the number of kilometers Chef travels through office trips in a week.

Sample 1:
Input
Output
2
1
7
10
70
Explanation:
Test case 
1
1: The office is 
1
1 km away. Thus, to go to the office and come back home, Chef has to walk 
2
2 kms in a day. In a week with 
5
5 working days, Chef has to travel 
2
⋅
5
=
10
2⋅5=10 kms in total.

Test case 
2
2: The office is 
7
7 kms away. Thus, to go to the office and come back home, Chef has to walk 
14
14 kms in a day. In a week with 
5
5 working days, Chef has to travel 
14
⋅
5
=
70
14⋅5=70 kms in total.




//Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y=0;
   cin>>X;
   Y=X*5*2;
   cout<<Y<<endl;
  }
    
}






Debug this code - Total prize money
Prev problem
The code given in the IDE is incorrect - Try and debug this program!!!

In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 
10
10 participants receive rupees 
 
X each.
Participants with rank 
11
11 to 
100
100 (both inclusive) receive rupees 
 
Y each.
Find the total prize money over all the participants.

Input Format
First line will contain 
 
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers 
 
X and 
 
Y - the prize for top 
10
10 rankers and the prize for ranks 
11
11 to 
100
100 respectively.
Output Format
For each test case, output the total prize money over all the contestants.

Sample 1:
Input
Output
2
80 1
400 30
890
6700
Explanation:
Test Case 
1
1: Top 
10
10 participants receive rupees 
80
80 and next 
90
90 participants receive rupee 
1
1 each. So, total prize money 
=
10
⋅
80
+
90
⋅
1
=
890
=10⋅80+90⋅1=890.

Test Case 
2
2: Top 
10
10 participants receive rupees 
400
400 and next 
90
90 participants receive rupees 
30
30 each. So, total prize money 
=
10
⋅
400
+
90
⋅
30
=
6700
=10⋅400+90⋅30=6700.






// The code below is incorrect. Debug this code to solve the problem.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,prize_top=1,prize=1;
   cin>>X>>Y;
   prize_top = 10*X;           
   prize= 90*Y;        
   cout<<prize_top+prize<<endl; 
   }
 return 0;
}
















