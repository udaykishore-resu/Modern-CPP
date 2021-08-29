#include<iostream>
using namespace std;

int main() 
{
    []() noexcept { throw 5; }();
    return 0;
}