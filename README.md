# C++ Coding Bootcamp

Welcome to my C++ Coding Bootcamp journey! This repository contains my daily progress, assignments, and projects as I learn C++ programming.

## 📁 Project Structure

```
C-_Coding_BootCamp/
├── day1/              # Introduction to C++ and basic array operations
├── day2/              # C++ fundamentals
├── day3/              # Control structures and functions
├── day4/              # More C++ concepts
├── day5/              # Advanced programming concepts
├── day6/              # Object-oriented programming basics
├── day7/              # Classes and objects
├── day8/              # C++ Arrays and array operations
├── day9/              # Advanced array concepts
├── day10/             # Data structures
├── day11/             # Advanced topics
├── day12/             # Project work
├── day13/             # Revision and review
├── HomeworkWeekOne/   # First week's homework assignments
└── assigment2/        # Second major assignment
```

## 🎯 Daily Progress

### Week 1
- **Day 1**: Introduction to C++, basic array operations (finding min/max values)
- **Day 2**: C++ fundamentals and basic syntax
- **Day 3**: Control structures and functions
- **Day 4**: More C++ programming concepts
- **Day 5**: Advanced programming concepts

### Week 2
- **Day 6**: Introduction to Object-Oriented Programming
- **Day 7**: Classes and Objects
- **Day 8**: C++ Arrays and array operations
- **Day 9**: Advanced array concepts
- **Day 10**: Data structures implementation

### Week 3
- **Day 11**: Advanced C++ topics
- **Day 12**: Project work
- **Day 13**: Revision and review session

## 💻 Projects and Assignments

### Homework Week One
Contains the first week's homework assignments focusing on:
- Basic C++ syntax
- Control structures
- Functions
- Array operations

### Assignment 2
A more comprehensive assignment covering:
- Advanced C++ concepts
- Problem-solving exercises
- Practical applications

## 🛠️ Development Environment

- **IDE**: Visual Studio Code
- **Compiler**: C++ compiler (as configured in .vscode)
- **Version Control**: Git

## 📝 Code Examples

### Day 1 Example (Finding Min/Max in Array)
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

## 🚀 Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/C-_Coding_BootCamp.git
   ```

2. Navigate to specific day's folder to view code:
   ```bash
   cd day1  # or any other day folder
   ```

3. Compile and run the code:
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
- Review the code
- Suggest improvements
- Report issues
- Share your own solutions

## 📄 License

This project is open source and available under the MIT License.

---

Happy Coding! 🚀
