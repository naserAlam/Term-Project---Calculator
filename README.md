<div align="center">

# Report On CSE - 103
## Fall 2019 Term Project
### Calculator

### Submitted To   
Tangila Islam Tanni    
*Lecturer   
Department Of CSE   
University Of Liberal Arts Bangladesh*

### Submitted By   
Naser Abdullah Alam
*ID - 193014041   
CSE 413    
<naser.abdullah.cse@ulab.edu.bd>*
</div>

## <div id="toc"> Table of Contents </div>
1. [Introduction](#introduction)
2. [Project Idea](#projectidea)
3. [Project Description](#projectdescription)

## <div id="introduction"> Introduction </div> 
C is a general-purpose programming language that is extremely popular, simple and flexible. It is a machine-independent, structured programming language which is used extensively in various applications.
C was the basic language to write everything from operating systems (Windows and many others) to complex programs like the Oracle database, Git, Python interpreter and more.

## <div id="projectidea"> Project Idea </div>
The project is a console calculator that can perform arithmetic operations (addition, subtraction, division, and multiplication), matrix calculations (addition, subtraction, and multiplication), factorial and exponentiation.
The idea of this project was to include most of the concepts introduced in the Structured Programming course. To build this project concepts of arithmetic operations, conditionals, loops, arrays 1D and 2D and recursion have been used.

## <div id="projectdescription"> Project Description </div>
The project is divided into 4 main components and 9 sub-components. The main function calls upon a main component to perform operation based on user input. List of functions used in the program are defined below:

- simpleArithmetic()  simpleArithmetic is a void type global function. When called by the main function, it asks for a choice, and two float type numbers. Based on the value of the choice operations are performed by calling corresponding functions, then stored in the result, later displayed as output.
  * addition() 
  addition is a float type global function. In the program when it is called by the simpleArithmetic function, it expects two float numbers as parameters and returns the sum. 
  * subtract()
  subtract is a float type global function. In the program when it is called by the simpleArithmetic function, it expects two float numbers as parameters and returns the subtraction.
  * multiply()
  multiply is a float type global function. In the program when it is called by the simpleArithmetic function, it expects two float numbers as parameters and returns the multiplication.
  * divide()
  divide is a float type global function. In the program when it is called by the simpleArithmetic function, it expects two float numbers as parameters and returns the division.


- matrixCalculation()
matrixCalculation is a void type global function. When called by the main function, it asks for an input. Based on the value of the input, operations are performed by calling corresponding functions.
  * matrixAddition()
  matrixAddition is a void type global function. When called, it asks the user to specify the number of rows and columns for two matrices. It then checks if the rows and columns are equal, if equal, it asks the user to enter the two matrices and displays the sum.
  * matrixSubtraction()
  matrixSubtraction is a void type global function. When called, it asks the user for the number of rows and columns for two matrices, then checks if the rows and columns are equal. If equal, it asks the user to enter the two matrices and displays the subtraction.
  * matrixMultiplication()
  matrixMultiplication is a void type global function. When called, it asks the user for the number of rows and columns for two matrices. Then checks if the column of the first matrix is equal to the row of the second matrix. If they are equal, it asks the user to enter the two matrices and displays the multiplication.

- factorial()
  factorial is a void type global function. When called by the main function, it asks for a number to calculate its factorial. Stores the value in the result to display later.
  * multiplyFactorial()
  multiplyFactorial is an int type global function. It assists the factorial function. It takes a number (int type) from factorial() function as a parameter. It recursively calls itself until the number is equal to 1. Then it returns the result.

- exponentiation()
  exponentiation is a void type global function. When called by the main function, it asks for a base and an exponent from the user. It calculates, stores and later displays the result.
  * multiplyBase()
  multiplyBase is an int type global function. It assists the exponentiation function. It takes two parameters, the base and exponent and reclusively calls itself exponent equal to 1. Then it returns the result.
