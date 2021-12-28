# 0x01-math_sequence

## 0. The Heron sequence
The Heron sequence is defined by: un+1 = 1/2 (un + (b/un)) with u0 = 1.

Write a function that return the Heron sequence until having convergence with an error less or equal to 10^-7.

* Prototype: t_cell *heron(double p, double x0);
* You must use linked lists.

## 1. The Fibonacci sequence
The Fibonacci sequence is defined by: Fn = Fn-1 + Fn-2 is valid for n > 2 with F1 = F2 = 1.

Code the Fibonacci sequence until having a geometric behavior. How can we deduce the gold number ?

* Prototypes: t_cell *Fibonnaci(); double gold_number(t_cell *head);
* You must use linked lists.
* You can use the library <math.h> in your code