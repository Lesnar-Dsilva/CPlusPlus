#include <iostream>
#include <cmath>

// TYPEDEF
// #include <vector>
// typedef std::vector<std::pair<std::string,int>> pairlist_t;

// typedef std::string text_t;
// using text_t = std::string;

// typedef int number_t;
// using number_t = int;

// NAMESPACE
// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }

// FUNCTION = a block of reuable code
// void happyBirthday(std::string name,int age);
// std::string concastString(std::string string1, std::string string2);
// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1,std::string topping2);
// int myNum = 3;
// void printNum();
// double getTotal(double prices[],int size);
// int searchArray(std::string array[], int size, std::string element);
// void sort(int array[],int size);
// void swap(std::string &x, std::string &y);
// void printInfo(const std::string &name, const int &age);
// int factorial(int num);

//TEMPLATE PARAMETER DECLERATION
// template<typename T,typename U>
// //This function will now accept any data type, but both parameters have to be the same data type provided as arguements, unless you add another "typename" to the template decleration
// //The auto keyword allows the compiler to choose the appropriate return data type.
// auto max(T x,U y){
//     return (x > y)? x:y;
// }
// struct student{
//     std::string name;
//     double gpa;
//     //You can set a default value.
//     bool enrolled = true;
// };
// struct Car{
//     std::string model;
//     int year;
//     std::string color;
// };
// void printCar(Car &car);
// void paintCar(Car &car, std::string color);
//IF INT VALUES ARE NOT ASSIGNED TO ANY OF THE VALUES THEN THEY ARE AUTOMATICALLY ASSGINED 0-∞ INTEGER VALUES
// enum Day{sunday = 0,monday = 1,tuesday = 2,wednesday = 3,thursday = 4,friday = 5,saturday = 6};
// class Human{
//     public:
//         //THESE ARE DEFAULT VALUES, ONLY USED WHEN NO VALUES ARE ASSIGNED WHEN A NEW OBJECT IS CREATED.
//         std::string name = "Rick";
//         std::string occupation = "Scientist";
//         int age = 70;
//     //A METHOD IS A FUNCTION THAT BELONGS TO A CLASS
//         void eat(){
//             std::cout<<"This person is eating\n";
//         }
//         void drink(){
//             std::cout<<"This person is drinking\n";
//         }
//         void sleep(){
//             std::cout<<"This person is sleeping\n";
//         }
// };
// class Car{
//     public:
//     std::string make;
//     std::string model;
//     int year;
//     std::string color;

//     void accelerate(){
//         std::cout<<"You step on the gas!\n";
//     }
//     void brake(){
//         std::cout<<"You step on the brakes\n";
//     }
// };
// class Student{
//     public:
//     std::string name;
//     int age;
//     double gpa;

//     //Constructor has the same name as the class.
//     Student(std::string name, int age, double gpa){
//     //Use the this keyword to assign values from the constructor to the class attributes
//         this->name = name;
//         this->age = age;
//         this->gpa = gpa;
//     //WARNING: IF parameter name is different from the class attribute, there is no need to use the "this" keyword.
//         // name = x;
//         // age = y;
//         // gpa = z;
//     }
// };
// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;
//     Car(std::string make,std::string model,int year,std::string color){
//         this->make = make;
//         this->model = model;
//         this->year = year;
//         this->color = color;
//     }
// };

