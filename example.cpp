# include<iostream>
using namespace std;

main()
{
    string number;
    cout<<"are you happy ?"<<endl;
    cout<<"entre yes or no   ";
    cin>>number;
    while(number != "yes")
    {
        cout<<"are you happy ?";
        cin>>number;
    }
} 