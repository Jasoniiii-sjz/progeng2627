In this section we consider how to incrementally develop a program by adding features that use in particular boolean operators.

We want to write a program that converts miles to km and the other way around. The conversion rate is 1 mile = 1.609 km.

We want the program to work as shown in the examples below, in which you can also notice that:

We don't include a prompt to the user asking for input (just to keep it concise). So the user just enters the quantity to convert followed by the unit and gets in output the result of the conversion to the other unit.
For now we don't use the plural "miles" for the unit name, but always just "mile".
There will be approximation errors (and that's ok).

1 mile
1.609 km

16.3 mile
26.2267 km

3.2 km
1.98881 mile
The implementation of the program can be as follows:


#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text

    const double mile_to_km = 1.609;
    // useful way to define constants

    std::cin >> length_in >> unit_in;
    // we don't print a prompt, we just read the input

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
    }
    else{
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }

    std::cout << length_out << " " << unit_out << std::endl;
}
Exercise: test unit conversion¶
Test the program above.

Exercise: test unit conversion with wrong units¶
Note that since in the conditional included in the program above we are only checking for km, anything other than km will be assumed to be miles, for example:


1 litre
1.609 km
Test the unit conversion example program above with "wrong units" in input (i.e. anything either than km or mile) to check that this is indeed the behaviour.

Exercise: temperature conversion¶
Write a temperature conversion program that can convert from Celsius to Fahrenheit and the other way around. The program should read a number and a unit and perform the conversion accordingly, for example:


451 F 
232.78 C

100 C
212 F
One more check¶
If we want we can add one more check to the conditional in our initial program:


#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;

        std::cout << length_out << " " << unit_out << std::endl;
    }
    else if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;

        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}
This example shows how to write an if statement with three branches (or three different outcomes). We can add any amount of branches keeping this structure.

You may have heard (or may come across in the future) of something called the "switch" statement that does something similar. In C++ this statement has some limitations, whereas the structure of if-else if-...-else statements works reliably. So I won't introduce the switch statement in these notes.

Exercise: test unit conversion error message¶
Test the unit conversion example program above with inputs other than km or mile for the unit name to check that you would now indeed get the error, unit not recognised message.

Removing duplicated lines¶
In the example above, the line std::cout << length_out << " " << unit_out << std::endl; is duplicated. Having the exact same line duplicated is usually an indication that the code should be given a better, more elegant, structure. For example because if we want to change the format of the output we would need to do it twice instead of just once. The following example addresses this issue:


#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    // stage 1: input

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;
    // we assume the user will input a valid unit

    // stage 2: data processing

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;

    }
    else if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
        // if the user inputs an invalid unit name
        // we update this variable
    }

    // stage 3: output 

    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}
As you can see in this example, we can assign values like true and false to variables of type bool.

Now the program is more elegant and it is neatly divided into the three fundamental stages of input, processing, and output.

Exercise: restructure temperature conversion¶
Upgrade and restructure your temperature conversion program following the example above so that it includes a check and error message if the temperature unit in input is something other than C or F. For example:


1 c
error, unit not recognised

1 litre
error, unit not recognised
Unit Conversion with boolean operators¶
Finally, maybe we should allow the user to also enter "miles" as input as it's a common way of writing the unit.


#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "miles";
        length_out = length_in / mile_to_km;

    }
    else if( (unit_in == "mile") || (unit_in == "miles") ){ // the || means "or"
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }


    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}
In this example we introduce the boolean operator || which means "or". There are also ! for "not" and && for "and". These operators can be used to build boolean expressions.

The ! ("not") is a unary operator. It takes a boolean value and inverts it: true becomes false and false becomes true.

The || ("or") is a binary operator. It takes two boolean values and the result is false if they are both false and true in all other cases.

The && ("and") is a binary operator. It takes two boolean values and the result is true if they are both true and false in all other cases.

Exercise: temperature conversion with boolean operators¶
Upgrade your temperature conversion program so that it work regardless of whether the unit entered is lowercase or uppercase (an error message should still be printed for any unit other than F, f, C, c). For example:


451 F 
232.78 C

451 f 
232.78 C

100 C
212 F

100 c
212 F

1 litre
error, unit not recognised
