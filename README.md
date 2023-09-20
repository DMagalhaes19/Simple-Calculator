# Mathematical Operations Program

This C++ program is a command-line utility that allows users to perform various mathematical operations, including trigonometric functions, logarithms, exponentiation, basic arithmetic, statistics, and more. The program provides a menu-driven interface for selecting and executing these operations.

## Table of Contents
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Available Operations](#available-operations)
- [Code Structure](#code-structure)
- [Error Handling](#error-handling)
- [Platform Considerations](#platform-considerations)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To use this program, you'll need a C++ compiler installed on your system.

1. Clone this repository to your local machine:

2. Navigate to the project directory:

3. Compile the program:

4. Run the program:

## Usage

Upon running the program, you will see a menu with a list of available mathematical operations. You can select an operation by entering the corresponding number. The program will then prompt you for any required input (e.g., numbers for calculations).

Follow the on-screen instructions to perform the desired mathematical operation. The program will display the result of the operation.

## Available Operations

The program provides the following mathematical operations:

1. Sine
2. Cosine
3. Tangent
4. Cotangent
5. Secant
6. Cosecant
7. Logarithm (base e)
8. Logarithm (base 10)
9. Logarithm (base 2)
10. Exponential
11. Power
12. Square Root
13. Factorial
14. Modulus
15. Absolute Value
16. Ceiling (Round up)
17. Floor (Round down)
18. Round
19. Random Number
20. Maximum of a List
21. Minimum of a List
22. Average of a List
23. Sum of a List
24. Difference of a List
25. Multiplication of a List
26. Division of a List
27. Median of a List
28. Mode of a List
29. Range of a List
30. Standard Deviation of a List
31. Variance of a List
32. Clear Screen
33. Exit

## Code Structure

The program's code is structured as follows:

- The `main()` function contains the main program logic, including the menu-driven interface and function calls based on user input.
- Individual functions are defined for each mathematical operation, providing modularity and readability.
- The program uses the C++ Standard Library to perform operations and handle input/output.

## Error Handling

The program assumes that the user will enter valid input. However, you should be cautious when entering values to avoid division by zero or other undefined behaviors. Future enhancements may include improved error handling.

## Platform Considerations

- The program uses the `system("clear")` command to clear the screen, which is platform-specific. It works on Linux and macOS but may require adjustments for Windows or other operating systems.

## Contributing

Contributions to this program are welcome. Feel free to open issues or submit pull requests to improve its functionality, add new operations, or enhance error handling.

## License

This program is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
