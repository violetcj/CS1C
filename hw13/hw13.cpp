/**********************************
 * Name: CJ Carroll
 * Assignment 13: Exceptions
 * Class: CS1C
 * Section: 7/22/21; M-Th 3:00-5:20
 **********************************/
#include <iostream>
#include <memory>
#include <assert.h>
#include <exception>
#include "Queue.h"

using namespace std;

int main() {

    Queue<int> intQ;
    Queue<string> strQ;
    Queue<double> douQ;

    for(int i = 0; i < MAX_SIZE; i++)
        intQ.enqueue(i);

    cout << "Testing assert macro on empty Queue with isFull: " << endl;
    assert(intQ.isFull());
    cout << "Passed Assertion" << endl;

    cout << "Testing assert macro on empty Queue with isEmpty: " << endl;
    assert(douQ.isEmpty());
    cout << "Passed Assertion" << endl;

    cout << "Trying to use dequeue on an empty queue, utilizing ExceptionQueueIsEmpty" << endl;
    try {
        strQ.dequeue();
    }
    //catches exception that was thrown in dequeue
    catch (exception& ex) {
        cout << ex.what();

    }
    cout << "Continuing program. . ." << endl;
    cout << "Trying to add an element to a full queue, utilizing ExceptionQueueIsFull" << endl;
    try {
        intQ.enqueue(MAX_SIZE);
    }
    //catches exception that was thrown in enqueue
    catch(exception& ex){
        cout << ex.what();
    }
    cout << "Continuing Program. . ." << endl;

    cout << "Failing assert macro purposely, testing if strQ(which is empty) is full" << endl;
    assert(strQ.isFull());

    return 0;
}
