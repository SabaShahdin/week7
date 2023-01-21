# include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"entre number";
    cin>>number;
    printTable(number);
}
    void printTable(int number)
   {
      int y;
     for(int digit =0 ; digit<= 10 ; digit= digit +1)
   {
       y = number * digit;
      cout<<number <<" * "<<digit <<" = "<<y<<endl;
   }
   }
