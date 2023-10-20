#include <iostream>

using namespace std;

// This function is used to take an integer and return back
// the `n`th number in the fibonacci sequence.
int fibonacci(int n) {

    // The number `n` cannot be negative because it is
    // supposed to be the position of the fibonacci number which the user wants.
    // We add a check whether the number is not a negative number.
    // If it happens to be a negative number,
    // the system will throw an error and the program will terminate.
    if (n < 0) throw("Error: Negative number entered as input.");
    
    // If the value of `n` is either 0 or 1, it will return the same back.
    if (n < 2) return n;

    // If the value of `n` is greater than or equal to 2, we proceed with the following steps.
    // We first initialize the `previous` and `current` variables with 0 and 1, respectively.
    int previous = 0, current = 1;

    // Now we run the loop n - 2 times.
    // This is because if n is less than 2, it will be either 0 or 1,
    // which we have covered in the previous if condition.
    // If it is greater than 2, we need to compute value for the remaining (n - 2) values.
    for (int i = 1; i < n; i++) {

        // Here we add the 2 values and assign it to the `next` variable.
        int next = previous + current;

        // Here we set the `previous` variable to the value of `current` variable.
        previous = current;

        // Here we set the `current` variable to the value of `next` variable.
        // Here we have the value of the element which we want.
        // For example, in the first iteration, this will be equal to 1,
        // and the third value of the fibonacci sequence is also 1.
        current = next;
    }

    // Once computation is done, we return the value of current,
    // which is the `n`th value of the fibonacci sequence.
    return current;
}

int main(int argc, char const *argv[])
{
    // Here we convert the first argument
    // from a string into a number.
    int num = stoi(argv[1]);

    // Here we print the result of the call to the function.
    cout << fibonacci(num);
    
    return 0;
}
