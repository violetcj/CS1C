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

using namespace std;

const int MAX_SIZE = 5;

/*********************************************************
 * ExceptionQueueIsFull
 *
 * derived class of the std::exception class.
 * Modifies the what() virtual function of the base class
 * to return "Queue is full!"
 *******************************************************/
class ExceptionQueueIsFull : public exception{
public:
    const char* what() const noexcept {return "Queue is full!\n";}
};

/*****************************************************************
 * ExceptionQueueIsEmpty
 *
 * derived class of the std::exception class. Modifies the what()
 * virtual function of its base class to return "Queue is empty!"
 *****************************************************************/
class ExceptionQueueIsEmpty : public exception{
public:
    const char* what() const noexcept {return "Queue is empty!\n";}
};

template<typename T>
class Queue{

private:
    int front;           //front of queue
    int rear;            //rear of queue
    int count;           //size of queue
    unique_ptr<T[]> arr; //array holding queue elements

public:
    //default ctr
    Queue() : front(-1), rear(-1), count(0){ arr = make_unique<T[]>(MAX_SIZE); }

    //destructor
    ~Queue(){ arr.release(); }

    //copy ctr
    Queue(const Queue& source)
            : front(source.front), rear(source.rear), count(source.count) {

        arr = make_unique<T[]>(MAX_SIZE);
        for(int i =0; i <= source.rear; i++){
            arr[i] = source.arr[i];
        }
        cout << "Copy CTR invoked" << endl;
    }

    //move ctr
    Queue(Queue&& source){
        front = source.front;
        rear = source.rear;
        count = source.count;
        arr = source.arr;
        source.front = 0;
        source.rear = 0;
        source.court = 0;
        source.arr = nullptr;
        cout << "Move CTR invoked" << endl;
    }
    /*******************************************************************
     * enqueue
     *
     * will add an element to the back of the queue. checks to see
     * if the Queue is full and if the queue is empty. It will add an
     * element if the queue is empty or if it isn't full. Will return
     * itself if the queue is full.
     *
     * Pre:
     * Post: one new element added to the queue if not full
     ******************************************************************/
    void enqueue(T value){
            if (isFull()) {
                throw ExceptionQueueIsFull();

            } else if (isEmpty()) {
                front = 0;
                rear = 0;
                arr[rear] = value;
                count++;
            } else {
                ++rear;
                arr[rear] = value;
                count++;
            }

    }
    /**************************************************************
     * dequeue
     *
     * will delete the front value in the queue if it isn't empty.
     *
     * Pre:
     * Post: have front element deleted from queue
     *************************************************************/
    T dequeue(){
        T frontValue;
            if (isEmpty()) {

                throw ExceptionQueueIsEmpty();

            } else if (front == rear) {
                frontValue = arr[front];
                front = -1;
                rear = -1;
                return frontValue;
            } else {
                frontValue = arr[front];

                for (int i = 0; i < rear - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                rear--;
                return frontValue;
            }
    }
    /***********************************************
     * Front
     *
     * returns the front value of the queue, won't
     * modify the value at all. Will inform the user
     * if the queue is empty
     *
     * Pre:
     * Post: front value returned
     *********************************************/
    T Front() {
        if (isEmpty()) {
            cout << "Queue is empty, there is no front to show" << endl;
            return arr[front];
        } else
            return arr[front];

    }
    /*****************************************
     * size
     *
     * Returns the current size of the queue
     *
     * Pre:
     * Post: current size of queue
     ****************************************/
    int size() { return count; }
    /**************************************************************
     * isEmpty
     *
     * checks to see if the queue is currently empty. returns true
     * if it is, false if it isn't
     *
     * Pre:
     * Post: returns boolean value.
     **************************************************************/
    bool isEmpty(){

        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }

    }
    /************************************************************
     * isFull
     *
     * checks to see if the queue is full. returns true
     * if it is. false if it isn't
     *
     * Pre:
     * Post: boolean value determining if queue is full or not
     ***********************************************************/
    bool isFull(){
        if(rear == MAX_SIZE- 1){
            return true;
        }
        else {
            return false;
        }
    }
    /****************************************************************
     * PrintQ
     *
     * Will print the current values in the queue from first to last
     *
     * Pre:
     * Post: Printed values of all the elements of the queue
     ***************************************************************/
    void PrintQ(){
        for(int i = 0; i <= rear; i++){
            cout << "Queue #" << i + 1 << ": " << arr[i] << endl;
        }
    }

    //copy assignment
    Queue& operator=(const Queue& rhs){
        arr.release();
        arr = make_unique<T[]>(MAX_SIZE);
        for(int i = 0; i <= rhs.rear; i++){
            arr[i] = rhs.arr[i];
        }
        front = rhs.front;
        rear = rhs.rear;
        count = rhs.count;

        return *this;
    }

    //move assignment
    Queue& operator=(Queue&& rhs){
        arr.release();
        arr = move(rhs.arr);
        rhs.front = 0;
        rhs.rear = 0;
        rhs.count = 0;
        rhs.arr.release();
        return *this;
    }

};


int main() {

    Queue<int> intQ;
    Queue<string> strQ;
    Queue<double> douQ;

    for(int i = 0; i < 6; i++)
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
