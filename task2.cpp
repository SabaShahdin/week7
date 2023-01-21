 # include<iostream>
 using namespace std;
  int totalDigits(int number);
  main()
  {
    int number;
    int result;
    cout<<"entre number";
    cin>>number;
    result = totalDigits( number);
    cout<<result;
  }

 int totalDigits(int number)
 {
   int counter = 0;
   while(number > 0)
   {
    number = number / 10;
    counter = counter+1;
   }
   return counter;
    
 }