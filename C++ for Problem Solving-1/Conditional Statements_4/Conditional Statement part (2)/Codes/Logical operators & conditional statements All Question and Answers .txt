Logical operators & conditional statements
Prev module
We reviewed basic conditional operators in the previous module.
In this module - we will cover logical operators in conditional statements.

"and" and "or" in statements help check multiple conditions
A single statement can have multiple conditions clubbed together using "and" and "or". These can be used in if / else conditions.
Task
You are given 3 integers 
 
N, 
 
A and 
 
B.
You need to compute and output the following for each test case

If 
 
N is divisible by both 
 
A and 
 
B - then output 'N is divisible by A and B'
Else if 
 
N is divisible by 
 
A and not 
 
B - then output 'N is divisible by only A'
Else if 
 
N is divisible by 
 
B and not 
 
A - then output 'N is divisible by only B'
Else if 
 
N is divisible by neither 
 
A nor 
 
B - then output 'N is divisible by neither A nor B'
Solve this problem in the IDE.

Sample 1:
Input
Output
4
10 5 2
10 3 2
12 3 5
10 4 3
N is divisible by A and B
N is divisible by only B
N is divisible by only A
N is divisible by neither A nor B



// Update the '_' in the code below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,A,B;
	    cin >> N >> A >> B;
	    if ( N%A == 0 && N%B == 0)
            cout << "N is divisible by A and B" << endl;
        else if ( N % A == 0)
            cout << "N is divisible by only A" << endl;
        else if ( N % B == 0)
            cout << "N is divisible by only B" << endl;
        // The last statement could have been an 'else' statement
        // else if condition used to show usage of 'and' statement
        else if( N % A != 0 && N % B != 0)
            cout << "N is divisible by neither A nor B" << endl;
	}
	return 0;
}






Logical operators
Prev problem
Let us try an example with multiple conditions which can be clubbed into a single if / else condition using "and" and "or" .

Task
You are given 2 integers 
 
A and 
 
B.
You need to compute and output the following for each test case

If 
 
A is not equal to 
 
B and 
 
A and 
 
B are both odd - then output 'A and B are different and are odd'
Else if 
 
A is not equal to 
 
B and 
 
A and 
 
B are both even - then output 'A and B are different and are even'
For every other value of 
 
A and 
 
B, output 'Doesn't matter'
Solve this problem in the IDE.

Sample 1:
Input
Output
4
-9 5
3 3
-10 10
2 1
A and B are different and are odd
Doesn't matter
A and B are different and are even
Doesn't matter





// Update the '_'s below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B;
	    cin >> A >> B;
	    if (A != B && (A%2 != 0 && B%2 != 0))
        cout <<"A and B are different and are odd"<< endl;
        else if (A != B && (A%2 == 0 && B%2 == 0))
        cout <<"A and B are different and are even"<< endl;
        else
        cout <<"Doesn't matter"<< endl;
	}
	return 0;
}




Debug this code - Football Cup
Prev problem
The code in the IDE is incorrect - debug the code to solve this problem!

Chef likes a football match if

The match ends in a draw, and,
At least one goal has been scored by either team.
Given the goals scored by both the teams as 
 
X and 
 
Y respectively, determine whether Chef will like the match or not.

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases. The description of 
 
T test cases follows.
Each test case consists of a single line of input containing two space-separated integers 
 
X and 
 
Y — the goals scored by each team.
Output Format
For each test case, output 
YES
YES if Chef will like the match, else output 
NO
NO.

Sample 1:
Input
Output
2
1 1
0 1
YES
NO
Explanation:
Test case 
1
1: It is a draw in which both teams have scored a goal, Chef will like this match.

Test case 
2
2: The game is not a draw. Hence, Chef will not like this match.






// The code below is incorrect. Debug the code to solve this problem
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
   {
    int X,Y;
    //Accept 2 integers inputs.
    cin>>X>>Y;       
    
    if ((X == Y) && (X>0 || Y>0))       
      {
        cout<<"YES"<<endl;
       }
    else
      {
        cout<<"NO"<<endl;
       }
   }
 return 0;







Debug this code - Advance
Prev problem
The code in the IDE is incorrect - debug the code to solve this problem!

Chef's current rating is 
 
X, and he wants to improve it.
It is generally recommended that a person with rating 
 
X should solve problems whose difficulty lies in the range 
[
 
,
 
+
200
]
[X,X+200], i.e, problems whose difficulty is at least 
 
X and at most 
 
+
200
X+200.
You find out that Chef is currently solving problems with a difficulty of 
 
Y.
Is Chef following the recommended practice or not?

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input, containing two space-separated integers 
 
,
 
X,Y.
Output Format
For each test case, output on a new line 'YES' if Chef is following the recommended practice style, and 'NO' otherwise.

Sample 1:
Input
Output
2
1300 1500
1201 1402
YES
NO
Explanation:
Test case 
1
1: Chef's current rating is 
1300
1300, so he should solve problems with difficulty lying in 
[
1300
,
1500
]
[1300,1500]. Since 
1500
1500 lies in 
[
1300
,
1500
]
[1300,1500], Chef is doing his practice in a recommended way :)

Test case 
2
2: Chef's current rating is 
1201
1201, so he should solve problems with difficulty lying in 
[
1201
,
1401
]
[1201,1401]. Since 
1402
1402 does not lie in 
[
1201
,
1401
]
[1201,1401], Chef is not doing his practice in a recommended way :(






// The code below is incorrect. Debug this code to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  {
   int X,Y;
   cin>>X>>Y; 
   
   if (X<=Y && (X+200)>=Y)              
     {
       cout<<"Yes"<<endl;
      }
   else
     {
       cout<<"No"<<endl;
      }
  
  }
 return 0;
}







Debug this code - Pass the Exam
Prev problem
The code in the IDE is incorrect - debug the code to solve this problem!

Chef appeared for an exam consisting of 
3
3 sections. Each section is worth 
100
100 marks.
Chef scored 
 
A marks in Section 
1
1, 
 
B marks in section 
2
2, and 
 
C marks in section 
3
3.
Chef passes the exam if both of the following conditions satisfy:

Total score of Chef is 
≥
100
≥100;
Score of each section 
≥
10
≥10.
Determine whether Chef passes the exam or not.

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases.
Each test case consists of a single line containing 
3
3 space-separated numbers 
 
,
 
,
 
A,B,C - Chef's score in each of the sections.
Output Format
For each test case, output 'PASS' if Chef passes the exam, 'FAIL' otherwise.

Sample 1:
Input
Output
2
9 100 100
30 40 50
FAIL
PASS
Explanation:
Test Case 
1
1: Although Chef's total score is 
209
≥
100
209≥100, still Chef fails the exam since his score in section 
1
1 is 
<
10
<10.

Test Case 
2
2: Chef cleared each section's cutoff as well his total score 
=
120
≥
100
=120≥100.




// The code below is incorrect. Debug this code to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  {
   int A,B,C;
   cin>>A>>B>>C; 
   int total_score = A + B + C;
   int minimum_score = min(A,min(B,C));
   
   if (total_score>=100 && minimum_score>=10)              
     {
      
       cout<<"PASS"<<endl;
      }
   else
     {
       cout<<"FAIL"<<endl;
      }
  
  }
 return 0;
}








}



