Bit Manipulation in C

Bit manipulation is the process of working with individual bits of data rather than the entire data itself. C provides a number of operators that allow you to manipulate individual bits of a number. Bit manipulation is often used in low-level programming and embedded systems, where memory is limited, and performance is critical.

Bitwise Operators
In C, there are six bitwise operators that you can use to manipulate individual bits of a number. These operators work on the binary representation of the numbers. The bitwise operators are:

& (bitwise AND)
| (bitwise OR)
^ (bitwise XOR)
~ (bitwise NOT)
<< (left shift)
>> (right shift)
Bitwise AND (&)
The & operator performs a bitwise AND operation between two numbers. It sets each bit of the result to 1 if and only if both corresponding bits of the input numbers are 1. Otherwise, it sets the bit to 0.

Bitwise OR (|)
The | operator performs a bitwise OR operation between two numbers. It sets each bit of the result to 1 if either corresponding bit of the input numbers is 1. Otherwise, it sets the bit to 0.

Bitwise XOR (^)
The ^ operator performs a bitwise XOR operation between two numbers. It sets each bit of the result to 1 if the corresponding bits of the input numbers are different (i.e., one is 1 and the other is 0). Otherwise, it sets the bit to 0.

Bitwise NOT (~)
The ~ operator performs a bitwise NOT operation on a number. It inverts all the bits of the input number. For example, the NOT of 0010 (decimal 2) is 1101 (decimal 13).

Left Shift (<<)
The << operator performs a left shift operation on a number. It shifts all the bits of the number to the left by a specified number of positions. For example, 0010 (decimal 2) left-shifted by one position becomes 0100 (decimal 4).

Right Shift (>>)
The >> operator performs a right shift operation on a number. It shifts all the bits of the number to the right by a specified number of positions. For example, 0010 (decimal 2) right-shifted by one position becomes 0001 (decimal 1).

Conclusion
Bit manipulation is a powerful technique that allows you to work with individual bits of data, making it useful in a variety of applications, such as cryptography, data compression, and embedded systems.
