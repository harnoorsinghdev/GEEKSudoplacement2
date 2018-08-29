Link https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1/?track=SP%20-%202.2
Replace all ‘0’ with ‘5’ in an input Integer Submissions: 4290   Accuracy: 55.25%   Difficulty: School *School Problem's Submission isn't counted in score!
        
Given a number your task is to complete the function convertFive which replace all zeros in the number with 5 and returns the number.

Input:
The first line of input contains an integer T denoting the number of test cases . Then T test cases follow . Each test case contains a single integer N denoting the number.

Output:
The output of the function will be an integer where all zero's are converted to 5 .

Constraints:
1<=T<100
1<=N<=10000

Example:
Input
2
1004
121

Ouput
1554
121
{
#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*you are required to complete this method*/
int convertFive(int n)
{
//Your code here
  int i,a,rem,sum=0;
    int base=1;
    a=n;
    while(a>0)
    {
    rem=a%10;
    if(rem==0)
    sum=sum+5*base;
    else
    sum=sum+rem*base;
    base=base*10;
    a=a/10;
        
    }
    return sum;
}
