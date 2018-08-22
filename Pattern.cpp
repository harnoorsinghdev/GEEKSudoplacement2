
Your task is to complete the function printPat which takes one argument 'n' denoting the length of the pattern and prints the following pattern
for n=2 the pattern will be 
2 2 1 1
2 1
for n=3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1



    void printPat(int n)
{
    for(int s=1;s<=n;s++)
    {
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=s;j--) //to print number->n, n nuber of times
        {
            cout<<i<<" ";
        }
        
        
    }
    cout<<"$";
    }
}
