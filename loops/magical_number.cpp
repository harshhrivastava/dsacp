#include <iostream>

using namespace std;

// This method is used to add up all the digits of a number and return its value.
int digitSum(int num) {

    // This variable will store the result of the sum
    // of all the digits of the entered number.
    int sum = 0;

    // The logic is to add the last digit of the number
    // by dividing the number by 10 and adding the remainder to the sum.
    // This will continue until all the digits have been added and the quotient becomes 0.
    while (num > 0) {

        // Here we add the last digit to the sum.
        sum += num % 10;

        // Here we assign num, the value for the next iteration.
        num = num / 10;
    }

    return sum;
}

// A magical number of a number is the sum of all digits
// of the number until it becomes a single digit number.
int magicalNumber(int num) {

    // If the number is greater than 9,
    // then we will start adding all the digits,
    // until the number is of a single digit.
    while (num > 9) {
    
        // If it happens that the number is of 2 or more digits,
        // we call `digitSum` function on the num
        // and assign the result to the same variable.
        num = magicalNumber(num);
    }

    // Once the result is of a single digit, we return the magical number.
    return num;
}

int main(int argc, char const *argv[])
{
    // Here we convert the first argument
    // from a string into a number.
    int num = stoi(argv[1]);

    // Here we print the result of the call to the function.
    cout << magicalNumber(num);

    return 0;
}