#include <iostream>
# include<cmath>
using namespace std;
int calculateGCD(int a , int b);
int calculateLCM(int a , int b , int gcd);
main()
{ int a;
  int b;
  int gcd;
  int lcm;
   cout<<"entre a...";
   cin>>a;
   cout<<"entre b...";
   cin>>b;
   gcd = calculateGCD(a , b);
   cout<<"gcd of numbers are..."<<gcd<<endl;
   lcm = calculateLCM(a , b , gcd);
   cout<<"lcm of number are...."<<lcm<<endl;
}
 int calculateGCD(int a , int b)
{
    int counter =1;
    int answer;
    while(a>=counter && b>=counter)
    {
        if(a % counter == 0 && b % counter == 0)
        {
            answer = counter;
        }
        counter = counter+1;
    }
    return answer;
}
int calculateLCM(int a , int b , int gcd)
{
    int result ;
    result  = (a * b) / gcd;
    return result;
}

