Problem (MOVIE2X) - Read the problem statement
Prev module
Next problem
Chef started watching a movie that runs for a total of 
 
X minutes.
Chef has decided to watch the first 
 
Y minutes (
 
Y is even) of the movie at twice the usual speed.
How long will Chef spend watching the movie in total?

Input format - The first line contains two space separated integers 
 
,
 
X,Y
Output the total number of minutes that Chef spends in watching the moving
Sample 1:
Input
Output
100 20
90
Explanation:
For the first 
 
=
20
Y=20 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
 
2
=
10
2
Y
​
 =10 minutes.

For the remaining 
 
−
 
=
80
X−Y=80 minutes, Chef watches at the usual speed, so it takes him 
80
80 minutes to watch the remaining portion of the movie.

In total, Chef spends 
10
+
80
=
90
10+80=90 minutes watching the entire movie.

Sample 2:
Input
Output
50 24
38
Explanation:
For the first 
 
=
24
Y=24 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
 
2
=
12
2
Y
​
 =12 minutes.

For the remaining 
 
−
 
=
26
X−Y=26 minutes, Chef watches at the usual speed, so it takes him 
26
26 minutes to watch the remaining portion of the movie.

In total, Chef spends 
12
+
26
=
38
12+26=38 minutes watching the entire movie.



// Step 1: Read and understand the problem statement and sample test cases

// Click on 'Next' once you are ready to proceed.










Problem (MOVIE2X) - Generate examples
Prev problem
Now that we have understood the problem statement, let us write down a few more sample cases or examples.
Review the sample input / output given in the table below.

What would expected output be for the following values of 
 
X and 
 
Y?
Generate the examples in the IDE to proceed.

90 40
80 80
60 10
60 50
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
5 sample inputs
100 2
100 4
100 6
100 8
100 10
5 expected outputs
99
98
97
96
95
Did you like the problem?
2 users found this helpful





// Update the '_' in the code below to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int X = 90;
 int Y = 40;
 cout<<"Given X and Y, the total watchtime of the movie is 70"<<endl;

 X = 80;
 Y = 80;
 cout<<"Given X and Y, the total watchtime of the movie is 40"<<endl;

 X = 60;
 Y = 10;
 cout<<"Given X and Y, the total watchtime of the movie is 55"<<endl;

 X = 60;
 Y = 50;
 cout<<"Given X and Y, the total watchtime of the movie is 35"<<endl;

return 0;
}







Problem (MOVIE2X) - Observation
Prev problem
Next problem
What do we observe here?

From the statement - we know that 
 
Y is necessarily even
We know from the problem statement that Chef watched the first 
 
Y minutes at double the speed.
Thus Chef watched the first 
 
Y minutes of the movie in 
 
/
2
Y/2 minutes
How much movie was remaining?
As per normal viewing speed - 
 
−
 
X−Y minutes of movie was remaining
Hence - Chef's total watch-time is 
 
−
 
X−Y + 
 
/


2
Y/2 minutes
Sample 1:
Input
Output
90 40
80 80
60 10
60 50
70
40
55
35



// Click on 'Next' once the observations / logic is clear






Problem (MOVIE2X) - Solve the complete problem
Prev problem
Chef started watching a movie that runs for a total of 
 
X minutes.
Chef has decided to watch the first 
 
Y minutes (
 
Y is even) of the movie at twice the usual speed.
How long will Chef spend watching the movie in total?

Input format - The first line contains two space separated integers 
 
,
 
X,Y
Output the total number of minutes that Chef spends in watching the moving
Sample 1:
Input
Output
100 20
90
Explanation:
For the first 
 
=
20
Y=20 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
 
2
=
10
2
Y
​
 =10 minutes.

For the remaining 
 
−
 
=
80
X−Y=80 minutes, Chef watches at the usual speed, so it takes him 
80
80 minutes to watch the remaining portion of the movie.

In total, Chef spends 
10
+
80
=
90
10+80=90 minutes watching the entire movie.

Sample 2:
Input
Output
50 24
38
Explanation:
For the first 
 
=
24
Y=24 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
 
2
=
12
2
Y
​
 =12 minutes.

For the remaining 
 
−
 
=
26
X−Y=26 minutes, Chef watches at the usual speed, so it takes him 
26
26 minutes to watch the remaining portion of the movie.

In total, Chef spends 
12
+
26
=
38
12+26=38 minutes watching the entire movie.





// Update the code below this line to solve the problem
// Remember - there is no t in this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int X,Y;
 cin>>X>>Y;
 cout<<X-Y+Y/2<<endl;

return 0;
}






