Module on basic conditional statements
Prev module
We have reviewed programming problems on basic math in the previous module.
We now incorporate conditional statements in our problem solving capabilities along with basic math.

Just a recap on what we covered in Learn C++ learning path regarding conditional statements.

"if" and "else" can be used together to create conditions.
The "else if" keyword means "if the previous conditions were not true, then try this condition"
The "else" keyword includes all cases which aren't included in the previous conditions.
Usual conditions used within if / else / else if statements
Equals: a == b
Not Equals: a != b
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
"and" and "or" statements help check multiple conditions. "&&" can also be used to mean "and". "||" can also be used to mean "or".
Revise some of this syntax in the IDE.


// Click on 'Submit' to first see the results
// Click on 'Next to continue'

// if-else statements 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a = 13;
    int b = 15;
    if (a >= b)
    {
        cout<<a<<" is greater than or equal to "<<b<<endl;
    }   
    else
    {
        cout<<a<<" is lesser than "<< b<<endl;
    }
    
    // lets add the else if statement
    a = 14;
    b = 14;
    if(a > b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a==b)
    {
        cout<<a<<" is equal to "<< b<<endl;
    }
    else
    {
        cout<<a<<" is lesser than "<< b<<endl;
    }
    
    return 0;
}








Review syntax usage
Prev problem
Let us cover the 'conditional statements' syntax required for solving beginner's programming problems.

Task
Write a program which does the following

Accepts the count of test cases - 
 
t
Each test case has one integer 
 
N
Output the following for each test case
If input is less than or equal to 
100
100, output 'Good'
If input is greater than 100 but less than or equal to 
200
200, output 'Better'
If the input is greater than 200, output 'Best'
Sample 1:
Input
Output
3
100
200
201
Good
Better
Best




// Update the blanks in the code below

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int N;
   // Accept 1 integer as input.
   cin>>N;       
   //1st condition in the problem
   if (N<=100)
     {   
       cout<<"Good"<<endl;
     }
    //2nd condition in the problem
    else if (N>100 && N<=200)
        {
          cout<<"Better"<<endl;
        }
    //3rd condition in the problem
    else
        {                   
         cout<<"Best"<<endl;
        }
  }
 return 0;
}






Comparison operators
Prev problem
Usual Comparison operators used within conditional statements are

Equals: a == b
Not Equals: a != b
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Task
Write a program which does the following

Accepts the count of test cases - 
 
t
Each test case has one integer 
 
N
Output the following for each test case on separate lines
If input is exactly divisible by 
3
3, output 'Divisible by 3'. Else output 'Not divisible by 3'.
If the input is odd, output 'Odd'. Else output 'Even'.
Sample 1:
Input
Output
4
3
4
5
6
Divisible by 3
Odd
Not divisible by 3
Even
Not divisible by 3
Odd
Divisible by 3
Even
Explanation:
Test case 1: 
3
3 is divisible by 3 and is odd as well
Test case 2: 
4
4 is not divisible by 3. However, 
4
4 is even.

// Update the '_' below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    if( N % 3 == 0)
	    {
	        cout << "Divisible by 3" << endl;
	    }
	    else
	    {
	        cout << "Not divisible by 3" << endl;
	    }
	    if( N % 2 == 0)
	    {
	        cout << "Even" << endl;
	    }
	    else
	    {
	        cout << "Odd" << endl;
	    }
	    
	}
	return 0;
}



Practice problem - Age Limit
Prev problem
Best way to learn - practice and solve problems based on the concept!!!

Task
Chef wants to appear in a competitive exam. To take the exam, there are following requirements:

Minimum age limit is 
 
X (i.e. Age should be greater than or equal to 
 
X).
Age should be strictly less than 
 
Y.
Chef's current Age is 
 
A. Find whether he is currently eligible to take the exam or not.

Input Format
First line will contain 
 
T, number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three integers 
 
,
 
,
X,Y, and 
 
A as mentioned in the statement.
Output Format
For each test case, output YES if Chef is eligible to give the exam, NO otherwise.
Sample 1:
Input
Output
2
21 34 30
25 31 31
YES
NO
Explanation:
Test case 
1
1: The age of Chef is 
30
30. His age satisfies the minimum age limit as 
30
≥
21
30≥21. Also, it is less than the upper limit as 
30
<
34
30<34. Thus, Chef is eligible to take the exam.

Test case 
2
2: The age of Chef is 
31
31. His age satisfies the minimum age limit as 
31
≥
25
31≥25. But, it is not less than the upper limit as 
31
≮
31
31≮31. Thus, Chef is not eligible to take the exam.



// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,A;
   //Accept 3 integers inputs.
   cin>>X>>Y>>A;
   if(A>=X && A<Y){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }


   }
 return 0;
}


   
Practice problem - Tax in Chefland
Prev problem
In Chefland, a tax of rupees 
10
10 is deducted if the total income is strictly greater than rupees 
100
100.
Given that total income is 
 
X rupees, find out how much money does the Chef take home.

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases.
The first and only line of each test case contains a single integer 
 
X — Chef's total income.
Output Format
For each test case, output on a new line, the amount of money that Chef takes home after deducting tax.

Sample 1:
Input
Output
2
101
100
91
100
Explanation:
Test case 
1
1: Your total income is 
101
101 rupees which is greater than 
100
100 rupees. Thus, a tax of 
10
10 rupees would be deducted and you get 
101
−
10
=
91
101−10=91 rupees.

Test case 
2
2: Your total income is 
100
100 rupees which is equal to 
100
100 rupees. Thus, no tax would be deducted and you get 
100
100 rupees.



// Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X;
   //Accept 1 integer inputs.
   cin>>X; 
   if(X>100){
       X=X-10;
   }
   cout<<X<<endl;
      
   
  }
 return 0;
}









