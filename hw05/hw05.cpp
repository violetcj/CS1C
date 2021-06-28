/*****************************************************************************************************************
1. What is the STL? What is a vector?
	- The STL stands for the Standard Template Library. It 
	  contains functions and data structures that are commmonly used
	  throougohut the programming process. 
	- A vector is basically an array without a fixed size. The vector resizes 
	  itself when elements are added and subtracted to it, rather than an array
	  that keeps one size.
2. Which vector operations change the size of the vector after its construction?
   push_back(); adds an element to the back of the vector, while pop_back(); deletes 
   the last element from the vector.
3. What is the STL array container and how does it differ from the built-in array
   and from a vector?
   And STL Array is a type of array that has some of the capabilities of a vector. 
   It has all the capabilities of a built-in array, while having some more flexible 
   capabilities of a vector	
4. How does the vector member function resize() differ from reserve()?
   resize() is used to change the size of the vector whether you want to make the bigger
   or smaller. Reserve()only adds the element but leaves them uninitialized, so push back will start at the beginning. 
   IT basically allocates memeory to the vector.
5. What should begin() and end() do for a container?
   begin() returns the beginning position of a container, while end() returns 
   the end position of the containter. 
6. Give an example of using the vector push_back() modifier.
   
   vector<string>words;           //a type string vector

	for (string temp; cin >> temp;) //for loop takes in valid inputs for temp until 
	{								//something that isn't valid is entered
		words.push_back(temp);      //adds the last entry to the end of the vector and increases size of vector
    }
    this example will add values of type string to a vector, and will use push_back() 
    to add an element, and put the input in that element


*****************************************************************************************************************/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

/*********************************************************************************************************************
vector<int> Lottery(int range, int amount)

this function takes in two integers, one representing the range of what the numbers could be on a lottery card,
and the other representing the amount of spots on the card. The function creates a temporary vector called 
'temp' where its filled with each number in the range from 1-n. The random_shuffle is called to shuffle the elements,
and then the size of the vector is cut to only contain the amount of spots the user entered. 

pre: 2 positive ints representing range of numbers and number of spots
post: a vector int with a size of the 'amount' int containing that many values from the range of numbers given in
      'range' int
**********************************************************************************************************************/
vector<int> Lottery(int range, int amount) {

    vector<int> temp;


    for (int i = 0; i < range; i++) {

        temp.push_back(i + 1);

    }
    random_shuffle(temp.begin(), temp.end());

    temp.resize(amount);

    return temp; 

}
   
/****************************************************************************************************************************
hw05

The program represents a generator for a lottery's winning numbers. Using a vector, the user enters in the range of 
numbers the lottery needs to be and the amount of spots on the card. The vector is then assigned random numbers with how 
many spots the user specified and those numbers are within the range of the range the user specified. The vector's contents
are then outputted to the screen to show which numbers are the winning numbers
*****************************************************************************************************************************/
int main() {

    int range;         //IN: range of numbers
    int amount;        //IN: amount of spots
    vector<int>winner; //MID & OUT: contains winning numbers

    cout << "Enter Range of numbers: ";
    cin >> range;
    cout << "Enter amount of spots: ";
    cin >> amount;

    winner = Lottery(range, amount); //function call
    
    cout << "Winning Numbers: " << endl; 
    for (vector<int>::iterator it = winner.begin(); it != winner.end(); it++) {
        cerr << *it << endl; 
    }//outputs contents using an iterator

    return 0; 
}