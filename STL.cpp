#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int increase(int x){
    return x + 1;
}
int main(){
    #if __cplusplus == 201402L
    std::cout << "C++14" << std::endl;
  #elif __cplusplus==201103L
    std::cout << "C++11" << std::endl;
  #else
    std::cout << "C++" << std::endl;
  #endif
    return 0;
}