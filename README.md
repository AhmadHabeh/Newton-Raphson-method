# Newton-Raphson Method Implementation in C++

## Overview
This C++ code implements the Newton-Raphson method, an iterative numerical technique for finding roots of real-valued functions.

## Function Definitions
- `funx(x)`: Represents the function $(f(x) = x^3 + 4x - 5\)$.
- `funx1(x)`: Represents the derivative of the function $(f'(x) = 3x^2 + 4\)$.

## Main Function
- Initializes variables, including the initial guess `x0`, maximum number of iterations `iteration`, accuracy `accurcey`, and a tolerance value `TV`.
- Takes user input for the initial guess `x0`.
- Uses a `while` loop to iteratively apply the Newton-Raphson method.
- In each iteration, calculates the function value `fx` and its derivative `fx1` at the current guess `x0`.
- Calculates the next guess `x1` using the Newton-Raphson formula:
$$x_1 = x_0 - \frac{f(x_0)}{f'(x_0)}$$.
- Continues the loop until either the function value is sufficiently close to zero (`abs(fx) < TV`) or the maximum number of iterations is reached.
- Prints the final root estimate.

## Note
- The accuracy of the result is controlled by the `accurcey` variable, representing the number of decimal places to round to.

