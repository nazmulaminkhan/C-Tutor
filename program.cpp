#include <iostream>

int main(){

    //These are basics examples (remember this // is a single line comment)
    /*These are basics examples and remerber this is a long paragraph comment to insert it always type this (/*)
    
    NOW READ THIS TEXT TUTORIAL
    ---------------------------
    now, these are the basic examples of c++ to print the commands, like hello world,
    1. download vscode
    2. download mingw for windows and gcc, follow this link: https://code.visualstudio.com/docs/config-mingw
    3. after downloading the c++ running extensions try the hello world basic codes

    now there the expalination of these codes:
    ------------------------------------------
    in the first line always type:  #include <iostream>
    <iostream> is a header file that contains functions for basic input and output operations
    by writing include iostream we're including that header file, then we have access to a whole bunch of useful input and output
    operations, now we'll need a main functions, the main functions is where the program begins
    for that we need to type: int main(){} we begin the program bt invoking the main function and read any code within the main
    function starting at the top and working our way down at the end of our main function, we'll want to return 0 and add a semicolon
    that's means ...
    
    */

    std::cout << "Hello World!" << std::endl; // <-- these are commad to print a sentence
    std::cout << "I love chicken" << std::endl;
    /*To add new line or end line, just add the attribute of newline or endline, these are:
    *'\n' is newline
    *std::endl is endline
    */

    // Variables
    int x; //declaration
    x=5; //assignment
    std::cout << x<< std::endl; //<-- to print your assignment, after namespace character output: display the x

    //integer (whole number)
    //int datatype can only store whole numbers
    int age = 15;
    int year = 2008;
    int days= 19.7;
    std::cout << age << std::endl;

    //to including the decimal portion, there have a different datatypes | and that is double
    //double (number including decimal)
    double product_prize = 13.88;
    double giga_network = 2.99;
    double temperature = 3.9;
    std::cout << temperature << std::endl;
    /*
    To use the decimal portion number use the datatype DOUBLE
    */

   // Now we have char datatype, which store the single character
   //SINGLE CHARACTER
   char grade = 'A';
   char initial = 'B';
   char dollarSign = '$';
   std::cout << dollarSign << std::endl;
   //remembeer the char datatypes doesn't support or store multiple characters
   //also the char datatypes don't store multiple character, because you know, it's single

   //now we will see boolean, a variable that has only two states |True or False, to create a boolean variable, type= bool
   //Boolean (true or false)
   bool student = true;
   bool power = true;
   bool sale = false;

   //the last datatypes is string; a string is technically an object that represents a sequence of text
   //it's as a char datatypes but we can store multiple characters, means more that one character
   //even whole sentences, like a name or an address
   //strings are provided from the standard namespaces
   //to declare a string we need to type: std::string and then add the variable name, like name
   //remember in this case of string, you need to type double quotes, i means these ""

   //string (objects that represent  a sequence of text)
   std::string name = "Naz";
   std::string day = "Friday";
   std::string address = "Viale dell'Appennino, n. 341, Italy";
   std::string food = "chicken like french cousine";

   std::cout << "Hi, I'm " <<name<<'\n';
   std::cout << "You're " << age << " years old" << '\n';

   //the const keyword specifies that a variable's value is constant
   //tells the compiler to prevent anything to modifying it
   //(read-only)
   const double pi = 3.14159;
   double radius = 10;
   double circumference =2*pi*radius;
   std::cout << circumference << " cm" << '\n';

   //another const example, like we have a physics calculator, or screen resolution measurement
   const int C = 300000000;
   const int width = 1890;
   const int height = 200;

   //namespace = provides a solution for preventing name conflicts in large projects. 
   //each entity needs a unique name a namespace allows for identically named entities 
   //as long as the namespcaes are different.
   //*go to the file namespace-det.cpp

   /*
   suppose we have variable x,
x = 0;
each variable needs a unique name, i could'nt create a second variavle named x and give this a different value if i were to compile and run this program we would run into an error, so each entity needs unique name but if we use namespaces, then two or more entities can share the same name, to create a namespace: let's do so outside of the main function i will type: namespace then some name for the namespace let's say first then a set of paretheses
i could create a different version of x
i'll give this a different value like 1.
well this would run a compile just fine
we can have different versions of the same variable as long as they're within a different namespace.
...
prefix the namespace let's say first then two colons,
the two colons is known as the scope resolution operator
..
the entities can have the same name as long as they're within a different namespace,
so in conclusion a namespace provides a solution for preventing name conflicts
--
typedef = reserved keyword used to create an additional name (naz)
for another data type.
new identifier for an existing type
helps with readability and reduces typos
use when there is a clear benefit
replaced with 'using'(using better w/templates)
--
arithmetic operators = return the result of a specific arithmetic
operation (+ - * /)
   */
  double students = 20;
  students/=7;
  std::cout << students<<'\n';
  // int icnlude or print only whole numbers, for example: 2,222, 2002 etc. remember without . numbers, ex: 2.22
  // to store decimal portion, use the datatype double

  //arithmatic first basic
  int guns = 500;
  guns = guns+2;
  std::cout<<guns<<'\n';

  //arithmatic clever basics
  int rocket = 600;
  rocket++; //remember this ++ means +1, only for one
  std::cout<<rocket<<std::endl;

  //arithmatic second basics
  int glass = 40;
  glass+=3;
  std::cout<<glass<<std::endl;

  //arithmatic first basic - subs
  int watches = 78;
  watches = watches+2;
  std::cout<<watches<<std::endl;

  //arithmatic second basic - subs
  int ruby = 788;
  ruby--;   //remember this -- -1, only for one
  std::cout<<ruby<<std::endl;

  //arithmatic third basics - subs
  int google_data = 9000;
  google_data-=6000;
  std::cout << google_data<<std::endl;

  //arithmatic first basics - mult
  int berry = 7;
  berry = berry*9;
  std::cout<<berry<<'\n';

  //arithmatic second basics - mult
  int internet_speed =8999;
  internet_speed*=3; //remember in the case of multiplication, the statement for only *1 is not possible
  std::cout<<internet_speed<<std::endl;

  //atirhmatic first basics - div
  int gold =9;
  gold = gold/3;
  std::cout<<gold<<std::endl;

  //arithmatic second basics - div
  int diamonds = 90;
  diamonds/=9; //remember also in the case of division, the statement for only /1 is not possible
  std::cout<<diamonds<<std::endl;

  //there are for the results printed in decimal portions
  //for that we need to use the datatype double
  double trees = 8;
  double apples = 7.8;
  trees+apples;
  std::cout<<trees+apples<<std::endl;

  double hooks = 78;
  hooks/=7;
  std::cout<<hooks<<std::endl;

  //reminder
  int remainder = guns % 2;
  std::cout<<remainder;

  //equation
  int mathresult=6+9*2/3;
  std::cout<<mathresult<<std::endl;


  //type conversion = coversion a value of one data type to another
  //implicit = automatic
  //explicit = precede value with new data type (int)
  int correct = 8;
  int questions=10;
  double score = correct/(double)questions*100;
  std::cout<<score<<"%"<<std::endl;
  
    return 0;
}