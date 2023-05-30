Problem(Farm animals) - Read the problem statement
Prev module
Next problem
Ok - let us use our Logic building technique for the next problem.
Read the following problem statement.

In Chefland, each chicken has 
 
X legs and each duck has 
 
Y legs.
Chef's farm can have exactly one type of bird. But it can have many birds of that type.
Given that the birds on the farm have a total of 
 
Z legs:

Print CHICKEN, if the farm can have only chickens but not ducks.
Print DUCK, if the farm can have only ducks but not chickens.
Print ANY, if the farm can have either chickens or ducks.
Print NONE, if the farm can have neither chickens nor ducks.
Sample 1:
Input
Output
3
2 3 5
2 2 2
3 4 6
NONE
ANY
CHICKEN
Explanation:
Test case 
1
1: There are 
5
5 legs on the farm. Each chicken has 
2
2 legs and each duck has 
3
3 legs. Thus, the farm can have neither chickens nor ducks.

Test case 
2
2: There are 
2
2 legs on the farm. Each chicken has 
2
2 legs and each duck has 
2
2 legs. Thus, the farm can have any bird among chicken and duck.

Test case 
3
3: There are 
6
6 legs on the farm. Each chicken has 
3
3 legs and each duck has 
4
4 legs. Thus, the farm can have chicken only.



// Step 1: Read and understand the problem statement and sample test cases

// Click on 'Next' once you are ready to proceed.





Problem(Farm animals) - Generate examples
Prev problem
Now that we have understood the problem statement, let us write down a few more sample cases or examples.
Review the sample input / output given in the table below (In section "Sample 1").

What would expected output be for the following values of 
 
X, 
 
Y and 
 
Z?
Generate the expected output in the IDE to proceed.

3 4 12
3 5 13
3 5 10
3 5 9
Sample 1:
Input
Output
8 sample inputs 
2 3 4
2 3 5
2 3 6
2 3 7
2 3 8
2 3 9
2 3 10
2 3 11
8 sample inputs 
CHICKEN
NONE
ANY
NONE
CHICKEN
DUCK
CHICKEN
NONE



// Update the '_' in the code below to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{

 int X = 3;
 int Y = 4;
 int Z = 12;
 cout<<"The animal on the farm is ANY"<<endl;

 X = 3;
 Y = 5;
 Z = 13;
 cout<<"The animal on the farm is NONE"<<endl;

 X = 3;
 Y = 5;
 Z = 10;
 cout<<"The animal on the farm is DUCK"<<endl;

 X = 3;
 Y = 5;
 Z = 9;
 cout<<"The animal on the farm is CHICKEN"<<endl;

return 0;
}



Problem(Farm animals) - Observation
Prev problem
Next problem
What do we observe here?

The problem statement told us there is exactly one type of bird on the farm
If 
 
Z is divisible only by 
 
X and not by 
 
Y - then the animals on the farm have to be 
 
 
 
 
 
 
 
CHICKEN
If 
 
Z is divisible only by 
 
Y and not by 
 
X - then the animals on the farm have to be 
 
 
 
 
DUCK
If 
 
Z is divisible by both 
 
X and 
 
Y - then the animals on the farm can be either - hence 
 
 
 
ANY
If 
 
Z is not divisible by either 
 
X or 
 
Y - then neither Chickens nor Ducks are on the farm - the output is 
 
 
 
 
NONE
Click on Next to continue.



// Click on 'Next' once you have understood the observations / logic.





Problem(Farm animals) - Solve sub-components
Prev problem
How do we find the following?

 
Z is divisible only by 
 
X
 
Z is divisible only by 
 
Y
 
Z is divisible by both 
 
X and 
 
Y
 
Z is divisible by neither 
 
X nor 
 
Y
Code it out in the IDE and click on Submit to continue.






// Update the '_' in the code below with the expected output

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int X = 3;
 int Y = 4;
 int Z = 12;
 if ((Z%X == 0) && (Z%Y == 0))
    {
     cout<<"Z is divisible by both X and Y"<<endl;
    }
 else if (Z%X == 0)
    {
     cout<<"Z is divisible only by X"<<endl;
    }
 else if (Z%Y == 0)
    {
     cout<<"Z is divisible only by Y"<<endl;
    }
 else
    {
     cout<<"Z is divisible by neither X nor Y"<<endl;
    }

 X = 3;
 Y = 5;
 Z = 13;
 if ((Z%X == 0) and (Z%Y == 0))
    {
     cout<<"Z is divisible by both X and Y"<<endl;
    }
 else if (Z%X == 0)
    {
     cout<<"Z is divisible only by X"<<endl;
    }
 else if (Z%Y == 0)
    {
    cout<<"Z is divisible only by Y"<<endl;
    }
 else
    {
    cout<<"Z is divisible by neither X nor Y"<<endl;
    }

