//functions in c++

#include<iostream>
using namespace std;

int checktemperature(int temperature)
{
    return temperature;

    void servechai(int cup);//declaration of function
}

void servechai(int cup) //defination of function 
{
    cout<<"serving "<<cup<<" cup of tea"<<endl;
}

int main()
{
    int temp = checktemperature(70);
    cout<<temp<<endl;
    
    servechai(10);  //calling of function
    return 0;
}