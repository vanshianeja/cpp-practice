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

// #include <iostream>
// int main() {
    
//     // STRING METHODS

//     std::string name;
//     std::string x = "Hello";

//     std::cout << "Enter your name: ";
//     std::getline(std::cin , name);

//     std::cout << name.length() << "\n" ;  // Finds length of the string
//     std::cout << name.empty() << "\n"; // returns 1 if empty and 0 if some value is there

//     x.clear(); // clears the string's value
//     name.append("@gmail.com"); // add values to the string

//     std::cout << "Your username is: " << name << "\n"; 

//     std::cout << name.at(2); // finds the character at a particular index
//     name.insert(3, "*"); //insert character

//     std::cout << name << "\n";

//     std::cout << name.find("f") << "\n"; //finds the index of a particular character
//     name.erase(0,2); // erases a portion of a string

//     std::cout << name;

//     return 0;
// } 

// #include <iostream>
// int main() {

//     // While Loop

//     std::string name;

//     while(name.empty()) {
//         std::cout << "Enter your name: ";
//         std::getline(std::cin, name);
//     }

//     //Infinite loop
//     // while(1==1) {
//     //     std::cout << "INFINITE LOOP";
//     // }

//     std::cout << "Hello "<< name;
// }

// #include <iostream>
// int main() {

//     //do-while looop = do some block of code first,
//     //                 THEN repeat again if the condition is true

//     int num;
//     do {
//         std::cout << "Enter a positive number: ";
//         std::cin >> num;
//     } while (num <0);

//     std::cout << "The number is "<<num;
//     return 0;

// }

// #include <iostream>
// int main() {

//     // For loop
    
//     for(int i = 1; i<=5; i++){
//         std::cout << "Happy New Year!\n";
//     }

//     return 0;
// }

// #include <iostream>
// int main() {

//     // break = breaks out of a loop
//     // continue = skips current iteration

//     // for(int i = 0; i<=10;i++){
//     //     if(i==3){
//     //         break;
//     //     }
//     //     std::cout << i << "\n";
//     // }

//     for(int i = 0; i<=10;i++){
//         if(i==3){
//             continue;
//         }
//         std::cout << i << "\n";
//     }

//     return 0;
// }

// #include <iostream>
// int main() {
    
//     // Nested Loops

//     int rows;
//     int columns;
//     char symbol;

//     std::cout << "Enter rows: ";
//     std::cin >> rows;

//     std::cout << "Enter columns: ";
//     std::cin >> columns;

//     std::cout << "Enter symbol: ";
//     std::cin >> symbol;

//     for (int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             std::cout << symbol << " " ;
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>

// void happyBirthday(std::string name, int age) {
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday dear " << name << "!\n";
//     std::cout << "Happy Birthday to you!\n\n";

//     std::cout << "May god bless you!\n";
//     std::cout << "May god bless you!\n";
//     std::cout << "May god bless you dear " << name << "!\n";
//     std::cout << "Happy birthday to you!\n\n";

//     std::cout << "Congratulations ! You turned "<< age << " today!\n\n";

// }
// int main() {
    
//     // function = a block of reuseable code
    
//     happyBirthday("Vanshi",19);

//     std::string name = "Vanshi";
//     int years = 20;

//     happyBirthday(name,years);

//     return 0;
// }

// #include <iostream>

// double square(double length);
// double cube(double length);

// std::string concatString(std::string s1, std::string s2);
// int main() {

//     // return keyword = return a value back to the spot
//     //                  where you called the encompassing function

//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << "cm^2\n";
//     std::cout << "Volume: " << volume << "cm^3\n";

//     std::string first_name = "Vanshi";
//     std::string last_name = "Aneja";
//     std::string name = concatString(first_name,last_name);

//     std::cout << "Your full name is: "<< name <<"\n";
    
//     return 0;
// }

// double square(double length){
//     return length * length;
// }

// double cube(double length){
//     return length * length * length;
// }

// std::string concatString(std::string s1, std::string s2){
//     return s1 + " " + s2;
// }

// #include <iostream>

// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1, std::string topping2);

// int main(){

//     // Function's name + parameters is called function signature

//     // Overloaded functions 

//     bakePizza();
//     bakePizza("onion");
//     bakePizza("onion","capsicum");

// }

// void bakePizza() {
//     std::cout << "Here is your pizza!\n";
// }

// void bakePizza(std::string topping1) {
//     std::cout << "Here is your " << topping1 << " pizza!\n";
// }

// void bakePizza(std::string topping1, std::string topping2) {
//     std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
// }

// #include <iostream>

// int myNum = 1;

// void printNum();

// int main() {

//     // Variable Scope
//     // Local variables = declared inside a function or block {}
//     // global variables = declared outside of all functions

//     int myNum = 3;
//     printNum();
//     std::cout << myNum << "\n";
    
//     std::cout << ::myNum << "\n";

//     return 0;
// }

// void printNum() {
//     int myNum = 2;
//     std::cout << myNum << "\n";
    
//     std::cout << ::myNum << "\n";
// }

// #include <iostream> 

// int main() {

