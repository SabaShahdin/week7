# include<iostream>
using namespace std;

main()
{
    int sum = 0;
    for(int number = 1 ; number<=100 ; number = number +1)
    {
        sum = sum + number;
    }
    cout<<sum;
}