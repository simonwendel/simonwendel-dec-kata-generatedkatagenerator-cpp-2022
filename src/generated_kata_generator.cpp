#include <iostream>
#include <string>
#include <random>

// List of possible katas
const std::string katas[] = {
  "FizzBuzz",
  "Reverse a string",
  "Palindrome check",
  "Anagram check",
  "Implement bubble sort",
  "Implement selection sort",
  "Implement insertion sort",
  "Implement merge sort",
  "Implement quick sort",
  "Binary search",
  "Find the missing element in a given permutation",
  "Implement a stack using an array",
  "Implement a queue using an array",
  "Implement a linked list",
  "Implement a binary tree",
  "Implement a hash table",
  "Implement a graph"
};

// List of possible feature constraints
const std::string constraints[] = {
  "Must use O(1) space complexity",
  "Must use O(n) time complexity",
  "Must use O(n log n) time complexity",
  "Must use O(n^2) time complexity",
  "Must be implemented using recursion",
  "Must be implemented iteratively",
  "Must be implemented using a queue",
  "Must be implemented using a stack",
  "Must be implemented using a dynamic data structure",
  "Must be implemented using a hash table",
  "Must be implemented using a binary tree",
  "Must be implemented using a graph"
};

// Program to generate a random code kata and feature constraint
// Author: OpenAI Assistant
int main() {
  // Initialize random number generator
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis_kata(0, sizeof(katas) / sizeof(katas[0]) - 1);
  std::uniform_int_distribution<> dis_constraint(0, sizeof(constraints) / sizeof(constraints[0]) - 1);

  // Generate a random index for the kata
  int index_kata = dis_kata(gen);

  // Generate a random index for the constraint
  int index_constraint = dis_constraint(gen);

  // Print the kata and the constraint
  std::cout << "Your kata is: " << katas[index_kata] << std::endl;
  std::cout << "Feature constraint: " << constraints[index_constraint] << std::endl;

  return 0;
}
