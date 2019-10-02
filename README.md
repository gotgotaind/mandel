# mandel
Mandelbrot generator in c++

## Instructions for running the project

`g++ -std="c++17" ./mandel.cpp ./image.cpp -o mandel`
Then run `./mandel`

## Overview of the code structure

`mandel.cpp` contains `main` and initializes the global parameters.
* the image resolution
  * l for length is the number of horizontal pixels
  * h for heigth is the number of vertical pixels
* max_iter is the maximum number of iteration used to decide if the mandelbrot function converges
* z_min and z_max are complex numbers defining respectively the lower left and higher right corners of the rectangle in complex space that we will compute
* fn is the name of the file that will be generated

then main creates img, an `image` object of size l,h.  
`img.draw(z_min,z_max,max_iter)` computes the mandelbrot set for z_min,z_max rectangle using max_iter as the maximum number of iterations for mandelbrot convergence test.  
`img.write(fn)` writes the computed image to the file named fn.

`image.hpp` contains the image class definition, methods prototypes, and some getters/setters implementation

`image.cpp` contains `image.draw(...)` and `image.write(...)` implementation

## How the submission satisfies the necessary rubrics

### README (All Rubric Points REQUIRED)

#### A README with instructions is included with the project

This is the README.
Instructions for running the project are provided above.
No additional library is needed to build the project.

#### The README indicates which project is chosen.

The project chosen is drawing the Mandelbrot set.  
The file and class structure is described above.  
The expected output of the program is a .ppm image file showing part of the Mandelbrot set.

#### The README includes information about each rubric point addressed.

This is exactly what you're reading right now.

### Compiling and Testing (All Rubric Points REQUIRED)

#### The submission must compile and run.

I hope it does. It does on my Ubuntu vm.

### Loops, Functions, I/O

The project demonstrates an understanding of C++ functions and control structures. 1 point.  
The project reads data from a file and process the data, or the program writes data to a file. 1 point.  

### Object Oriented Programming

The project uses Object Oriented Programming techniques. The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. 1 point.  
Classes use appropriate access specifiers for class members. All class data members are explicitly specified as public, protected, or private. 1 point.  

### Memory Management

The project uses smart pointers instead of raw pointers. 1 point.

## Review the rubrics.
### The application satisfes all criteria for the “README” and “Compiling and Testing” sections.
### The application satisfes at 5 total criteria from the rest of the rubric (not all rubric items need to be satisfied in order to pass the project).

