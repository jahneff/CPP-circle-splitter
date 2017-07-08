# circle_splitter
: A challenge from r/dailyprogrammer, a challenge to find the smallest circle enclosing half given points.

Input is a number n of points followed by 10 x-y coordinate pairs. <br />
Output is the midpoint and radius of the smallest circle to encompass exactly n/2 points <br /> <br /> 
**Example run:** <br />
Input: <br /> 
12 <br />
0.249, 0.138 <br />
0.5898, 0.7145 <br />
0.1579, 0.2159 <br />
0.7637, 0.3559 <br />
0.6332, 0.0621 <br />
0.1879, 0.5966 <br />
0.0952, 0.1265 <br />
0.053, 0.5185 <br />
0.106, 0.8368 <br />
0.7001, 0.8473 <br />
0.7475, 0.0257 <br />
0.0008, 0.6051 <br />


Output:  <br />
.1249 .37155 <br />
.264474 <br />

Is this correct? It appears to be. Here is an image generated at https://jsfiddle.net/gjkdc8hL/:<br />
The red dots are the inputs and the green circle is given by the output. <br />

https://github.com/jahneff/circle_splitter/blob/master/img/bounding_circle.PNG
<br />
There are 6 dots on the inside and 6 dots outside the circle (the edge counts as inside). Also, it appears to be the smallest possible circle to be able to enclose 6 of the points.   

