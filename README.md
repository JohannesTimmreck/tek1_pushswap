# pushswap

This is the second project in the tek1 module Basic C Programming 1.

This is a program to sort a list of integers only using a given set of possible moves.  
The program will printed the moves used to sort the array.

The moves:
- sa swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
- sb swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
- sc sa and sb at the same time.
- pa take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
- pb take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
- ra rotate l_a toward the beginning, the first element will become the last.
- rb rotate l_b toward the beginning, the first element will become the last.
- rr ra and rb at the same time.
- rra rotate l_a toward the end, the last element will become the first.
- rrb rotate l_b toward the end, the last element will become the first.
- rrr rra and rrbat the same time.

Build with the Makefile

Usage: ./pushswap n1 [n2 n3 n4 ...]

n1, n2, n3, n4 ... := integers
