// u know what this is for...
/* 1) Practice the following code daily until u are able to write it yourself!
      ~ func6Prime.cpp
      ~ func7printPrime.cpp
      ~ func8fibonacci.cpp
----------------------------------------------------------*/

//  2) Explanation of addition of binary numbers:
 
/* The concept of binary addition is similar to decimal addition, but it uses only two digits: 0 and 1.
 Here are the basic rules for adding two binary digits (bits):

A	B	Sum	Carry
0	0	0	0
0	1	1	0
1	0	1	0
1	1	0	1
How binary addition works:

Add the rightmost bits first.
If the sum is 2 (i.e., 1+1), write 0 and carry over 1 to the next column.
Continue this process for each bit, moving left.
Example:
   1011   (11 in decimal)
+  1101   (13 in decimal)
--------
 11000   (24 in decimal)

Step-by-step:

Rightmost: 1+1 = 0 (carry 1)
Next: 1+0+1(carry) = 0 (carry 1)
Next: 0+1+1(carry) = 0 (carry 1)
Next: 1+1(carry) = 1
So, the result is 11000.

Summary:

Add each pair of bits.
If the sum is 2, write 0 and carry 1.
If the sum is 3 (1+1+1), write 1 and carry 1.
Continue for all bits, adding any final carry at the leftmost position.
Let me know if you want a C++ code example for binary addition!
Also: We can write how many ever 0 we want before the given binary no. and the value 
will not change , so we can use this ini addition of bimnary numbres.

NOTE : ~ In binary, 3 is 1 with a carry of 1.
       ~ Write 1, carry 1*/
//------------------------------------------------------------------------------------------------------

/* NOTE : If compiling a file if the system ever says that "cannot open output file a.exe",
 then just delete the a.exe file permanently.*/
 //--------------------------------------------------------------------------------------------