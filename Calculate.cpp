#include<iostream>
using namespace std;

class Calculate
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }

    int add(int a,int b,int c)
    {
        return a+b+c;
    }

     int add(int a,int b,int c,int d)
    {
        return a+b+c+d;
    }
};

int main()
{

    Calculate cal;

    cout<<"The sum of a+b=" <<cal.add(15,15)<<"\n"<<endl;
    cout<<"The sum of a+b+c="<<cal.add(50,10,10)<<"\n"<<endl;
    cout<<"The sum of a+b+c="<<cal.add(10,25,20)<<endl;


    return 0;
}