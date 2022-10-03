# PID_Controller
---
- Driver : Koundinya Vinnakota
- Navigator : Mayank Sharma

## Dependencies
- C++ 
- CMake
- googletest
- Travis CI
- Coverals
- cpplint
- cppcheck
## Steps to run the project
```
cd Pair_1_PID
mkdir build
cd build
cmake ..
make
Run program: ./app/PID
```

## Steps to Run Code Coverage 
```
cd build
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
firefox ./coverage/index.html


## Class Diagram 
![Class Diagram](Class_diagram.png "Class Diagram")
