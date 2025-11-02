# Algorithms and Data Structures Homework Assignments

*My homework assignment for the 'Algorithms and Data Structures' discipline is attached in this repository.*

## Table of Contents

Navigate directly to the problem description of interest:

1.  [Task 1](#task-1-recursive-sum-of-even-numbers)
2.  [Task 2](#task-2-iterative-calculation-of-a-series-sum)
3.  [Task 3](#task-3-recursive-calculation-of-a-series-sum)
4.  [Task 4](#task-4-finding-gcd-and-lcm)
5.  [Task 5](#task-5-iterative-calculation-of-sn-series)

***

## Task 1

The program is designed to calculate the sum of all even numbers in a given integer range (inclusive). The user enters two boundary numbers. To ensure correct range processing, the program automatically swaps the numbers using std::swap if the first input is greater than the second.

The core calculation is performed by the function even_sum, which is implemented **recursively**. It processes the range by:
1.  Checking if the current number is even; if so, it is added to the total sum.
2.  Recursively calling itself with the next number in the sequence.

**Example:** For the range defined by numbers **3** and **10**, the program will sum **4, 6, 8, and 10**, resulting in **28**. This task demonstrates the effective use of recursion as an alternative to standard loops for sequence processing, handling conditional logic, and automatic range boundary processing in C++. Input validation is included to prevent excessive input that could cause program overflow or failure.

***

## Task 2 

The goal of this task is to calculate the sum of the numerical series **S = 1/2 + 3/4 + 5/6 + ... + (2n-1)/(2n)** up to a specified term $n$.

The calculation is implemented using a **non-recursive (iterative) approach** with a loop. The program reads the integer $n$ from the user and then proceeds to calculate the sum by iterating from $k=1$ to $n$, where each term $k$ is $\frac{2k-1}{2k}$. The result is returned as a floating-point number.

This task emphasizes the ability to translate a mathematical series into an efficient iterative algorithm.

***

## Task 3 

This task involves calculating the sum of the series **S = 1/2 + 3/4 + 5/6 + ... + (2n-1)/(2n)**, identical to **Task 2**, but requires the implementation to be **recursive**.

The program reads the integer $n$ from the user. The recursive function calculates the sum by:
1.  Identifying the $n$-th term.
2.  Adding the $n$-th term to the result of the recursive call for the $(n-1)$-th term.
3.  The base case for the recursion is $n=0$ or $n=1$.

This task demonstrates the recursive programming paradigm and contrasts it with the iterative solution from **Task 2**.

***

## Task 4 

The program is designed to calculate the **Greatest Common Divisor (GCD)** and the **Least Common Multiple (LCM)** of two positive integers, $A$ and $B$, provided by the user.

1.  **GCD** is found using the efficient **Euclidean algorithm** implemented in a non-recursive (iterative) function.
2.  **LCM** is then calculated using the relationship: $\text{LCM}(A, B) = \frac{|A \cdot B|}{\text{GCD}(A, B)}$.

The program handles user input, ensuring the numbers are positive, and then outputs both the GCD and LCM of the pair. This task highlights the implementation of a classical algorithm and the relationship between the two fundamental number theory concepts.

***

## Task 5 

This assignment requires the calculation of the sum of the series **S(n)** defined by the following expression: **S(n) = 1/(1*3) + 1/(3*5) + 1/(5*7) + ... + 1/((2n-1)(2n+1))**.

The sum is calculated using an **iterative algorithm** (a loop) up to the user-specified number of terms, $n$. Each term in the series is a fraction where the denominator is the product of two consecutive odd numbers.

This task focuses on translating a complex series formula into an iterative program and managing floating-point arithmetic for accurate sum calculation.
