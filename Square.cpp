//Fuctions calling other functions
#include<iostream>
using namespace std;

int square(int num)
{
    return num*num;
}

int squareanddoubled(int num)
{
    int squared = square(num);
    return 2 * squared;
}
int main()
{
    int result = squareanddoubled(10);
    cout<<"the square of 10 is " << result <<endl;
    return 0;

}
