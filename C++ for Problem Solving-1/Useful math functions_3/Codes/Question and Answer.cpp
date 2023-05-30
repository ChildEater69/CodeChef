Abs() - Absolute function
Prev problem
Let us check the 
 
 
 
abs function in a bit more detail

Task
There are multiple test cases denoted by the integer 
 
T.
You are given 2 integers - 
 
A and 
 
B.
For each test case, you need to output the following 4 space separated integers on a single line

 
−
 
A−B
 
−
 
B−A
 
 
 
(
 
−
 
)
abs(A−B)
 
 
 
(
 
−
 
)
abs(B−A)
What do you observe in the results?
Go ahead and code out the solution in the IDE.

Sample 1:
Input
Output
3
10 5
5 10
3 11
5 -5 5 5
-5 5 5 5
-8 8 8 8


// Update the '_' in the code below to solve this problem
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
	   cout << A-B <<" "<< B-A <<" "<< abs(A-B)<<" "<< abs(B-A) << endl;
	}
	return 0;
}






Modulo function
Prev problem
The modulo - 
%
% function is helpful whenever we want to check the divisibility of 2 numbers.

Task
There are multiple test cases denoted by the integer 
 
T.
You are given 2 integers - 
 
A and 
 
B.
For each test case, you need to output the following 2 space separated integers on a single line

The quotient when 
 
A is divided by 
 
B - i.e. 
 
/
 
A/B
The remainder when 
 
A is divided by 
 
B - i.e. 
 
%
 
A%B
Go ahead and code out the solution in the IDE.

Sample 1:
Input
Output
4
10 5
11 5
14 5
15 5
2 0
2 1
2 4
3 0
Explanation:
%
% function gives us the output 
0
0 only when 
 
A is divisible by 
 
B


// Update the blanks in the code below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A, B;
	    cin >> A >> B;
	    cout << A / B <<" "<< A % B <<endl;
	}
	return 0;
}








Practice problem - Modulo function
Prev problem
Chef has recently started playing chess.
He completes a game of chess in 30 minutes.
Chef has a total of 
 
N minutes of available time

He will utilise the maximum possible time to play
He will not plan incomplete games - if there is insufficient time remaining to play a game, he will not play the game
How many complete games with Chef be able to play and how much spare time will remain?
Go ahead and code out the solution in the IDE.

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases.
Each test case consists of the integer 
 
N
Output Format
For each test case, output on a new line 
2
2 space separated integers

Total games played by Chef
Total spare time in minutes
Sample 1:
Input
Output
2
100
90
3 10
3 0


// Update the code below to solve the problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    int total_games = N/30;
        int remaining_time = N-total_games*30;
        cout << total_games << " " << remaining_time<< endl;
	}
	return 0;
}




Practice problem - Absolute function
Prev problem
Chef and Chefina both love chocolates.
Chef's parents gave you 
 
A chocolates out of a total of 
 
N chocolates.
The remaining chocolates were given to Chefina.
What was the difference between the count of chocolates received by Chef and Chefina?

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases.
Each test case contains 2 space separated integers - 
 
N and 
 
A
Output Format
For each test case, output on a new line the the difference between the count of chocolates received by Chef and Chefina.

Sample 1:
Input
Output
2
100 90
40 10
80
20
Explanation:
Test case 1: Chef received 90 Chocolates. Chefina will get 10 chocolates.
Hence the difference of the chocolates received is 80.

Test case 2: Chef received 10 Chocolates. Chefina will get 30 chocolates.
Hence the difference of the chocolates received is 20.





//Update the '_' below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,A;
	    cin >> N >> A;
	    int chef_chocolates = A;
        int chefina_chocolates = N - A;
        int diff = abs(chefina_chocolates - chef_chocolates);
        cout << diff <<endl;
	}
	return 0;
}







