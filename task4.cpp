# include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    int result;
    cout<<"entre number";
    cin>>number;
    result= digitSum(number);
    cout<<result;
}
int digitSum(int number)
{
    int counter;
    int remainder;
    int result = 0;
    while(number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        result = result  + remainder;
        counter = counter + 1;
    }
      return result;
}