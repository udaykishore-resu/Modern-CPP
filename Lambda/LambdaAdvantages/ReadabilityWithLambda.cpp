#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

const auto func(vector<int> v){
    const auto val = std::count_if(v.begin(), v.end(), 
                        [](int v) { return v > 2 && v <= 6;});
        
    return val;            
}
int main() {
    const vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout<<func(v)<<endl;
}