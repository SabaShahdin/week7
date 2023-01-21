# include<iostream>
using namespace std;

main()
{
    int x;
    cout<<"entre a number..";
    cin>>x;
    int num1 =0;
    int num2= 1;
    cout<<num1 <<" , ";
    cout<<num2 <<" , ";
    int next;
    for(int count =1 ; count<= x-2 ; count = count+1)
    {
       next = num1 + num2;
       cout<<next <<" , ";
       num1 = num2;
       num2 = next;
    }
}