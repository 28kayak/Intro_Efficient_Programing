# compiler_options
`compiler_options.cpp` is a c++ program that test for how execution time will differ based on the optimization level for GNU CPP compiler. 


## compiling usage 
```sh
g++ [-Olevel] compiler_options.cpp  [-o output file]
```


## g++  compler option flags 
  
| option | option level | elapse time|
| ------ | ------ | ------ |
| -O0 | optimization for compilation time (default) |  12.0000000 |
| -O1 or -O | optimization for code size and execution time | 2.0000000|
| -O2 | optimization for more code size and execution time | 2.0000000|
| -O3| optimization for code size and execution time | 2.0000000|
| -Os | optimization for code size | 2.0000000|
| -Ofast | O3 with fast none accurate math calculations |  2.0000000|
