Water Filling
Difficulty Rating541
Expand
Prev
Next
Problem
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

You are given three integers - 
 
1
,
 
2
,
B 
1
​
 ,B 
2
​
 , and 
 
3
B 
3
​
 .
If 
 
1
=
1
B 
1
​
 =1, it means that the first bottle is full.
If 
 
1
=
0
B 
1
​
 =0, it means that the first bottle is empty.
Similarly, 
 
2
B 
2
​
  denotes whether the second bottle is full or empty, and 
 
3
B 
3
​
  denotes it for the third bottle.

Output Water filling time, if Chef has to fill the bottles now. If not, output Not now.

Input Format
The first line of input will contain a single integer 
 
T, denoting the number of test cases.
The only line of each test case contains three space-separated integers, 
 
1
,
 
2
,
 
3
B 
1
​
 ,B 
2
​
 ,B 
3
​
 .
Output Format
For each test case, output on a new line, either Water filling time, or Not now.

Constraints
1
≤
 
≤
1000
1≤T≤1000
 
 
B 
i
​
  is either 
0
0 or 
1
1
Sample 1
Input
Output
5
0 0 0
1 1 1
1 1 0
0 1 0
0 1 1
Water filling time
Not now
Not now
Water filling time
Not now
Explanation
Testcase 1 The inputs are 
0
,
0
,
0
0,0,0. So all three bottles are empty. Since at least two bottles are empty, it is Water filling time.

Testcase 2 The inputs are 
1
,
1
,
1
1,1,1. So all three bottles are full. Since it is not the case that at least two bottles are empty, it is Not now.

Testcase 3 The inputs are 
1
,
1
,
0
1,1,0. So only one bottle is empty. Since it is not the case that at least two bottles are empty, it is Not now.

Testcase 4 The inputs are 
0
,
1
,
0
0,1,0. So two bottles are empty. Since at least two bottles are empty, it is Water filling time.

Testcase 5 The inputs are 
0
,
1
,
1
0,1,1. So only one bottle is empty. Since it is not the case that at least two bottles are empty, it is Not now.