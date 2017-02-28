#include <iostream>
#include <cmath>
#include <iomanip>      // std::setprecision

int main()
{
    int n = 10;
   //  std::cin >> n;
    std::cout<<std::setprecision(100)<<std::pow(9,50)<<"\n";
        std::cout << std::tgamma(n+1) << '\n';

}