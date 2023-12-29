#include <iostream>
//useful math related functions (cmath library https://cplusplus.com/reference/cmath)
  
int main(){
    double x=3;
    double y=4;
    double z;

    z=std::max(x,y); //maximum value

    z=std::min(x,y); //minimum value

    z=pow(2,4); //raise to power

    z=sqrt(9);  //compute square root

    z=abs(-3); //compute absolute value

    z=round(x); //round to nearest

    z=ceil(x);  //round up value

    z=floor(x); //round down value

    std::cout<<z;

    return 0;
}