#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    //first example
    int grade = 50;
    grade >=60?std::cout<<"You pass!"<<std::endl:std::cout<<"You fail!"<<std::endl;

    //second example
    int number = 8;
    number % 2?std::cout<<"ODD":std::cout<<"EVEN" <<std::endl;

    //third example
    bool hungry = false;
    hungry?std::cout<<"You are hungry"<<std::endl:std::cout<<"You are full"<<std::endl;
    //also
    std::cout<<(hungry ?"You are hungry" : "You are full");

    return 0;
}