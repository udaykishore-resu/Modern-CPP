#include<iostream>
using namespace std;

template<typename T>
void sampleFun(T a, T b){
    auto func = [](decltype(a) a, decltype(b) b) -> T { return a + b; };
    cout<<"res: "<<func(a,b)<<endl;
}
int main(){
    sampleFun(10,20);
    sampleFun(10.30, 20.80);
    return 0;
}