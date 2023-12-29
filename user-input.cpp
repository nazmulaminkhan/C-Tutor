#include <iostream>
#include <string>

//cout << (insertion operator)
// cin >> (extraction operator)

 int main (){
    std::string name;
    int age;
    std::string location;
    std::cout<<"Well, what's your age?: ";
    std::cin>>age;
    
    std::cout <<"What's your full name?: ";
    std::getline(std::cin>>std::ws, name);


    std::cout<<"Where are you from?: ";
    std::cin>>location;

    std::cout<<"Hello "<<name<<'\n';
    std::cout<<"Ok, that's mean You are "<<age<<" years old"<<std::endl;
    std::cout<<"And you live in "<<location<<std::endl;

    return 0;
 }