/**************************************************************
Name: CJ Carroll
Class: CS1C
Professor: John Kath
Assignment: HW06 - Recursion
Due Date: 06/29/2021
**************************************************************/
#include <iostream>
#include <string>

using namespace std; 

/********************************************************************************
int reverse

This function is designed to take in a string, and two positive integers.
(NOTE: string or integers are initialized through the program, not through
the user)
From the integer 'first' to the integer 'last' the substring in that range 
is reversed using the std::swap() function. The function first checks to see 
if 'first' and 'last' are eqaul, or if 'first' is one value less than 'last'.
Otherwise, the two selected elements of a string labeled by integers are swapped,
and the function is them called again, but incrementing 'first' and decrementing 
'last', and repeating until the above conditions are met. 

RETURN: 0

pre: string, two positive int's
post: string modified to reverse elements between the two 
	  ints, one being the first element to be modified, the other 
	  being the last element in the range modified
*********************************************************************************/
int reverse(string& str, int first, int last) {

	if (first == last) {
		return 0;
	}
	else if (first == last - 1) {
		return 0; 
	}//endif

	swap(str[first], str[last]); //swaps elements at 'first' and 'last'

	return reverse(str, ++first, --last); //calls function again 
}
/**********************************************************************************
HW06

This assignment demonstrates the concept of recursion. We have a string 
with the value "abcdefghijklmnopqrstuvwxyz" and we have two indices 
predetermined. the string will get reversed from the first indice to the last
while the elements out of range are untouched, all using the idea of recursion to
do it.
**********************************************************************************/

int main() {

	string str = "abcdefghijklmnopqrstuvwxyz"; //string 
	int  first = 0, last = 0; //indices

	
	cout << "String str: " << str << "\n";
	first = 11, last = 18; 
	cout << "Reversing letters 12-19. . . " << endl;
	reverse(str, first, last);
	cout << "Results: " << str << endl << endl; 

	str = "abcdefghijklmnopqrstuvwxyz"; 
	cout << "Reverting str to initial status: " << str << endl; 
	first = 4, last = 22;
	cout << "Reversing letters 5-23. . . " << endl; 
	reverse(str, first, last);
	cout << "Results: " << str << endl<< endl; 

	str = "abcdefghijklmnopqrstuvwxyz";
	cout << "Reverting str to initial status: " << str << endl;
	first = 0, last = 25; 
	cout << "Reversing entire string. . . " << endl; 
	reverse(str, first, last);
	cout << "Results: " << str << endl << endl;

	 
	/************************************************************************************************
	EC
	using iterative application instead of recursive application, we can see some
	similarities between the two ways. While the main process is the same, how it's 
	implemented is different. The loop checks the value if the 'first' value is less than
	the 'last' value. The loop will keep going as long as this statement is true, and will
	increment the 'first' and decrement 'last' with each iteration. The recusrive application
	will return if 'first' is equal to 'last' or if it is eqaul to 'last' minus one. The iterative 
	application will check to see if values are true in order to keep going, while the recursive 
	application checks for a value to be true in order to terminate it. 
	************************************************************************************************/
	cout << "***** NOW TESTING ITERATIVE METHOD *****\n";
	str = "abcdefghijklmnopqrstuvwxyz";
	cout << "Reverting str to initial status: " << str << endl;
	first = 11, last = 18;
	cout  << "Reversing letters 12-19. . . " << endl;
	for (first, last; first < last ; first++, last--) {
	swap(str[first], str[last]);
	 }//endfor
	cout << "Results: " << str << endl << endl;

	str = "abcdefghijklmnopqrstuvwxyz";
	cout << "Reverting str to initial status: " << str << endl;
	first = 4, last = 22;
	cout << "Reversing letters 5-23. . . " << endl;
	for (first, last; first < last; first++, last--) {
		swap(str[first], str[last]);
		 }//endfor
	cout << "Results: " << str << endl << endl;

	str = "abcdefghijklmnopqrstuvwxyz";
	cout << "Reverting str to initial status: " << str << endl;
	first = 0, last = 25;
	cout << "Reversing entire string. . . " << endl;
	for (first, last; first < last; first++, last--) {
		swap(str[first], str[last]);
		
	}//endfor
	cout << "Results: " << str << endl << endl;

	return 0; 
}

