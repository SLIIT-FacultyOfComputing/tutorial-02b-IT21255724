/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  
  cout<<"Enter a value for n ";
  cin>>n;
  
  cout<<"Enter a value for r ";
  cin>>r;
  
  cout<<"nCr = "<<nCr<<endl;

  return 0;
}

long Factorial(int no)
{
  int n, r, i;
  int fac_n = 1;
  int fac_r = 1;
  int fac_n_minus_r = 1;
  
  for(n = i; i>=1; i--)
  {
    fac_n = fac_n * i;
  }
  return fac_r;
  
  for(r = i; i>=1; i--)
  {
    fac_r = fac_r * i;
  }
  return fac_r;

  for((n-r) = i; i>=1; i--)
  {
    fac_n_minus_r = fac_n_minus_r * i;
  }
  return fac_n_minus_r;
  
}

long nCr(int n, int r)
{
  int nCr

  nCr = (fac_n)/(fac_r)*(fac_n_minus_r);

  return nCr;
}
