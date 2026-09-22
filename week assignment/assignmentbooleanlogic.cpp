#include <iostream>
using namespace std; //this line lets us not have to write std::cout everytime. 

bool Test1() {
    cout << "Test1 was called" << endl;
    return true;
    //bool forces a return value of true/false, Test1 is the name, the empty parentheses means it needs no inputs to run, 
    //inside the curly braces are the actual instructions. 
    // the whole cout..... thing prints the message if the function is triggered. 
    //return true means itll hand back the value true to whatever called this function. its essentially the answer.
    //note nothing should happen with this set of instructions unless called on later. 
}
int main() {
    bool a = false;

    cout << "Before the check" << endl;

    bool result = (a && Test1());

    cout << "After the check" << endl;
    return 0;
}
//int main shows the instructions which will run when executed
//bool a = false creates a value for a which is false. this decides if Test1 gets called.
//cout << "before the check" endl prints the text to the screen, then moves to a new line. 
//so, for bool result = (a && Test1());, C++ looks at a first. Since we forced a to have a value of false, and it has a logical AND operation, c++ will ignore the rest since no matter what the outcome will be false.
//bool result = means whatever the expression evaluates to gets stored in the value named "result"
//since Test1() was never called, its print statement never runs. This proves that a short circuit happened, which is what i wrote about in my paper.
//cout << "after the check" << endl; prints the text. This marks that we are now past that line.
//return 0 ends main() and reports that the program ran without errors. note that 0 is not related to boolean logic.
//when I run this, it should have an output Before the check
//                                          After the check
//the absence of Test1 was called proves the short circuiting. 