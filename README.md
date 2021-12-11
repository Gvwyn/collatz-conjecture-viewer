# Collatz Conjecture Viewer
*"The Collatz conjecture in mathematics asks whether repeating certain simple arithmetic operations will eventually transform every positive integer into one.
It concerns sequences of integers in which each term is obtained from the previous term as follows: if the previous term is even, the next term is one half
of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that these sequences always reach 1,
no matter which positive integer is chosen to start the sequence."*  
It is also known as the /**3n + 1**/ problem. [Source](https://en.wikipedia.org/wiki/Collatz_conjecture)

## Documentation (help, and other stuff)
### known stuff, i'll fix them one day
- [ ] numbers that eventually exceed the 32/64 bit limit, will halt the program  
- [x] negative numbers, fractions have cool effects
- [ ] anything that is not a number will annihilate the program 

### basics
i have no experience in GUIs, so everything is text based  
**IF YOU ENTER ANYTHING THAT IS NOT A NUMBER, will crash the program**
in the menu, type the number of the function you want to use, then press `ENTER`  
after each functions executes, you're prompted to press `ENTER` (do it after you mesmerized yourself with the result)

### functions, as how to use them
- **[0] EXIT**  
exits the program
- **[1] Reduce to 1:**  
calculates the whole sequence until 1  
outputs how many steps it requires to get there, and the highest number it reached  
requires only **one input**, named "Input" which can be any number[^0]  
-  **[2] Calculate X steps:**  
calculates X steps of the whole sequence  
outputs the Xth number  
requires **two inputs**: base number, which can be any number[^0], and X, the number of sequences
- **[3] Search for X in Y's collatz-sequence:**  
goes through Y's the sequence until X is found   
either outputs how many steps does it required to get to X or tells the user that it's impossible to get to X  
requires **two inputs**: Y, which can be any number[^0], and X, the number you're looking for in Y's sequence  
[^0]: numbers above 0, or any number which sequence doesn't go above the limits (i guess above 2^63, not sure)
