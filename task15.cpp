# include<iostream>
using namespace std;
float calculatePrice(float moneyInherited , int yearWantToGo);
float leftMoney( float moneyInherited , float moneyCalculated);

main()
{
    float  moneyInherited ;
    int yearWantToGo;
    float price;
    float totalMoney;
    float moneyCalculated;
    cout<<"entre inherited money... ";
    cin>>moneyInherited;
    cout<<"entre year he want to go ....";
    cin>>yearWantToGo;
    moneyCalculated = calculatePrice(moneyInherited , yearWantToGo );
    price= leftMoney( moneyInherited , moneyCalculated);

}
float calculatePrice(float moneyInherited, int yearWantToGo)
{ 
    int age = 19;
    float moneyInEven;
    float moneyInOdd;
    float totalMoney;
    int counter = 1;
    float money;
    float moneyCalculated;
    float sum = 0;
    for(int yearEven =1800 ; yearEven <= yearWantToGo ; yearEven = yearEven + 2)
    {
        moneyInEven = counter * 12000;
        counter = counter + 1;
    }
    for(int yearOdd = 1801 ; yearOdd <= yearWantToGo ; yearOdd = yearOdd + 2)
   {
     if(yearOdd == 1801)
     {
        age = 19;
     }
     else
     {
       age = age + 2;
     }
        moneyInOdd = (50 * age) + 12000;
        sum = sum + moneyInOdd;
   }
    moneyCalculated = moneyInEven + sum;
    return moneyCalculated ;
}
float leftMoney( float moneyInherited , float moneyCalculated)
{
    float money;
    if(moneyCalculated < moneyInherited)
    {
        money = moneyInherited - moneyCalculated;
        cout<<"Yes! He will live a carefree life and will have "<<money <<" dollars left.";
    }
    if(moneyCalculated>moneyInherited)
    {
        money = moneyCalculated - moneyInherited;
        cout<< "He will need "<<money <<" dollars to survive.";
    }
}