// Write a function to calculate nCr, where n and r are given by the user.
#include <stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
void ncr(int n, int r)
{
    int nfact, rfact, nrfact, ncr=1;
    nfact=factorial(n);
    rfact=factorial(r);
    nrfact=factorial(n-r);
    ncr*=nfact/(rfact*nrfact);
    printf("ncr = %d",ncr);
}
void main()
{
    int n, r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    ncr(n,r);
}