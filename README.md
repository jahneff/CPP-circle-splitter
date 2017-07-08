# circle_splitter
From r/dailyprogrammer, a challenge to find the smallest circle around half the possible points.

Input is a number n of points followed by 10 x-y coordinate pairs. <br />
Output is the midpoint and radius of the smallest circle to encompass exactly n/2 points <br /> <br /> 
**Example run:** <br />
Input: <br /> 
10 <br />
0.967, 0.8854 <br />
0.6288, 0.7456 <br />
0.267, 0.3107 <br />
0.2174, 0.8512 <br />
0.9084, 0.6763 <br />
0.9336, 0.8011 <br />
0.4901, 0.5871 <br />
0.1003, 0.5239 <br />
0.9876, 0.1403 <br />
0.8595, 0.9555 <br /><br />

Output:  <br />
.5629 .76375 <br />
.356396 <br />

Is this correct? It appears to be. Here is an image generated at https://jsfiddle.net/gjkdc8hL/:<br />
The red dots are the inputs and the green circle is given by the output. <br />

https://github.com/jahneff/circle_splitter/blob/master/bounding_circle.PNG
