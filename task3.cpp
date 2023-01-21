# include<iostream>
using namespace std;
int frequencyCheck(int number , int digit);
main()
{
    int number;
    int digit;
    int result;
    cout<<"entre number";
    cin>>number;
    cout<<"Number of digit ";
    cin>>digit;
    result= frequencyCheck(number , digit);
    cout<<result;
}
int frequencyCheck(int number , int digit)
{
    int counter = 0;
    int remainder;
    while(number >0)
    {
        remainder  = number % 10;
         number = number / 10;
        if(remainder == digit)
        {
              counter++; 
        }
    }
    return counter;
} 