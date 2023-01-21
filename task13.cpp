# include<iostream>
using namespace std;
void prfloatPercentage (float n);
main()
{
    float n;
    cout<<"entre any number ";
    cin>>n;
    prfloatPercentage (n);
}
    void prfloatPercentage (float n)
{
    float counter2=0;
    float counter1=0;
    float counter3=0;
    float counter4=0;
    float counter5=0;
    float percentage ;
    float number;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    for( float x=1 ; x<=n ; x++) 
    {
        cin>>number;
        if(number<=200)
        {
    
         counter1 = counter1 + 1;
        }
        else if(number>200 && number<399)
        {
        counter2 = counter2 + 1;
    
        }
         else if(number>=400 && number<600)
        {
     
            counter3 = counter3 + 1;

        }
         else if(number>=600 && number<799)
        {

            counter4 = counter4 + 1;

        }
         else if(number>=800)
        {

            counter5 = counter5 + 1;
        }
    }
        percentage = (counter1 / n); 
        p1 = percentage * 100;
        cout<<p1 <<endl;
       percentage = counter2 / n;
        p2 = percentage * 100;
        cout<<p2<<endl;
        percentage = counter3 / n;
        p3 = percentage * 100;

        cout<<p3<<endl;
        percentage = counter4 / n;
        p4 = percentage * 100;
        cout<<p4<<endl;
       percentage = counter5 / n;
        p5 = percentage * 100;
        cout<<p5<<endl;
}


