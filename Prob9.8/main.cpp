#include <iostream>

using namespace std;

void swapping(int &a, int &b)
{
    int help=a;
    a=b;
    b=help;
} // swap ints
void swapping(float &x, float &y)
{
    float help=x;
    x=y;
    y=help;

} // swap floats
void swapping(const char* &c1,const char* &c2)
{
    const char* help = c1;
    c1=c2;
    c2=help;

} // swap char pointers

int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
