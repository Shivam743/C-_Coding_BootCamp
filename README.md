# C++ Coding Bootcamp

This repository contains my C++ practice solutions organized by days.

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
