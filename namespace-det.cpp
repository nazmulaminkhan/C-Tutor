#include <iostream>

namespace first{
    int x = 3;
}
namespace second{
    int x =9;
}

int main(){
    using namespace second;
    std::cout << x;

    return 0;
}