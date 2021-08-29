#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
using namespace std;

const auto func(vector<int> v){
    using std::placeholders::_1;
    const auto val = std::count_if(v.begin(), v.end(),
                               std::bind(std::logical_and<bool>(),
                               std::bind(std::greater<int>(),_1, 2),
                               std::bind(std::less_equal<int>(),_1,6)));
        
    return val;                                        
}
int main() {
    const vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout<<func(v)<<endl;
}