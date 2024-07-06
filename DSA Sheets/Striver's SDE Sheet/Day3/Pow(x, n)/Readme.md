# Problem: Implement `pow(x, n)`

## Description
Implement the function `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., `x^n`).

## Example

1. `pow(2.0, 10)` should return `1024.0`.
2. `pow(2.1, 3)` should return approximately `9.261`.
3. `pow(2.0, -2)` should return `0.25`.

## Approach

### Recursive Approach

1. **Base Case:**
   - If `n` is `0`, return `1` because any number raised to the power of `0` is `1`.
   
2. **Recursive Step:**
   - If `n` is negative, convert the problem to a positive exponent by taking the reciprocal of `x` and making `n` positive.
   - Use the property of exponents to reduce the problem size:
     - If `n` is even, use `pow(x, n) = pow(x * x, n / 2)`.
     - If `n` is odd, use `pow(x, n) = x * pow(x * x, (n - 1) / 2)`.

### Complexity
- **Time Complexity:** O(log n), since the problem size is reduced by half in each recursive step.
- **Space Complexity:** O(log n) due to the recursion stack.

## Pseudocode

```plaintext
function pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        x = 1 / x
        n = -n
    if n % 2 == 0:
        return pow(x * x, n / 2)
    else:
        return x * pow(x * x, (n - 1) / 2)
