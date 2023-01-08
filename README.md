# pkgloves
Arduino version of Stanford Parkinson's gloves developed by Peter Tass

This code is an Arduino program that randomly flashes motors connected to digital pins 2 to 9.

First, constants are defined for each of the digital pins to which the motors are connected.

There is a function called "estaenvector" that takes a value and a vector as arguments and returns true if the value is found in the vector and false otherwise.

This function is used later to ensure that the random values assigned to the motors are unique.

There is also a function called "aleatorio" that takes a pointer to a vector and the size of the vector as arguments.

This function assigns random values to each element of the vector, ensuring that the values are unique.

In the "setup" block, all pins are configured as outputs and all motors are turned off at the start.

In the "loop" block, the "aleatorio" function is called to generate a vector of four random values, then the vector is traversed and the motors corresponding to each value of the vector are turned on.

Then, a delay of 100 milliseconds is waited before moving on to the next element of the vector.

Finally, a delay of 133 milliseconds is waited twice before starting the loop again.
