# StorwellQuiz

2a) Using these set of points we can attest that the function f(A) corresponds to the following algorithm.

Generate the encoded patterns:
The core part of the algorithm is the generate_patterns function. For each row, it calculates the difference between the current row number and the previous row number (if exists). The difference represents the number of characters that are different between the current string and the previous string.

Construct the pattern:
If the difference is less than the length of the current string, the algorithm extracts a substring from the beginning of the current string with a length equal to the difference. This substring is stored as the pattern.

Generate the encoded string:
The algorithm constructs the encoded string by replacing all occurrences of the pattern in the original string with either 'P' or 'M', depending on the row number's parity. If the row number is even, it uses 'P'; otherwise, it uses 'M'.


Q2 b) Once the f(Ai) is found, what would be the output for the following inputs?
f(30001) = Pv5
f(55555) = M7
f(77788) = nIv

c) The upper limit or maximum range of this function is limited by the data type used to store the row numbers and the size of the string. The primary concerns are integer overflow and string size limitations. This function can handle input data with up to tens of thousands of rows without significant performance problems, given that the size of the strings is reasonable. However, the exact upper limit can vary based on the available system memory and the specific hardware and environment in which the script is running