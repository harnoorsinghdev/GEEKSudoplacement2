Link:-https://practice.geeksforgeeks.org/problems/sum-of-ap-series/0/?track=SP%20-%202.3
Sum of AP series Submissions: 5348   Accuracy: 20.09%   Difficulty: School *School Problem's Submission isn't counted in score!
     
A series with same common difference is known as arithmetic series. The first term of series is 'a' and common difference is d. The series looks like a, a + d, a + 2d, a + 3d, . . . Find the sum of series.

Input : a = 1
        d = 2
        n = 4
Output : 16
1 + 3 + 5 + 7 = 16

Input : a = 2.5
        d = 1.5
        n = 20
Output : 335
Input:
The first line consists of an integer T i.e number of test cases. The first line and only line of each test case consists of three values a,d,n.

Output:
Print the sum of the series. With two decimal places.

Constraints: 
1<=T<=100
1<=a,d,n<=1000

Example:
Input:
2
1 2 4
2.5 1.5 20



#include <iostream>
using namespace std;

int main() {
	//code
	
		float a,d,n,old,sum,next;
	int t;
	cin>>t;
	cin>>a>>d>>n;
	
	while(t--)
	{
	sum=0;
	old=a;
	for(int i=1;i<n;i++)
	{
	    next=old+d;
	    sum=sum+next;
	    old=next;
	}
	cout<<sum<<endl;
	}
	return 0;
}
