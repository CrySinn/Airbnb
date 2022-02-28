//Question 1: Fizz Buzz cont.
// Problem statement:
// Given a positive integer number with the default value 300, write a C++ function named fizz_buzz to return "Fizz" if the number is evenly divisible by 3, return "Buzz" if it is evenly divisible by 5, return "Fizz Buzz" if it is evenly divisible by both 3 and 5 and return "Not Fizz or Buzz" otherwise (without the quotes). Write another function named fizz_buzz_loop to test fizz_buzz for items in a given array of positive integer numbers.

// Do the following:
// Write your algorithm as code comments. I recommend to follow UMPIRE technique (20 points)
// Implement your functions (50 points)
// In your driver program, test your function for the criteria below. Note that in CodeCheck this may be either fully or partially set up already. (30 points)

// UMPIRE (Understand, Match, Plan, Implement, Review, Evaluate)
// Understand
// input = a positive interger with the default value 300
// output = return a correct phrase
// restriction = a positive integer number
// Ex. number = 6 return "fizz"
// Ex. number = 10 return "Buzz"
// Ex. number = 2 return "Not Fizz or Buzz"
// Ex. number = 21 return "Fizz Buzz"

// Match
// If-else problem

// Plan
// 1. input a_number
// 2. if a_number is divisible by both 3 and 5:
//      2.1 return "Fizz Buzz"
// 3. if a_number is divisible by 3:
//      3.1 return "Fizz"
// 4. if a_number is divisible by 5:
//      4.1 return "Buzz"
// 5. else:
//      5.1 return "Not Fizz or Buzz"

// Implement:
//
#include <iostream>
#include <string>
// Solve fizz buzz problem
std::string fizz_buzz(int a_number = 300){
    if(a_number % 3 == 0 && a_number % 5 == 0){
        return "Fizz Buzz";
    }
    else if(a_number % 3 == 0){
        return "Fizz";
    }
    else if(a_number % 5 == 0){
        return "Buzz";
    }
    else {
        return "Not Fizz or Buzz";
    }
}
