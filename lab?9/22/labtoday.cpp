/*
functions in C++:
P: make a euclidean distance function in 2D, Pythag theorem
    a^2+b^2=c^2.
Question:
1. what is euclidean distance? A- in any space, given two points, the euclidean distance between those two points is the shortest distance connecting those points.
2. what is meant by 2D? A- a two dimesional space, meaning 2 axis of measure.
3. are units required? A-no.
4. what is a function? A- ????
5. what is distance? A- measurable space
6. who is euclid? A- math god, dare i say math jesus
7. why are we doing this? A- to learn what a function is specifically in c++
8. what is Pythag? A- short for pythagorus, who was an arithmetician
9. in the equation given, what does it mean? A- a^2 + b^2 = c^2 right triangle, solving for hypotenuse
10. What a & b & c? A- a and b are the side lengths, while c is the hypotenuse. they are integers.

P': we need to create a function that acts on two points of a two
dimensional graph where the function finds the distance between these two points. the graph will 
measured in integer labeled axis. the distance will be calculated using euclidean distance (2D), pythag.
To convert points to to distance calc values we use the standard method. 

standard method: (x,y) (x',y') a= |x'-x|, b= |y'-y|

Q: how might we deal with converting points to distance calc values?

checking language:
1. arithmetic
2. group values (arrays)
3. can use functions
*/

#include<iostream>
#include<cmath>

using std::abs;
using std::cout;
using std::endl;

int p_input(int a[2], int b[2]){
    return abs(a[0]-b[0]);
}

int k_input(int z[2], int v[2]){
    return abs(z[1]-v[1]);
}

int f_inputs (int u, int i){
    int o = u*u + i*i;
    return o;
}

int main() {
    int p1[2] = {1,2};
    int p2[2] = {4,3};

 cout << p_input(p1, p2) << endl;
 cout << k_input(p1, p2) << endl;
 cout << f_inputs(k_input(p1, p2), p_input(p1, p2)) << endl;
    return 0;
}

// for the record i did this about 45 mins after class ended and physically pumped my fists in the air when it worked. Kind of emberassing when im in a diff class. 

