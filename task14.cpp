# include<iostream>
using namespace std;
float calculateMoney(float age, float priceOfWashingMachine, float priceOfToy);
float priceLeft(float totalPrice , float priceOfWashingMachine);
main()
{
    float age;
    float priceOfWashingMachine;
    float priceOfToy;
    float price;
    float totalPrice;
    cout<<"entre lily age..";
    cin>>age;
    cout<<"entre price of washing machine...";
    cin>>priceOfWashingMachine;
    cout<<"entre price of one toy...";
    cin>>priceOfToy;
    totalPrice =   price =  calculateMoney(age, priceOfWashingMachine,  priceOfToy);
    if(totalPrice > priceOfWashingMachine)
   { 
    price =  priceLeft( totalPrice , priceOfWashingMachine);
    cout<<" yes !"<<price;
   }
   else  if(totalPrice <  priceOfWashingMachine)
    {
      price =  priceLeft( totalPrice , priceOfWashingMachine);
    cout<<" no !" <<price;  
    }
}

float calculateMoney(float age, float priceOfWashingMachine, float priceOfToy)
{ 
     float totalPrice;
     float totalPriceOfToys;
     float brotherTook;
     float priceMoney;
     float counter = 0 ;
     float counter2 = 0;
    float priceMoneyOfOneYear;
    float priceMoneyOfAgeYears;
    float sum = 0;
    for(int year = 1 ; year<=age ; year = year + 1)
    {
        if(year % 2 != 0)
        {
           counter = counter + 1;
        } 
    }
    for(int years = 2 ; years<= age ; years = years+ 2)
    {
        if(years% 2 == 0)
        {
             counter2 = counter2 + 1;
             priceMoneyOfOneYear = 10;
             priceMoneyOfAgeYears = priceMoneyOfOneYear  * counter2;
        }
          sum = sum + priceMoneyOfAgeYears;
    }
     totalPriceOfToys = priceOfToy * counter;
    brotherTook = sum - counter2;
    totalPrice = totalPriceOfToys + brotherTook;
    return totalPrice;
}
    float priceLeft(float totalPrice , float priceOfWashingMachine)
    {
        float priceAfterMachine;
    if(totalPrice > priceOfWashingMachine)
    {
    priceAfterMachine = totalPrice - priceOfWashingMachine;
    }
    else if(totalPrice < priceOfWashingMachine)
    {
        priceAfterMachine = priceOfWashingMachine - totalPrice;
    }
    return priceAfterMachine;
    }