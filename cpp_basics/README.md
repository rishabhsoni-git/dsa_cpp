# C++ Basics

Standalone programs for learning C++ before applying it to data structures and
algorithms. Every numbered source file has its own `main()` and can be compiled
independently with C++17 or later.

## Lessons

| File | Topic |
| --- | --- |
| `01_Basic_Structure.cpp` | Program structure, comments, and `main` |
| `02_Input_Output.cpp` | Console input and output streams |
| `03_Variables_DataTypes.cpp` | Variables, data types, and `sizeof` |
| `04_Operators.cpp` | Arithmetic, logical, comparison, and bitwise operators |
| `05_Conditional_statements.cpp` | `if`, `switch`, and conditional expressions |
| `06_Loops.cpp` | Iteration, loop control, and number examples |
| `07_Functions.cpp` | Declarations, definitions, parameters, and return values |
| `08_Patterns.cpp` | Nested-loop pattern exercises |
| `09_Arrays.cpp` | Fixed-size arrays and passing arrays to functions |
| `10_Strings.cpp` | `std::string`, `getline`, and searching |
| `11_Pointers.cpp` | Addresses, dereferencing, and `nullptr` |
| `12_References.cpp` | Aliases and reference parameters |
| `13_Structures.cpp` | User-defined types with `struct` |

Compile a lesson from the repository root, for example:

```sh
g++ -std=c++17 -Wall -Wextra -pedantic cpp_basics/10_Strings.cpp -o strings
./strings
```

Programs that read from standard input prompt for the required values. The code
comments explain concepts and note assumptions where they matter.