Problem (Flip cards) - Read the problem statement
Prev problem
Next problem
There are 
 
N cards on a table, out of which 
 
X cards are face-up and the remaining are face-down.
In one operation, we can do the following:

Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?

Sample 1:
Input
Output
4
5 0
4 2
3 3
10 2
0
2
0
2
Explanation:
Test Case 1: All the cards are already facing down. Therefore we do not need to perform any operations.

Test Case 2: 
2
2 cards are facing up and 
2
2 cards are facing down. Therefore we can flip the 
2
2 cards which are initially facing down.

Test Case 3: All the cards are already facing up. Therefore we do not need to perform any operations.

Test Case 4: 
2
2 cards are facing up and 
8
8 cards are facing down. Therefore we can flip the 
2
2 cards which are initially facing up.



// Step 1: Read and understand the problem statement and sample test cases

// Click on 'Next' once you are ready to proceed.






Problem (Flip cards) - Generate examples
Prev problem
Now that we have understood the problem statement, let us write down a few more sample cases or examples.
Review the sample input / output given in the table below.

What would expected output be for the following values of 
 
N and 
 
X?
Generate the examples in the IDE to proceed.

10 3
10 7
10 4
10 6
Sample 1:
Input
Output
6 sample inputs
6 1
6 2
6 3
6 4
6 5
6 6
6 sample outputs
1
2
3
2
1
0

// Update the '_' below to solve this problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int N = 10;
 int X = 3;
 cout<<"The number of cards we need to flip is 3"<<endl;

 N = 10;
 X = 7;
 cout<<"The number of cards we need to flip is 3"<<endl;

 N = 10;
 X = 4;
 cout<<"The number of cards we need to flip is 4"<<endl;

 N = 10;
 X = 6;
 cout<<"The number of cards we need to flip is 4"<<endl;

return 0;
}







Problem (Flip cards) - Observation
Prev problem
Next problem
What do we observe here?

As the value of 
 
X increases from 
0
0, initially the cards to be flipped increases.
However, beyond a certain value of 
 
X - the number of cards to be flipped starts decreasing again.
We read the problem statement again and notice that all cards have to be either face up or face down in the minimum count of operations
if 
 
X cards are face up, then 
 
−
 
N−X cards are face down
Since we want to minimise operations,
if 
 
X > 
 
−
 
N−X, then we flip 
 
−
 
N−X cards. Now all 
 
N cards face up
if 
 
X < 
 
−
 
N−X, then we flip 
 
X cards. Now all 
 
N cards face down
if 
 
X = 
 
−
 
N−X, then we can flip either the 
 
X face up cards or the 
 
−
 
N−X face down cards.
Number of operations is the same.
Once the observations / logic is clear, click on Next to proceed.

Sample 1:
Input
Output
10 3
10 7
10 4
10 6
3
3
4
4





// Once you are clear with the observations / logic, click on 'Next' to proceed







Problem (Flip cards) - Solve sub-components
Prev problem
How do we find the minimum number of cards to be flipped?

One option is to flip 
 
X cards
The other option is to flip 
 
−
 
N−X cards
We need to find the minimum of the above
Code out the solution to this sub-problem in the IDE!







// Update the '_' below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int N = 10;
 int X = 4;
 int option1 =X;
 int option2 =N-X;
 cout<<min(option1, option2)<<endl;

 N = 10;
 X = 6;
 option1 = X;
 option2 = N-X;
 cout<<min(option1, option2)<<endl;

return 0;
}







Problem (Flip cards) - Solve the complete problem
Prev problem
There are 
 
N cards on a table, out of which 
 
X cards are face-up and the remaining are face-down.
In one operation, we can do the following:

Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?

Input Format
The first line contains a single integer 
 
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers 
 
N and 
 
X — the total number of cards and the number of cards which are initially face-up.
Output Format
For each test case, output the minimum number of cards you must flip so that all the cards face in the same direction.

Sample 1:
Input
Output
4
5 0
4 2
3 3
10 2
0
2
0
2
Explanation:
Test Case 1: All the cards are already facing down. Therefore we do not need to perform any operations.

Test Case 2: 
2
2 cards are facing up and 
2
2 cards are facing down. Therefore we can flip the 
2
2 cards which are initially facing down.

Test Case 3: All the cards are already facing up. Therefore we do not need to perform any operations.

Test Case 4: 
2
2 cards are facing up and 
8
8 cards are facing down. Therefore we can flip the 
2
2 cards which are initially facing up.






//  Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
    int N, X;
    cin>>N>>X;
    cout<<min(X,N-X)<<endl;

 }
return 0;
}