return 0;
}







Problem(Farm animals) - Solve the complete problem
Prev problem
In Chefland, each chicken has 
 
X legs and each duck has 
 
Y legs.
Chef's farm can have exactly one type of bird.
Given that the birds on the farm have a total of 
 
Z legs:

Print CHICKEN, if the farm can have only chickens but not ducks.
Print DUCK, if the farm can have only ducks but not chickens.
Print ANY, if the farm can have either chickens or ducks.
Print NONE, if the farm can have neither chickens nor ducks.
Input format

The first line will contain 
 
T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers 
 
,
 
,
 
X,Y,Z.
Sample 1:
Input
Output
3
2 3 5
2 2 2
3 4 6
NONE
ANY
CHICKEN
Explanation:
Test case 
1
1: There are 
5
5 legs on the farm. Each chicken has 
2
2 legs and each duck has 
3
3 legs. Thus, the farm can have neither chickens nor ducks.

Test case 
2
2: There are 
2
2 legs on the farm. Each chicken has 
2
2 legs and each duck has 
2
2 legs. Thus, the farm can have any bird among chicken and duck.

Test case 
3
3: There are 
6
6 legs on the farm. Each chicken has 
3
3 legs and each duck has 
4
4 legs. Thus, the farm can have chicken only.
\




// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   int X, Y, Z;
   cin>>X>>Y>>Z;
   if(Z%X==0 && Z%Y==0){
       cout<<"ANY"<<endl;
   }
   else if(Z%X==0){
       cout<<"CHICKEN"<<endl;
   } 
   else if(Z%Y==0){
       cout<<"DUCK"<<endl;
   }
   else{
       cout<<"NONE"<<endl;
   }
  
  }
return 0;
}



Problem 3 (High Accuracy) - Read the problem
Prev problem
Next problem
There are 
100
100 questions in a paper.

Each question carries +3 marks for correct answer,
-1 marks for incorrect answer i.e. one mark is deducted for each incorrect answer,
0 marks for an unattempted question.
It is given that Chef received exactly 
 
X 
(
0
≤
 
≤
100
)
(0≤X≤100) marks.
Determine the minimum number of problems Chef marked incorrect.

Sample 1:
Input
Output
4
0
100
32
18
0
2
1
0
Explanation:
Test Case 
1
1: It might be possible that Chef didn't attempt any question in which case he didn't get any question incorrect.

Test Case 
2
2: In the case where the Chef answered 
34
34 questions correctly, they would have got 
102
102 marks (
34
34 * 
3
3), and if they answered 
2
2 questions incorrectly, their marks would have been reduced by 
2
2, resulting in a total of 
100
100 marks. So, the minimum number of problems Chef marked incorrect in this case is 
2
2.

Test Case 
3
3: In the case where the Chef answered 
11
11 questions correctly, they would have got 
33
33 marks (
11
11 * 
3
3), and if they answered 
1
1 questions incorrectly, their marks would have been reduced by 
1
1, resulting in a total of 
32
32 marks. So, the minimum number of problems Chef marked incorrect in this case is 
1
1.

Test Case 
4
4: For the case when Chef got 
6
6 questions correct, they would have got 
18
18 marks (
6
6 * 
3
3) and he didn't get any question incorrect.






// Step 1: Read and understand the problem statement and sample test cases

// Click on 'Next' once you are ready to proceed.





Problem 3 (High Accuracy) - Generate examples
Prev problem
Now that we have understood the problem statement, let us write down a few more sample cases or examples.
Review the sample input / output given in the table below.

What would expected output be for the following values of 
 
X?
Update your solution in the IDE to continue.

18
19
20
7
Sample 1:
Input
Output
6 sample inputs
11
12
13
14
15
16
6 expected outputs
1
0
2
1
0
2



// Update the blanks in the statements below

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int X = 18;
 cout<<"minimum number of problems Chef marked incorrect are 0"<<endl;

 X = 19;
 cout<<"minimum number of problems Chef marked incorrect are 2"<<endl;

 X = 20;
 cout<<"minimum number of problems Chef marked incorrect are 1"<<endl;

 X = 7;
 cout<<"minimum number of problems Chef marked incorrect are 2"<<endl;

