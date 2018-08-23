Link https://practice.geeksforgeeks.org/problems/palindromic-array/1/?track=SP-2.1
*School Problem's Submission isn't counted in score!
     
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Input:
The first line of input contains an integer denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line of input contains an integer n denoting the size of the arrays. In the second line are N space separated values of the array A[].

Output:
For each test case in a new line print the required result.

Constraints:
1<=T<=50
1<=n<=20
1<=A[]<=10000

Example:
Input:
2
5
111 222 333 444 555
3
121 131 20

Output:
1
0
{
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}
}

int PalinArray(int a[], int n)

{
    int flag=1;
    for(int g=0;g<n;g++)
    {int rev=0;
    int x=a[g];
    ;
    
    while(x>0)
    {
        rev=rev*10+x%10;
        x=x/10;
        
    }
    if(rev!=a[g])
    {
        flag=0;
        
    }
    
    }
    if(flag==0)return 0;
    else return 1;
    //add code here.
}
