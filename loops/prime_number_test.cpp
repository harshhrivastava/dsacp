#include <iostream>

using namespace std;

// A prime number is a number which has only 2 factors,
// i.e., 1 and the number itself. If it is more than 2, then it is known as a composite number.
// This function takes a value as input and returns back boolean value,
// which states whether or not the number entered was a prime number or not.
bool isPrime(int num) {
    // If the number is less than or equal to 1, we return false.
    // This is because 1 is neither a prime number nor a composite number.
    // Same goes with 0 and all the negative numbers.
    if (num <= 1) return false;
    
    // Here we run the loop to check whether
    // the number is divisible by any integer
    // greater than 2 and less than or equal
    // to the square root of the number.
    for (int i = 2; (i * i) <= num; i++) if (num % i == 0) return false;

    // If it happens that the number is not divisible by any other number
    // except 1 and the number itself, this will return true.
    return true;
}

int main(int argc, char const *argv[])
{
    // Here we convert the first argument
    // from a string into a number.
    int num = stoi(argv[1]);
    
    // Here we print the result of the call to the function.
    // If the number is prime, it will display 1, or else 0.
    cout << isPrime(num);

    return 0;
}