return 0;
}










Problem 3 (High Accuracy) - Observation
Prev problem
Next problem
What do we observe here?

The minimum number of questions solved incorrectly are necessarily 
0
0, 
1
1 OR 
2
2.
Given the problem statement - no other values are possible.
When are the minimum number of questions solved incorrectly 
0
0?
When the total score 
 
X is divisible by 
3
3 - for example when 
 
X is 
0
0, 
12
12, 
15
15, 
18
18
In this case 
 
/
3
X/3 questions are correctly solved, 
0
0 questions are incorrectly solved and 
(
100
−
 
/
3
)
(100−X/3) questions are unattempted
When are the minimum number of questions solved incorrectly 
1
1?
When 
1
1 question is incorrectly solved, the score of the questions correctly solved is (
 
+
1
X+1)
Hence - when 
(
 
+
1
)
(X+1) is divisible by 3 - then only 
1
1 question is incorrectly solved
When are the minimum number of questions solved incorrectly 
2
2?
When 
2
2 questions are incorrectly solved, the score of the questions correctly solved is (
 
+
2
X+2)
Hence - when 
(
 
+
2
)
(X+2) is divisible by 3 - then only 
2
2 questions are incorrectly solved
Click on Next to solve the sub-components of the problem.

Sample 1:
Input
Output
18
19
20
7
0
2
1
2





// Click on 'Next' once the observations / logic is clear




Problem 3 (High Accuracy) - Solve sub-components
Prev problem
How do we find the number of questions incorrectly solved?

If 
 
X is divisible by 3, then minimum number of questions incorrect is 
0
0
If 
 
+
1
X+1 is divisible by 3, then minimum number of questions incorrect is 
1
1
If 
 
+
2
X+2 is divisible by 3, then minimum number of questions incorrect is 
2
2
Go ahead and code out this sub-problem in the IDE!





// Update the '_' below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int X = 30;
 if (X%3 == 0)
    {
      cout<<"Number of questions incorrctly solved is 0"<<endl;
    }
 else if ((X+1)%3 == 0)
    {
      cout<<"Number of questions incorrctly solved is 1"<<endl;
    }
else
    {
      cout<<"Number of questions incorrctly solved is 2"<<endl;
    }
    
 X=34;
 if (X%3 == 0)
    {
      cout<<"Number of questions incorrctly solved is 0"<<endl;
    }
 else if ((X+1)%3 == 0)
    {
      cout<<"Number of questions incorrctly solved is 1"<<endl;
    }
 else
    {
      cout<<"Number of questions incorrctly solved is 2"<<endl;
    }

return 0;
}





Problem(High Accuracy)- Solve the complete problem
Prev problem
There are 
100
100 questions in a paper.

Each question carries +3 marks for correct answer,
-1 marks for incorrect answer i.e. one mark is deducted for each incorrect answer,
0 marks for an unattempted question.
It is given that Chef received exactly 
 
X 
(
0
≤
 
≤
100
)
(0≤X≤100) marks.
Determine the minimum number of problems Chef marked incorrect.

Input Format
First line will contain 
 
T, number of test cases. Then the test cases follow.
Each testcase contains of a single integer 
 
X, marks that Chef received.
Output Format
For each test case, output the minimum number of problems Chef marked incorrect.

Sample 1:
Input
Output
4
0
100
32
18
0
2
1
0
Explanation:
Test Case 
1
1: It might be possible that Chef didn't attempt any question in which case he didn't get any question incorrect.

Test Case 
2
2: For the case when Chef got 
34
34 questions correct and 
2
2 questions incorrect, Chef marked minimum incorrect questions.

Test Case 
3
3: For the case when Chef got 
11
11 questions correct and 
1
1 question incorrect, Chef marked minimum incorrect questions.

Test Case 
4
4: For the case when Chef got 
6
6 questions correct and no question incorrect, Chef marked minimum incorrect questions.







// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
  int X;
  cin>>X;
  if(X%3==0){
      cout<<0<<endl;
  }
  else if((X+1)%3==0){
      cout<<1<<endl;
  }
  else if((X+2)%3==0){
      cout<<2<<endl;
  }
  else{
      cout<<0<<endl;
  }
  
  } 
return 0;
}









