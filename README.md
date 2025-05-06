# C++ Coding Bootcamp

This repository contains my C++ practice solutions organized by days, covering fundamental C++ concepts and problem-solving exercises.

## 📚 Topics Covered

- C++ Basics
  - Syntax and operators
  - Control flow (if-else, switch)
  - Loops (for, while)
  - Arrays and array operations
  - Pattern printing problems
  - Practice problems and exercises

## 📅 Day-by-Day Progress

### Day 1: Introduction to C++ and Arrays
- Basic array operations
- Finding minimum and maximum values in arrays
- Homework: Array manipulation exercises

### Day 2: C++ Fundamentals
- Basic syntax practice
- Variable declarations and data types
- Input/output operations

### Day 3: Control Structures
- If-else statements
- Switch cases
- Basic program flow control

### Day 4: Loops and Iterations
- For loops
- While loops
- Loop control statements

### Day 5: Advanced Control Flow
- Nested loops
- Complex conditional statements
- Problem-solving with loops

### Day 6: Basic Problem Solving
- Algorithm implementation
- Basic programming challenges
- Code optimization

### Day 7: Advanced Problem Solving
- Complex programming challenges
- Multiple solution approaches
- Code efficiency

### Day 8: Arrays and Patterns
- Array operations (array01.cpp through array06.cpp)
- Pattern printing problems:
  - Mountain pattern (PatternMountain.cpp)
  - Manmohan's patterns (ManmohanLovesPatterns-I.cpp)
  - Unique number counting (NoOfUnique.cpp)
  - Various pattern exercises (pattren.cpp)

### Day 9: Advanced Arrays
- Multi-dimensional arrays
- Array manipulation techniques
- Complex array problems

### Day 10: Pattern Problems
- Advanced pattern printing
- Number patterns
- Character patterns

### Day 11: Problem Solving
- Complex programming challenges
- Algorithm implementation
- Code optimization

### Day 12: Practice Session
- Mixed problem solving
- Previous topics revision
- Advanced challenges

### Day 13: Revision Class
- Comprehensive review
- Important concepts recap
- Problem-solving strategies

## 📁 Repository Structure

```
C-_Coding_BootCamp/
├── day1/              # Basic array operations
├── day2/              # C++ practice
├── day3/              # C++ practice
├── day4/              # C++ practice
├── day5/              # C++ practice
├── day6/              # C++ practice
├── day7/              # C++ practice
├── day8(c++ array)/   # Array operations and patterns
├── day9/              # C++ practice
├── day10/             # C++ practice
├── day11/             # C++ practice
├── day12/             # C++ practice
├── day13/             # Revision class
├── HomeworkWeekOne/   # Week 1 homework
└── assigment2/        # Assignment 2
```

## 🎯 Daily Practice

### Week 1
- **Day 1**: Introduction to C++, basic array operations (finding min/max values)
- **Day 2**: C++ fundamentals and basic syntax practice
- **Day 3**: Control structures practice
- **Day 4**: More C++ programming practice
- **Day 5**: Advanced programming practice

### Week 2
- **Day 6**: Introduction to Object-Oriented Programming practice
- **Day 7**: Classes and Objects practice
- **Day 8**: C++ Arrays practice
- **Day 9**: Advanced array practice
- **Day 10**: Data structures practice

### Week 3
- **Day 11**: Advanced C++ topics practice
- **Day 12**: Practice questions
- **Day 13**: Revision and review questions

## 💻 Practice Questions and Solutions

### Homework Week One
Contains the first week's practice questions focusing on:
- Basic C++ syntax
- Control structures
- Array operations

### Assignment 2
A more comprehensive set of practice questions covering:
- Advanced C++ concepts
- Problem-solving exercises
- Practical coding challenges

## 🛠️ Development Environment

- **IDE**: Visual Studio Code
- **Compiler**: C++ compiler
- **Version Control**: Git

## 📝 Code Examples

### Day 1 Example (Array Operations)
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int min_val = arr[0];
    int max_val = arr[0];
    
    for (int num : arr) {
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }
    
    cout << "Minimum value: " << min_val << endl;
    cout << "Maximum value: " << max_val << endl;
    return 0;
}
```

### Day 8 Examples (Array and Patterns)
- Array operations (array01.cpp through array06.cpp)
- Pattern printing (PatternMountain.cpp)
- Unique number counting (NoOfUnique.cpp)
- Pattern problems (ManmohanLovesPatterns-I.cpp)

## 🚀 Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/C-_Coding_BootCamp.git
   ```

2. Navigate to specific day's folder:
   ```bash
   cd day1  # or any other day folder
   ```

3. Compile and run:
   ```bash
   g++ filename.cpp -o filename
   ./filename
   ```

## 📚 Learning Resources

- [C++ Documentation](https://en.cppreference.com/)
- [Learn C++](https://www.learncpp.com/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

## 🤝 Contributing

Feel free to:
- Review the solutions
- Suggest improvements
- Report issues
- Share your own solutions

## 📄 License

This project is open source and available under the MIT License.

---

Happy Coding! 🚀
