# Classic Cookie Challenge

Problem:
As per my understanding, we will be given a matrix of variable rows and columns. We need to find the 1s that are vertically or horizontally adjacent (not diagonally). 
And with adjacent 1s, we need to form a line. Answer would be an array of sizes of all lines provided in input matrix. 
Note: Answer need not be in any particular order and no restrictions are placed. 

Solution Approach:
1) In my solution, we will take each element in that matrix and check if its a "1". we will walk through all the elements in matrix, one by one.
2) If yes, then we will verify if there are any adjacent "1" in its right/bottom/left/top position. 
3) If yes again, first we mark the present element as "0" and the move over to the identified next position (either right/bottom/left/top). 
4) We will continue this until we reach a element wit no adjacent "1". 
5) The steps 2,3 and 4 is repeated for each element in matrix.  

Code - https://github.com/aravindprasad90/Classic-Cookie-Challenge/blob/master/matrix.c 

Pros of Solution:
Optimized usage of space (only 1 array used). 

Cons of Solution:
1) A array/matrix member may be walked through more than once. 
2) Optimizations in arguments could be possible, Usage of C++ class for it could be more readable and maintainable.