//     // array = data structures that can hold multiple values
//     //         values are accessed by an index number
//     //         "kind of like a variable that holds multiple values"

//     // Arrays should contain data having same same data type only!

//     std::string cars[] = {"Kia", "Tata", "Ford", "Honda", "Mahindra"};

//     std::cout << cars[1] << '\n';
//     std::cout << cars[4] << '\n';

//     cars[1] = "Hyundai";
//     std::cout << cars[1] << '\n';

//     std::string colors[3] ;

//     colors[0] = "Red";
//     colors[1] = "Blue";
//     colors[2] = "Yellow";
       
//     std::cout << colors[2] << "\n";
//     std::cout << colors[1] << "\n";

// }

// #include <iostream>

// int main() {

//     // sizeof() = determine the size in bytes of a:
//     //            variable, data type, class, objects, etc.
    
//     std::string name = "Vanshi";
//     double gpa = 2.5;
//     char grade = 'A';
//     bool student = true;
//     char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
//     std::string students[] = {"Ram", "Riya", "Rohan", "Ridhi"};

//     std::cout << sizeof(gpa) << " bytes\n";
//     std::cout << sizeof(name) << " bytes\n";
//     std::cout << sizeof(grade) << " bytes\n";
//     std::cout << sizeof(student) << " bytes\n";
//     std::cout << sizeof(grades) << " bytes\n";

//     std::cout << sizeof(grades)/ sizeof(grade) << " elements\n";
//     std::cout << sizeof(students)/ sizeof(std::string) << " elements\n";
// }

// #include <iostream>
// int main() {

//     // Iterate over an array 

//     std::string colors[] = {"Blue", "Red", "Pink", "Yellow", "Green"};
//     for(int i =0; i<= sizeof(colors); i++) {
//         std::cout << colors[i] << '\n';
//     }

//     return 0;

// }

// #include <iostream>
// int main() {

//     // foreach loop = loop that eases the tranversal over an 
//     //                iterable data set

//     std::string students[] = {"Jason", "Will", "Jack", "Brooke"};
//     for(std::string student : students) {
//         std::cout << student << '\n';
//     }

//     int marks[] = {93, 88, 67, 92, 74};
//     for(int mark : marks){
//         std::cout << mark << '\n';
//     }
// }

// #include <iostream>

// int searchArray(int array[], int size, int element);

// int main() {
    
//     // Search element in an Array!

//     int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(numbers)/ sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout << "Enter element to search for: " << '\n';
//     std::cin >> myNum;

//     index = searchArray(numbers, size, myNum);

//     if(index != -1){
//         std::cout << myNum << " is at the index "<< index;
//     }
//     else {
//         std::cout << myNum << " is not in the array";
//     }

//     return 0;
// }

// int searchArray(int array[], int size, int element){
//     for(int i = 0; i< size; i++){
//         if(array[i] == element){
//             return i;
//         }
//     }

//     return -1;
// }

// #include <iostream>

// void sort(int array[], int size);

// int main() {

//     // Sort elements in an array

//     int array[] = {2, 6, 10, 1, 5, 3, 8, 4, 9, 7};
//     int size = sizeof(array)/ sizeof(array[0]);
    
//     sort(array , size);

//     for (int element : array){
//         std::cout << element << " ";
//     }
    
// }

// void sort(int array[], int size){
//     int temp;

//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j < size - i - 1; j++){
//             if(array[j] > array[j+1]){
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }
// }

// #include <iostream>

// int main() {

//     // fill() = Fills a range of elements with a specified value
//     //          fill(begin, end, value)

//     std::string foods[20];

//     fill(foods, foods + 20, "pizza");

//     for(std::string elements : foods){
//         std::cout << elements << '\n';
//     }

//     const int SIZE = 30;
//     std::string food[SIZE];

//     fill(food, food + SIZE/3, "pizza");
//     fill(food + SIZE/3, food + (2*SIZE)/3, "hamburger");
//     fill(food + (2*SIZE)/3, food + SIZE, "hotdog");

//     for(std::string elements : food){
//         std::cout << elements << '\n';
//     }
// }

// #include <iostream>
// int main() {

//     // Fill an array with user input

//     std::string foods[5];
//     int size = sizeof(foods)/sizeof(foods[0]);
//     std::string temp;

//     for(int i = 0; i < size; i++){
//         std::cout << "Enter the food you like or 'q' to quit #" << i + 1 << " : ";
//         std::getline(std::cin, temp);
//         if(temp == "q"){
//             break;
//         }
//         else{
//             foods[i] = temp;
//         }
//     }

//     std::cout << "Your favourite food items are: ";
//     for(int i = 0; !foods[i].empty(); i++) {
//         std::cout << foods[i] << " ";
//     }

//     return 0;
// }

#include <iostream>

int main() {

    // Multidimentional Array

    std::string colors[][3] = {{"red", "yellow", "blue"},
                              {"black", "white", "brown"},
                              {"gold", "silver", "grey"}};
    
    int rows = sizeof(colors)/sizeof(colors[0]);
    int columns = sizeof(colors[0])/sizeof(colors[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << colors[i][j] << " ";
        }
        std::cout << "\n";
    }

}