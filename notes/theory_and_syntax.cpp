// #include <iostream>

// int main(){

//     // This is a comment 
//     /*
//     This is a 
//     multi line
//     comment
//     */

//     std::cout << "I like pizza!" << '\n'; 
//     std::cout << "It's really good!" << std::endl ;
//     return 0;
// }

// #include <iostream>
// int main() {
//     int x; //declaration
//     x = 5; //assignment

//     int y = 6;

//     int sum = x + y;

//     std::cout << x << std::endl;
//     std::cout << y << '\n';
//     std::cout << sum ;
//     return 0;
// }

// #include <iostream>
// int main() {
//     // integer ( whole number)
//     int age = 31;

//     // double ( number including decimal )
//     double price = 23.56;

//     // single character
//     char grade = 'A';

//     // boolean ( true or false )
//     bool power_on = true;

//     // String ( objects that represents a sequence of text)
//     std::string name = "User";

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are "<< age << " years old.";
//     return 0;

// }

// #include <iostream>
// int main(){
//     // To make a value(variable) constant we add const keyword 
//     const double PI = 3.12159;
//     const int year = 2026;
// }

// #include <iostream>
 
// namespace first{
//     int x = 1;
// }

// namespace second{
//     int x = 2;
// }

// int main() {

//     /* Namespace = provides a solution for preventing name conflicts in large projects.
//                    Each entity needs a unique name.
//                    A namespace allows for identically named entities to have different values as lond as the namespaces are different.
//                    */
    
//     // int x = 0;
    
//     // std::cout << x << '\n'; // print 0
//     // std::cout << first::x << '\n'; // print 1

//     using namespace first;
//     std::cout << x << '\n'; // print 1
//     std::cout << second::x; // print 2

//     return 0;

// }

// #include <iostream>
// int main() {
//     // we do not have to use std before string and print statement by using namespace
//     using namespace std;

//     string name = "mam";
//     cout << "Hello " << name;
//     return 0;
// }

// #include <iostream>

// //typedef std::string text_t;
// using text_t = std::string;
// int main() {

//     // typedef = reserved keyword used to create an additional name for another data type.
//     //           New identifier for existing type
//     //           Replaced with 'using' keyword               

//     text_t time = "Morning";
//     std::cout << "Good " << time;

// }

// #include <iostream>
// int main() {

//     // arithmetic operators
//     int students = 20;

//     // students = students + 1;
//     // students++;
//     // students+=1;

//     // students = students - 2;
//     // students--;
//     // students-=2;

//     // students = students * 2;
//     // students*=2;

//     // students = students / 2;
//     // students/=3;

//     // int remainder = students % 3;

//     //paranthesis
//     //multiplication and subtraction 
//     //addition and subtraction

//     std::cout << students << std::endl;
    
//     return 0;
// }

// #include <iostream>
// int main () {

//     // type conversion = convertion a value of one data type to another
// //                         Implicit = automatic
// //                         Explicit = Precede value with new data type (int)
//     // int x = 3.14; // implicit
//     // double y = (int)3.13; // explicit 

//     char x = 100; // implicit

//     std::cout << x << "\n";
//     std::cout << (char)101; // explicit

// }

// #include <iostream>
// int main() {
//     // cout << (insertion operator)
//     // cin >> (extraction operator)

//     std::string name;
//     std::string full_name;
//     int age;

//     std::cout << "What's your name? ";
//     std::cin >> name;

//     std::cout << "Please tell you full name: ";
//     std::getline(std::cin >> std::ws, full_name);

//     std::cout << "Please enter your age: ";
//     std::cin >> age;

//     std::cout << "Hello "<< name << '\n';
//     std::cout << "You are " << full_name << '\n';
//     std::cout << "You are "<< age << " years old.";
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// int main(){
//     double x = 3;
//     double y = 5;
//     double z;

//     //z = std::max(x, y);
//     //z = std::min(x, y);
//     //z=pow(2,4);
//     //z=sqrt(9);
//     //z = abs(-4);
//     //z = round(2.345);
//     //z = ceil(345.245);
//     //z = floor(12.99999);
//     std::cout << z ;
// }

// #include <iostream>
// int main() {
//         // if statement = a basic form of decision making
//         //                executes a block of code if it's condition is true
    
//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if (age >= 100) {
//         std::cout << "You are too old to enter this site.";
//     }
//     else if (age >= 18) {
//         std::cout << "Welcome to the site.";
//     }
    
//     else if(age<0) {
//         std::cout << "You haven't been born yet.";
//     }
//     else {
//         std::cout << "You are not old enough to enter this site.";
//     }
//     return 0;
// }

// #include <iostream>
// int main() {
//     // switch = alternative to using many " if-else" statements

//     int month;
//     std::cout << "Enther the month (1-12): ";
//     std::cin >> month;

//     switch(month) {
//         case 1:
//             std::cout << "It is January";
//             break;
//         case 2:
//             std::cout << "It is February";
//             break;
//         case 3:
//             std::cout << "It is March";
//             break;
//         case 4:
//             std::cout << "It is April";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;
//         case 6:
//             std::cout << "It is June";
//             break;
//         case 7:
//             std::cout << "It is July";
//             break;
//         case 8:
//             std::cout << "It is August";
//             break;
//         case 9:
//             std::cout << "It is September";
//             break;
//         case 10:
//             std::cout << "It is October";
//             break;
//         case 11:
//             std::cout << "It is November";
//             break;
//         case 12:
//             std::cout << "It is December";
//             break; 
//         default:
//             std::cout << "Please enter in only numbers (1-12) " ; 
//     }
// }

// #include <iostream>
// int main() {
//     // ternary operator (?:) = replacement to an if/else statement
//     // condition ? expression1 : expression2;

//     int grade = 98;

//     // if(grade >=60){
//     //     std::cout << "You pass!";
//     // } 
//     // else {
//     //     std::cout << "You fail!";
//     // }
//     // return 0;

//     grade >=60 ? std::cout << "You pass!" << "\n": std::cout << "You fail!" << "\n";

//     bool hungry = true;
//     hungry ? std::cout << "You are hungry"<<"\n" : std::cout << "You are full!"<<"\n";
//     //or
//     std::cout << (hungry ? "You are hungry. ":"You are full.")<<"\n";
//     return 0;
// }

// #include <iostream>
// int main() {

//     // Logical Operators
//     // && = checks if two conditions are true
//     // || = checks if atleast one condition is true
//     // !  = reverses the logical state of its operand

//     int temp;
//     bool sunny = true;

//     std::cout << "Enter the temperature: ";
//     std::cin >> temp;

//     // if (temp > 0 && temp < 30){
//     //     std::cout << "The temperature is good!";
//     // }
//     // else {
//     //     std::cout << "The temperature is bad!";
//     // }

//     if (temp <= 0 || temp >= 30){
//         std::cout << "The temperature is bad!" << "\n";
//     }
//     else {
//         std::cout << "The temperature is good!" << "\n";
//     }

//     if (!sunny == true){
//         std::cout << "It is cloudy outside";
//     }
//     else {
//         std::cout << "It is sunny outside";
//     }
// }