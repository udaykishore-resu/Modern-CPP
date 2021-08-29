#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int a=10, b=20;
    auto sum = [=]()mutable {
        a++; b++;
        return a + b;
    };
  
    cout << sum() << endl;
    return 0;
}