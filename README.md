This project is subjected to copyrights and it belogngs to the University of Illinois at Chicago

# sum-of-points

Given a target sum and a set of integers, the goal is to determine if any two integers in the set can be added together to equal the target sum. This involves iterating through the set of integers and checking each pair to see if their sum is equal to the target. Some key points:

Input consists of a numerical target sum and a collection of integers
Need to check every pair of integers in the set to see if they sum to the target
Can use nested loops to generate all pairs or a hash table to optimize lookup time
If any pair sums to the target, return true to indicate the sum can be formed
If no pair sums to the target after checking all pairs, return false
Overall, this is a way to check if a collection of integers contains a pair that combines to a given target sum.