// class Pizza{
//     public:
//         std::string topping1;
//         std::string topping2;
//     //Constructor for empty parameters
//     Pizza(){}
//     //Constructors
//     Pizza(std::string topping1){
//         this->topping1 = topping1;
//     }
//     Pizza(std::string topping1,std::string topping2){
//         this->topping1 = topping1;
//         this->topping2 = topping2;
//     }
// };
// class Stove{
//     //PUBLIC = a public access modifier allows a objects attributes to be changed.
//     //PRIVATE = a private access modifier does not allow for attributes of an object to be changed.
//     private:
//         int temperature = 0;
//     public:
//         Stove(int temperature){
//             setTemperature(temperature);
//         }
//         int getTemperature(){
//             return temperature;
//         }
//         void setTemperature(int temperature){
//             if(temperature < 0){
//                 this->temperature = 0;    
//             }else if(temperature >= 10){
//                 this->temperature = 10;
//             }else{
//                 this->temperature = temperature;
//             }
//         }
// };
// class Animal{
//     public:
//         bool alive = true;
//         void eat(){
//             std::cout<<"This animal is eating.\n";
//         }
// };
// //class[CLASS NAME]:public[CLASS NAME OF CLASS TO INHERIT ATTRIBUTES/METHODS FROM]
// class Dog:public Animal{
//     public:
//         void bark(){
//             std::cout<<"The dog goes woof!\n";
//         }
// };
// class Cat:public Animal{
//     public:
//         void meow(){
//             std::cout<<"The cat does meow!\n";
//         }
// };
// class Shape{
//     public:
//         double area;
//         double volume;
// };
// class Cube:public Shape{
//     public:
//         double side;
//         Cube(double side){
//             this->side = side;
//             this->area = side*side*6;
//             this->volume = side*side*side;
//         }
// };
// class Sphere:public Shape{
//     public:
//         double radius;
//         Sphere(double radius){
//             this->radius = radius;
//             this->area = 4*3.14159*(radius*radius);
//             this->volume = (4/3.0)*3.14159*(radius*radius*radius);
//         }
// };
int main(){
    //This is a comment.

    /*
        This is a multi-line comment.
    */

    // //std = standard.
    // //cout = character + out = output.
    // //<< displays stream of characters after it.
    // //\n OR endl creates a new line.
    // std::cout << "I like pizza!"<< '\n';
    // std::cout<<"It's really good!"<< '\n';

    // //int (whole numbers)
    // //int x; // declaration
    // //x = 5;  //assignment
    // //int sum = x + y;
    // int age = 21;
    // int year = 2023;
    // int days = 7.5;
    // std::cout << days << '\n';//The decimal portion is truncated because the variable only stores whole numbers

    // //double (number including decimal)
    // double price = 10.99;
    // double gpa = 2.5;
    // double temperature = 25.1;
    // std::cout<<price << '\n';

    // //char (single character)
    // char grade = 'A';
    // char initial = 'C';
    // char currency = '$';
    // std::cout<<initial << '\n';

    // //boolean (true or false)
    // bool student = false;
    // bool power = true;
    // bool forSale = false;
    // std::cout<<power << '\n';

    // //string (an object that represents a sequence of text)
    // std::string name = "Bro";
    // std::string day = "Friday";
    // std::string food = "pizza";
    // std::string address = "123 Fake Street.";
    // std::cout<<"Hello "<<name << '\n';// spacing needs to be taken into account
    // std::cout<<"You are "<<age << " years old"<<'\n';

    // // The const keyword specifics that a variable's value is constant.
    // //Telling the compiler to prevent anything from modifying it.
    // //(read-only)
    // const double PI = 3.14159;
    // const int LIGHT_SPEED = 299792458;
    // const int WIDTH = 1920;
    // const int HEIGHT = 1080;
    // double radius = 10;
    // double circumference = 2 * PI * radius;
    // std::cout<<circumference<<" cm"<<'\n';

    //Namespace = provides a solution for preventing name conflicts
    //  in large projects. Eacg entity needs a unique name.
    //  A namespace allows for identically named entities
    //  as long as the namespaces are different
    
    //using namespace first;
    //removes the need to use the scope resolution operator

    //int x = 0;
    //scope resolution operator(::)
    //std::cout<< x;// without specifiying the name, the local scope entity will be used.
    
    //using namespace std;// this can create naming conflicts due to identically named entities in the std class

    // using std::cout;// removes the need to type std::cout each time.
    // cout<<"Hello";

    // using std::string;// removes the need to type std::string to crteate a string variable
    // string name = "Bro";

    // typedef = reserved keywords used to create an additional n ame
    //  (alias) for another data type.
    //  New identifier for an existing type
    //  Helps with readability and reduces typos
    //  Replaced with 'using' (works better w/ templates)

    // pairlist_t pairlist;
    // text_t firstName = "Bro";
    // number_t age = 21;
    // std::cout<<firstName<<'\n';
    // std::cout<<age<<'\n';

    // arithmetic operator = return the result of a specific
    // arithmetic operation(+ - * /)

    //PEMDAS order of operations(left to right)

    //int students = 20;
    //students = students+1;
    //students+=2;
    //students++;// Adds only 1

    //students = students - 1;
    //students-=2;
    //students--;

    //students = students*2;
    //students*=2;

    //students = students/2;
    //students/=2;

    //int remainder = students%3;// remainder of any division

    //std::cout<<remainder;

    // type conversion =  converion of a value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type (int) x

    //double x = (int)3.14;
    //char x = 100;
    //std::cout<<(char)100; // a char variable containing a number will be converted to a ascii character whose decimal value is the value stored.

    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions*100;

    // std::cout<<score<<"%";


    // USER INPUT

    // cout << (insertion operator)
    // cin >> (extraction operator)

    // std::string name;
    // int age;
    
    // std::cout<<"What's your age?: ";
    // //store input in a variable using std::cin>>x.
    // std::cin>>age;

    // std::cout<<"What's your full name?: ";
    // //if the input can contain white space use std::getline().
    // //std::ws removes any white spaces before or after the input, having a std::cin before a std::getline() can cause issues because it accepts the newline character and skips the user input.
    // std::getline(std::cin,name);

    // std::cout<<"Hello "+name<<'\n';
    // std::cout<<"You are "<<age<<" years old";

    // double x = 3.14;
    // double y = 4;
    // double z;

    // //z = std::max(x,y); // returns the highest number.
    // //z = std::min(x,y); // returns the lowest number.

    // <WARNING: use #include <cmath> before main()>

    // //z = pow(2,3); // returns the former raised to the power of the latter.
    // //z = sqrt(9); // returns the square root of a number.
    // //z = abs(-3); // returns the positive positive form of a negative number (how far it is from 0).
    // //z = round(x); // returns the value rounded to the nearest integer.
    // //z = ceil(x); // always returns the value rounded up.
    // z = floor(x); // awlways returns the value rounded down.
    // std::cout<<z;

    // <WARNING: use #include <cmath> before main()>


    //PRACTICE PROJECT - HYPOTENUSE (a^2 + b^2 = √c)
    // double a;
    // double b;
    // double c;
    
    // std::cout<< "Enter side  A:";
    // std::cin>>a;
    // std::cout<<"Enter side B: ";
    // std::cin>>b;

    // //a = pow(a,2);
    // //b = pow(b,2);
    // //c = sqrt(a+b); 
    // c = sqrt(pow(a,2)+pow(b,2));

    // std::cout<<"side C: "<<c;

    // IF statements = do something if a condition is true.
    // if not, then don't do it.

    // int age;
    // std::cout<<"Enter your age: ";
    // std::cin>>age;

    // //COMPARISON OPERATORS (compare two values)
    // // >    GREATER THAN
    // // <    LESS THAN
    // // ==   EQUAL TO
    // // >=   GREATER THAN OR EQUAL TO
    // // <=   LESS THAN OR EQUAL TO

    // //WARNING: ORDER OF CONDITIONS MATTERS!
    // if( age >= 100 ){
    //     std::cout<<"You are too old to enter this site!";
    // }else if(age < 0){
    //     std::cout<<"You haven't been born yet!";
    // }else if( age >= 18){
    //     std::cout<<"Welcome to the site!";
    // }
    // else{
    //     std::cout<<"You are not old enough to enter!";
    // }

    // SWTICH = alternative to using many "else if" statements
    // compare one value against matching cases

    // char grade;
    // std::cout<<"What letter grade?: ";
    // std::cin>>grade;

    // switch(grade){
    //     case 'A':
    //     std::cout<<"You did great!";
    //     break;
    //     case 'B':
    //     std::cout<<"You did good";
    //     break;
    //     case 'C':
    //     std::cout<<"You did okay";
    //     break;
    //     case 'D':
    //     std::cout<<"You did not do good";
    //     break;
    //     case 'F':
    //     std::cout<<"You FAILED!";
    //     default:
    //     std::cout<<"Please only enter in a letter grade (A-F).";
    //     break;
    // }

    // SWITCH CASE CALULATOR PROGRAM

    // char op;
    // double num1;
    // double num2;
    // double result;

    // std::cout<<"****************** CALCULATOR ******************\n";

    // std::cout<<"Enter either (+ - * /): ";
    // std::cin>>op;
    
    // std::cout<<"Enter #1: ";
    // std::cin>>num1;

    // std::cout<<"Enter #2: ";
    // std::cin>>num2;

    // switch(op){
    //     case '+':
    //     result = num1+num2;
    //     std::cout<<"result: "<< result<< '\n';
    //     break;
    //     case '-':
    //     result = num1-num2;
    //     std::cout<<"result: "<< result<< '\n';
    //     break;
    //     case '*':
    //     result = num1*num2;
    //     std::cout<<"result: "<< result<< '\n';
    //     break;
    //     case '/':
    //     result = num1/num2;
    //     std::cout<<"result: "<< result<< '\n';
    //     break;
    //     default:
    //     std::cout<<"That wasn't a valid operator.\n";
    // }

    // std::cout<<"************************************************";

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    // bool hungry = true;

    // // hungry?std::cout<<"You are hungry.":std::cout<<"You are full.";
    // std::cout<<(hungry ? "You are hungry":"You are full");

    //LOGICAL OPERATORS

    //&& = check if two conditions are true.
    // || = check if at least one of the two conditions is true.
    // ! = reverse the logical state of its oeprand.

    // int temp;
    // bool sunny = false;
    // std::cout<<"Enter the temperature: ";
    // std::cin>>temp;

    // // if(temp > 0 && temp << 30){
    // //     std::cout<<"The temperature is good!";
    // // }else{
    // //     std::cout<<"The temperature is bad!";
    // // }
    // if(temp <= 0 || temp >= 30){
    //     std::cout<<"The temperature is bad!\n";
    // }else{
    //     std::cout<<"The temperature is good!\n";
    // }

    // // boolean variables (1 in int variables works as well) don't need to use the equal to operator because the code block will run if they are true.
    // // the same applies to the NOT operator preceding a varaible,this will run if the value is opposite of true.
    // if(!sunny){
    //     std::cout<<"It is cloudy outside!";
    // }else{
    //     std::cout<<"It is sunny outside!";
    // }

    //TEMPERATURE CONVERSION PROJECT

    // double temp;
    // char unit;
    
    // std::cout<<"********* Temperature Conversion *********\n";
    
    // std::cout<<"F= Fahrenheit\n";
    // std::cout<<"C = Celcius\n";
    // std::cout<<"What unit would you like to convert to: ";
    // std::cin>>unit;

    // if(unit == 'F' || unit == 'f'){
    //     std::cout<<"Enter temperature in Celcius: ";
    //     std::cin>>temp;

    //     temp = (1.8*temp) + 32;
    //     std::cout<<"Temperature is: "<<temp<<"F\n";
    // }else if(unit == 'C' || unit == 'c'){
    //     std::cout<<"Enter temperature in Fahrenheit: ";
    //     std::cin>>temp;

    //     temp = (temp-32)/1.8;
    //     std::cout<<"Temperature is: "<<temp<<"C\n";
    // }else{
    //     std::cout<<"Please enter in only C or F\n";
    // }

    // std::cout<<"******************************************\n";

    //String methods

    // std::string name;
    // std::cout<<"Enter your name: ";
    // std::getline(std::cin,name);

    //number of characters in a string.
    // if(name.length() > 12){
    //     std::cout<<"Your name can't be over 12 characters";
    // }else{
    //     std::cout<<"Welcome "<<name;
    // }
    
    //returns a boolean value on whether the string is empty or not.
    // if(name.empty()){
    //     std::cout<<"You didn't enter your name";
    // }else{
    //     std::cout<<"Hello "<<name;
    // }

    //clears the string varaible.
    // name.clear();
    // std::cout<<"Hello "<<name;

    //appends a sequence of characters to a string.
    // name.append("@gmail.com");
    // std::cout<<"Your username is now "<<name;

    //returns the character at a specific index position in the string
    // std::cout<<name.at(1);

    //inserts a string at a specific positon, but doesn't overwrite any characters;
    // name.insert(0, "@");
    // std::cout<<name;

    //returns the position of the first occurance of a character
    // std::cout<<name.find(' ');

    //removes a specific sequence in the string using indexes, the first number is inclusive while the second number is exclusive(not included in removal).
    // name.erase(0,3);
    // std::cout<<name;

    //WHILE LOOPS = code block repeats based on condition(run until condition false)

    // std::string name;

    // while(name.empty()){
    //     std::cout<<"Enter your name: ";
    //     std::getline(std::cin,name);
    // }

    // std::cout<<"Hello "<<name;

    //DO WHILE LOOPS = does some block of code THEN repeats again if condition is true.

    // int number;// an empty int variable contains the value of 0.

    // do{
    //     std::cout<<"Enter a positive #: ";
    //     std::cin>>number;
    // }while(number < 0); // the condition is only tested once the do block of code has run.
    // std::cout<<"The # is: "<<number;

    //FOR LOOPS = repeats a code block a specified number of times.

    // for(int i = 10; i >= 0; i-=2){  
    //     std::cout<<i<<'\n' ;
    // }
    // std::cout<<"HAPPY NEW YEAR!\n";

    //break = break out of a loop
    //continue = skip current iteration

    // for(int i = 1; i <= 20; i++){
    //     if(i == 13){
    //         continue;
    //     }
    //     std::cout<<i<<'\n';
    // }

    //NESTED LOOPS =  a loop  inside of a loop.

    // loop(){
    //     loop(){}
    // }
    // int rows;
    // int columns;
    // char symbol;
    // std::cout<<"How many rows?: ";
    // std::cin>>rows;
    // std::cout<<"How many columns?: ";
    // std::cin>>columns;
    // std::cout<<"Enter a symbols to use: ";
    // std::cin>>symbol;
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= columns; j++){
    //         std::cout<<symbol;
    //     }
    //     std::cout<<"\n";
    // }

    //psuedo-random = not truly random (but close)

    //srand() is necessary to use rand(), an unsigned seed(int) such as time() can be used.
    // srand(time(NULL));

    // // use rand() and modulus(%) with the range of numbers you want(e.g. 6 values in total(0-5 generated)).
    // int num1 = (rand()%6)+1;
    // int num2 = (rand()%6)+1;
    // int num3 = (rand()%6)+1;

    // std::cout<<num1<<'\n';
    // std::cout<<num2<<'\n';
    // std::cout<<num3<<'\n';

    //RANDOM EVENT GENERATOR

    // srand(time(0));

    // int randNum = rand()%5+1;
    //
    //WARNING: WIHTOUT A BREAK STATEMENT YOU'LL FALL THROUGH THE SWITCH STATEMENT
    // switch(randNum){
    //     case 1:
    //         std::cout<<"You win a bumper sticker!\n";
    //         break;
    //     case 2:
    //         std::cout<<"You win a t-shirt!\n";
    //         break;
    //     case 3:
    //         std::cout<<"You win a free lunch!\n";
    //         break;
    //     case 4:
    //         std::cout<<"You win a gift card!\n";
    //         break;
    //     case 5:
    //         std::cout<<"You win concert tickets!\n";
    //         break;
    // }

    //NUMBER GUESSING GAME

    // int num;
    // int guess;
    // int tries;

    // srand(time(NULL));
    // num = rand()%100+1;

    // std::cout<<"***************** NUMBER GUESSING GAME *****************\n";
    // do{
    //     std::cout<<"Enter a guess between (1-100): ";
    //     std::cin>>guess;
    //     tries++;
    //     if(guess > num){
    //         std::cout<<"Too high!\n";
    //     }else if(guess < num){
    //         std::cout<<"Too low!\n";
    //     }else{
    //         std::cout<<"Correct! # of tries: "<<tries<<'\n';
    //     }
    // }while(guess != num);
    // std::cout<<"********************************************************************\n";

    // FUNCTION = a block of reusable code

    // to define a function after the main() function, declare it before the main() function with a return type and name with parentheses.
    //data given to a function is an arguement, the arguement is a response to the parameter required for the function to run.
    //WARNING: IF YOU DECLARED THE FUNCTION BEFORE THE main() FUNCTION, YOU'LL NEED TO ADD THE PARAMETER TO THE DECLERATION AND DEFINITION OF THE FUNCTION
    //the parameter doesn't have to have the same name as the variable provided as an arguement.

    // std::string name = "Bro";
    // int age = 21;

    // happyBirthday(name,age);
    // happyBirthday(name,age);
    // happyBirthday(name,age);

    //return = return a value back to the spot where you called the encompasing function
    //WARNING: A FUNCTION CANNOT HAVE A VOID RETURN TYPE IF THE RETURN KEYWORD IS USED.
    // std::string firstName = "Bro";
    // std::string lastName = "Code";
    // std::string fullName = concastString(firstName,lastName);
    // std::cout<<"Hello "<<fullName;

    //OVERLOADED FUNCTIONS = it is valid for different functions to share the same name, but different parameters are required, because the function name and parameters create a signature, there can be no duplicate signatures.
    //WARNING: EACH OVERLOADED FUNCTION NEEDS TO BE DECLARED AND INITIZALIZED.
    // bakePizza("pepperoni","mozerella");

    //VARAIBLE SCOPE
    //Local variables = decalred inside a function or block {}.
    //Global variables = declared outside of all functions.

    //Functions cannot see inside other functions, hence parameters are necessary.
    //It is legal to use to have a variable of the same name inside of another function.
    //A function will use local varaible before any global variables.

    // int myNum = 1;
    // printNum();
    // //PRECEDING A VARIABLE WITH (::) will the access to a global scope.
    // std::cout<<::myNum<<'\n';

    //ARRAYS =  a data structure that can hold multiple values, values that can be accessed by an index number, "kind of like a variable that holds multiple values".

    //The index of the first value is 0.
    //Values MUST BE ONLY of the same data type.

    //You can simply declare an array and then assign values. BUT A SIZE MUST BE SPECIFIED.
    // std::string car[3];

    // std::string car[]  = {"Corvette","Mustang","Camry"};

    //Re-assign values
    // car[0] = "Camaro";
    // car[1] = "Mustang";
    // car[2] = "Camry";

    // std::cout<<car[0]<<'\n';
    // std::cout<<car[1]<<'\n';
    // std::cout<<car[2]<<'\n';

    // double prices[] = {5.00,7.50,9.99,15.00};
    // std::cout<<prices[0]<<'\n';
    // std::cout<<prices[1]<<'\n';
    // std::cout<<prices[2]<<'\n';
    // std::cout<<prices[3]<<'\n';
    
    //sizeof() = determines the size in bytes of a: varaible,data type, class, objects, etc.

    // std::string name = "Bro Code is awesome";
    // double gpa = 2.5;
    // char grade = 'F'; // 1 byte
    // bool student = true; // 1 byte
    // char grades[] = {'A','B','C','D','E','F'}; // 1+1+1+1+1 = 5 bytes each char is 1 byte and the array has a length of 5 char values hence 5 bytes.
    // std::string students[] = {"Spongebob","Patrick","Squidward","Sandy"};

    // // For string the size returned is the size of the memory address, a string is a reference data type.
    
    // //Calculate length of array
    // std::cout<<sizeof(students)/sizeof(std::string)<<" elements\n";

    //ITERATE OVER AN ARRAY

    // std::string students[] = {"Spongebob","Patrick","Squidward","Sandy"};

    // char grades[] = {'A','B','C','D','F'};

    // for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
    //     std::cout<<grades[i]<<'\n';
    // }

    // FOREACH LOOP = loop that eases the traversal over an iterable data set.

    // std::string students[] = {"Spongebob","Patrick","Squidward","Sandy"};

    // int grades[] = {65,72,81,93};

    // //for([data type]  [name for temporary variable that stores the element] : [array to iterate over])
    // for(int grade : grades){
    //     std::cout<<grade<<'\n';
    // }

    //PASS AN ARRAY AS AN ARGUEMENT INTO AN ARRAY

    // double prices[] = {49.99,15.05,75,9.99};
    // int size = sizeof(prices)/sizeof(prices[0]);
    // double total = getTotal(prices,size);
    // std::cout<<"$"<<total;

    //SEARCH FOR AN ELEMENT IN AN ARRAY

    // std::string foods[] = {"pizza","hamburger","hotdog"};
    // int size = sizeof(foods)/sizeof(foods[0]);
    // int index;
    // std::string myFood;
    // std::cout<<"Enter element to search for: "<<'\n';
    // std::getline(std::cin,myFood);
    // index = searchArray(foods,size,myFood);
    // if(index != -1){
    //     std::cout<<myFood<<" is at index "<<index;
    // }else{
    //     std::cout<<myFood<<" is not in the array.";
    // }

    //SORT AN ARRAY = bubble sort

    // int array[] = {10,1,9,2,8,3,7,4,6,5};
    // int size = sizeof(array)/sizeof(array[0]);
    
    // sort(array,size);

    // for(int element : array){
    //     std::cout<<element<<" ";
    // }

    //fill() = Fills a range of elements with a specified values fill(begin,end,value);

    // const int size = 99;
    // std::string foods[size];
    // fill(foods,foods+(size/3),"pizza");
    // fill(foods+(size/3),foods+(size/3*2),"hamburger");
    // fill(foods+(size/3)*2,foods+size,"hotdogs");

    // for(std::string food: foods){
    //     std::cout<<food<<'\n';
    // }

    //ACCEPT USER INPUT FOR ARRAY

    // std::string foods[5];

    // int size = sizeof(foods)/sizeof(foods[0]);

    // std::string temp;

    // for(int i = 0; i < size; i++){

    //     std::cout<<"Enter a food use like or 'q' to quit #"<<i+1<<": ";
    //     std::getline(std::cin,temp);
    //     if(temp == "q"){
    //         break;
    //     }else{
    //         foods[i] = temp;
    //     }
    // }

    // std::cout<<"You like the following food\n";

    // for(int i = 0; !foods[i].empty(); i++){
    //     std::cout<<foods[i]<<'\n';
    // }

    //MULTIDIMENSIONAL ARRAYS = can represents grid or matrices of data.

    //IF YOUR ONLY DECLARING A MULTIDIMENSIONAL ARRAY THEN ROW AND COLUMNS ARE REQUIRED, OTHERWISE FOR DECLERATION AND INITIALIZATION ONLY COLUMNS ARE REQUIRED
    // std::string cars[][3] = {{"Mustang","Escape","F-150"},{"Corvette","Equinox","Silverado"},{"Challenger","Durango","Ram 1500"}};

    // //TO ACCESS AN ELEMENT IN A MULTIDIMENSIONAL ARRAY YOU HAVE TO USE TWO SQUARE BRACKETS, THE FIRST IS FOR THE ROW AND THE SECOND IS FOR THE COLUMN.
    // int rows = sizeof(cars)/sizeof(cars[0]);
    // int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < columns; j++){
    //         std::cout<<cars[i][j]<<" ";
    //     }
    //     std::cout<<'\n';
    // }

    //MEMORY ADDRESS = a location in memory where data is stored, a memory address can be accessed with "&" (address-of-operator).

    // std::string name = "Bro";
    // int age = 21;
    // bool student = true;

    // std::cout<<&name<<'\n';
    // std::cout<<&age<<'\n';
    // std::cout<<&student<<'\n';

    //PASS by VALUE vs PASS by REFERENCE

    // std::string x = "Kool-Aid";
    // std::string y = "Water";
    
    // swap(x,y);
    // //THIS WILL NOT CHANGE THE VALUES OF X OR Y BECAUSE FUNCTIONS TAKES VALUES, AND COPIES ARE CREATED OF X AND Y. (Pass by Value). The duplicated now have different memory address.
    
    // //TO CHANGE THE ORIGINAL VALUES YOU HAVE TO USE PASS by REFERENCE, pass the values of x and y, into a function which accepts parameters, but said parameters are preceded by "&", the function will automatically access the memory address, meaning the values stored in the memory addresses of the x and y are changed/modified/read.
    
    // std::cout<<"X: "<<&x<<'\n';
    // std::cout<<"Y: "<<&y<<'\n';

    //CONST PARAMETER = parameter that is effectively read-only, code is more secure & conveys intent and useful for references and pointers.

    // std::string name = "Bro";
    // int age = 21;
    // printInfo(name,age);

    //POINTERS = variable that stores a memory address of another varaibles, sometimes it's easier to work with an address.

    //& address-of operator.
    //* dereference operator.

    // std::string name = "Bro";
    // int age = 21;
    // std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    // //pointer varaible has to be the same data type
    // std::string *pName = &name;
    // int *pAge = &age;
    // //As an array is already a memory address, only the name of the array is needed, there is no need to preced the array name with a "&" to get the memory address.
    // std::string *pFreePizzas = freePizzas;

    // //If the pointer varaible uses a derefernce operator in its name and when using the variable to access the value, use the entire name of the pointer variable (astrisk included).
    // std::cout<<*pName<<'\n';
    // std::cout<<*pAge<<'\n';
    // //With an array pointer, if the deference operator is used (the entire pointer varaible name), the first element is displayed.
    // std::cout<<*pFreePizzas<<'\n';

    //NULL value =  a special value that means something has no value. When a pointer is holding a null value, that pointer is not pointing at anything(null pointer).

    //nullptr = keyword represents a null pointer literal.

    //nullptrs are helpfull when determining if an address was successfully assigned to a pointer.

    //When using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory, this will case undefined behaviour.

    // int *pointer = nullptr;
    // int x = 123;

    // pointer = &x;

    // if(pointer == nullptr){
    //     std::cout<<"address was not assigned!\n";
    // }else{
    //     std::cout<<"address was assigned!\n";
    //     std::cout<<*pointer;
    // }

    //DYNAMIC MEMORY = memory that is allocated after the program is already compiled & running. Use the 'new' operator to allocate memory in the heap rather than the stack.

    //Usefull when we don't know how much memory we will need. Makes our program more flexile, especially when accepting user input.

    // int *pNum = nullptr;
    // pNum = new int;
    // *pNum = 21;

    // std::cout<<"address: "<<pNum<<'\n';
    // std::cout<<"value: "<<*pNum<<'\n';

    // //To NOT cause a memory leak and free memory delete the pointer.
    // delete pNum;

    // char *pGrades = nullptr;

    // int size;
    // std::cout<<"How many grades to enter in?: ";
    // std::cin>>size;
    // pGrades = new char[size];

    // for(int i = 0; i < size; i++){
    //     std::cout<<"Enter grades #"<<i+1<<": ";
    //     std::cin>>pGrades[i];
    // }

    // for(int i = 0; i < size; i++){
    //     std::cout<<pGrades[i]<<" ";
    // }

    // //To delete a new array use "delete[]".
    // delete[] pGrades;

    //RECURSION =  a programming technique where a function invokes itself from within to break a complex concept into a repeatable single step

    //ITERATIVE vs RECURSIVE

    //ADVANTAGES = less code and is clear
    //             useful for sorting and searching algorithms

    //DISADVANTAGES = uses more memory
    //                slower

    // std::cout<<factorial(10);

    //FUNCTION TEMPLATE = descrives what a function looks like. It can be used to generate as many overloaded functions as needed, each using different data types.

    // std::cout<<max(1,2.1)<<'\n';

    //STRUCT =  A structure that group related variables under one name, structs can contain many different data types (string, int, double, bool, etc.). Variables in a struct are known as "members", members can be accessed with . "Class Member Access Operator".

    // student student1;
    // student1.name = "Spongebob";
    // student1.gpa = 3.2;

    // student student2;
    // student2.name = "Patrick";
    // student2.gpa = 2.1;

    // student student3;
    // student3.name = "Squidward";
    // student3.gpa = 1.5;
    // student3.enrolled = false;

    // std::cout<<student1.name<<'\n';
    // std::cout<<student1.gpa<<'\n';
    // //When accessing booleans 1 represents true and 0 represents false.
    // std::cout<<student1.enrolled<<'\n';

    // std::cout<<student2.name<<'\n';
    // std::cout<<student2.gpa<<'\n';
    // //When accessing booleans 1 represents true and 0 represents false.
    // std::cout<<student2.enrolled<<'\n';

    // std::cout<<student3.name<<'\n';
    // std::cout<<student3.gpa<<'\n';
    // //When accessing booleans 1 represents true and 0 represents false.
    // std::cout<<student3.enrolled<<'\n';
    
    // Car car1;
    // Car car2;

    // car1.model = "Mustang";
    // car1.year = 2023;
    // car1.color = "red";

    // car2.model = "Corvette";
    // car2.year = 2024;
    // car2.color = "blue";

    // paintCar(car1,"silver");
    // paintCar(car2,"gold");

    // printCar(car1);
    // printCar(car2);

    //ENUMS = a user-defined data type that consists of paired named-integer constants. GREAT if you have a set of potential options

    //[ENUM DATA TYPE] [VARIABLE NAME] = [ENUM VALUE(NOT INTEGER)]
    // Day today = sunday;

    // //WARNING - SWITCHS CANNOT TEST FOR STRINGS.
    // //FOR ENUMS SWITCHES CAN TEST FOR THE VALUES OR INTEGERS
    // switch(today){
    //     case 0:std::cout<<"It is Sunday!\n";break;
    //     case 1:std::cout<<"It is Monday!\n";break;
    //     case 2:std::cout<<"It is Tuesday!\n";break;
    //     case 3:std::cout<<"It is Wednesday!\n";break;
    //     case 4:std::cout<<"It is Thursday!\n";break;
    //     case 5:std::cout<<"It is Friday!\n";break;
    //     case 6:std::cout<<"It is Saturday!\n";break;
    // }

    //OBJECT = A collection of attributes and methods, they can have characteristics and could perform actions, can be used to mimic real world items (ex. Phone, Book, Dog), and it is created from a class which acts as a "blue-print".

    //[CLASS NAME] [VARAIBLE NAME];
    // Human human1;
    // Human human2;

    // std::cout<<human1.name<<'\n';
    // std::cout<<human1.occupation<<'\n';
    // std::cout<<human1.age<<'\n';
    // std::cout<<human2.name<<'\n';
    // std::cout<<human2.occupation<<'\n';
    // std::cout<<human2.age<<'\n';

    // //ADD PARENTHESES TO INVOKE FUNCTION.
    // human2.eat();
    // human2.drink();
    // human2.sleep();

    // Car car1;
    // Car car2;

    // car1.make = "Ford";
    // car1.model = "Mustang";
    // car1.year = 2023;
    // car1.color = "silver";

    // std::cout<<car1.make<<'\n';
    // std::cout<<car1.model<<'\n';
    // std::cout<<car1.year<<'\n';
    // std::cout<<car1.color<<'\n';

    // car1.accelerate();
    // car1.brake();

    //CONSTRUCTOR = special method that is automatically called when an object is instantiated useful for assigning values to attributes as arguements.

    // Student student1("Spongebob",25,3.2);
    // Student student2("Patrick",40,1.5);
    // Student student3("Sandy",21,4.0);
    // std::cout<<student3.name<<'\n';
    // std::cout<<student3.age<<'\n';
    // std::cout<<student3.gpa<<'\n';

    // Car car1("Chevy","Corvette",2022,"blue");
    // Car car2("Ford","Mustang",2023,"red");
    // std::cout<<car2.make<<'\n';
    // std::cout<<car2.model<<'\n';
    // std::cout<<car2.year<<'\n';
    // std::cout<<car2.color<<'\n';

    //OVERLOADED CONSTRUCTOR = multiple constructors w/ same name but different parameters allowing for varying arguements when instantiating an object.

    // Pizza pizza1("pepperoni");
    // Pizza pizza2("mushrooms","pepperoni");
    // Pizza pizza3;

    // std::cout<<pizza2.topping1<<'\n';
    // std::cout<<pizza2.topping2<<'\n';

    //ABSTRACTION = hidin unnecessary data from outside a class.
    //GETTER = function that makes a private attribute READABLE.
    //SETTER = function that makes a private attribute WRITEABLE.

    // Stove stove(9);

    // //stove.setTemperature(1000000);

    // std::cout<<"The temperature settings is: "<<stove.getTemperature();

    //INHERITANCE = A class can recieve attributes and methods from another class, Children classes inherit from a Parent class and Helps to reuse similar code found within multiple classes.

    // Dog dog;
    // Cat cat;

    // std::cout<<cat.alive<<'\n';
    // cat.eat();
    // cat.meow();

    // Cube cube(10);
    // Sphere sphere(5);

    // std::cout<<"Area: "<<sphere.area<<"cm\n";
    // std::cout<<"Volume: "<<sphere.volume<<"cm\n";

    return 0;
}

