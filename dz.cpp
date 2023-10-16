#include <iostream>
#include <iomanip>

int main() {
    double R1, R2, R3;
    std::cout<<"Enter R1,R2,R3:";
    std::cin>>R1>>R2>>R3;
    double R0=(1/R1+1/R2+1/R3);
    std::cout<<"R0="<<std::setprecision(4)<<R0;
    return 0;
}



