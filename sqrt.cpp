#include <iostream>
#include <math.h>
#include <stdio.h>


double numberImput;
double answerOutput;

int calc()
{
    std::cout.precision(1);
    answerOutput = sqrt(numberImput);
    std::cout << "your answer is "<< answerOutput<<std::endl;

    return 0;
}

int main()
{
    std::cout << "Welcome to the cool square calc; we square like you care!\n";
    std::cout << "enter a number to square bud.\n" << std::endl;
    std::cin >> numberImput;
    calc();

}