//FUNCTION = a block of reusable code

// void happyBirthday(std::string name,int age){
//         std::cout<<"Happy Birthday to "<<name<<'\n';
//         std::cout<<"Happy Birthday to "<<name<<'\n';
//         std::cout<<"Happy Birthday dear "<<name<<'\n';
//         std::cout<<"Happy Birthday to "<<name<<'\n';
//         std::cout<<"You are "<<age<<" years old";
// }
// std::string concastString(std::string string1, std::string string2){
//     return string1+" "+string2;
// }
// void bakePizza(){
//     std::cout<<"Here is your pizza!\n";
// }
// void bakePizza(std::string topping1){
//     std::cout<<"Here is your "<< topping1<<" pizza!\n";
// }
// void bakePizza(std::string topping1,std::string topping2){
//     std::cout<<"Here is your "<< topping1<<" and "<<topping2<<" pizza!\n";
// }
// void printNum(){
//     int myNum = 2;
//     std::cout<<::myNum<<'\n';
// }

// double getTotal(double prices[],int size){
//     double total = 0;
//     //When an array is passed as an arguement into a function it decays into a pointer, so the sizeof() method won't work.
//     //The size of the array will need to be also passed as an argument.
//     for(int i = 0; i < size; i++){
//         //total = total + prices[i];
//         total+=prices[i];
//     }
//     return total;
// }
// int searchArray(std::string array[], int size, std::string element){
//     //LINEAR SEARCH = going through each element in the array starting from the beginning.
//     for(int i = 0; i < size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }
//     //SENTINAL VALUES = SOMETHING WASN'T FOUND.
//     return -1;

// }

// void sort(int array[],int size){

//     int temp;
//     // -1 is used because the larger values automatically gravitate towards the end of the array.
//     for(int i = 0; i < size-1; i++){
//         for(int j = 0; j < size-i-1; j++){
//             if(array[j] > array[j+1]){
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//     }
//     }

// }

// void swap(std::string &x, std::string &y){
//     std::cout<<"X: "<<&x<<'\n';
//     std::cout<<"Y: "<<&y<<'\n';
// }

// void printInfo(const std::string &name, const int &age){
//     std::cout<<name<<'\n';
//     std::cout<<age<<'\n';
// }
// int factorial(int num){
//     //ITERATIVE
//     int result = 1;
//     for(int i = 1; i <= num; i++){
//         result = result * i;
//     }
//     return result;
//     //RECURSIVE
//     if(num > 1){
//         return num * factorial(num-1);
//     }else{
//         return 1;
//     }
// }

////Use the struct name as the data type for the parameter.
// void printCar(Car &car){
//     std::cout<<&car<<'\n';
//     std::cout<<car.model<<'\n';
//     std::cout<<car.year<<'\n';
//     std::cout<<car.color<<'\n';
// }

// void paintCar(Car &car, std::string color){
//     car.color = color;
// }