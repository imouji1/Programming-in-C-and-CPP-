#include <iostream>

using namespace std;
float abs (float x)//defining the function
{
    if (x>=0)//checking whether it is bigger than zero
    {
        return x;
    }
    if(x<0)
    {
        return -x;//since it is smaller, we will multiply by -1
    }
    return 0;
}
int main()
{
    float x;//declaring the variables
    cin>>x;
    cout<<abs(x)<<endl;//recalling the function and printiing the result

    return 0;
}
