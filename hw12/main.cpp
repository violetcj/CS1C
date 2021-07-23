/**********************************
 * Name: CJ Carroll
 * Assignment 12: Queue(Template)
 * Class: CS1C
 * Section: 7/22/21; M-Th 3:00-5:20
 **********************************/
#include <iostream>
#include <memory>

using namespace std;

const int MAX_SIZE = 25;

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
        if(isFull()){

            cout << "The Queue is full" << endl;
            return;
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            arr[rear] = value;
            count++;
        }
        else {
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
        if(isEmpty()){

            cout << "The queue is empty" << endl;
            return arr[front];
        }
        else if(front == rear){
            frontValue = arr[front];
            front = -1;
            rear = -1;
            return frontValue;
        }
        else{
            frontValue = arr[front];

            for(int i = 0; i < rear - 1; i++){
                arr[i] = arr[i+1];
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

    Queue<int> numQ;
    Queue<string>strQ;
    Queue<string>asgnQ;
    Queue<double>dQ;

    //testing isEmpty
    cout << "Testing isEmpty on numQ" << endl;
    if(numQ.isEmpty()){
        cout << "Queue is empty" << endl << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl << endl;
    }

    //adding values for double queue
    cout << endl << "Adding values to double queue" << endl << endl;
    dQ.enqueue(9.0);
    dQ.enqueue(15.25);
    dQ.enqueue(98.2);
    dQ.enqueue(0.002);
    dQ.enqueue(55);
    dQ.enqueue(1.233);
    dQ.enqueue(4.56);



    //adds values for int queue
    cout << endl << "Filling int queue" << endl;
    for(int i = 0; i < MAX_SIZE; i++){
        numQ.enqueue(i);
    }

    //demo filling partial string queue
    cout << endl << "Filling string queue with a couple of values* NOT FULLY*" << endl;
    strQ.enqueue("Hello");
    strQ.enqueue("World");
    strQ.enqueue("Sweet");

    cout << "Printing str, int, and double queues" << endl;
    cout << "Int: " << endl;
    numQ.PrintQ();
    cout << endl << "String: " << endl;
    strQ.PrintQ();
    cout << endl << "Double" << endl;
    dQ.PrintQ();

    //demo copy ctr
    cout << "Copying integer based queue" << endl;
    Queue<int>copyNum = numQ;
    cout << endl << "Printing copied Queue" << endl;
    copyNum.PrintQ();

    //testing isEmpty
    cout << "Testing isEmpty on copyNum" << endl;
    if(numQ.isEmpty()){
        cout << "Queue is empty" << endl << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl << endl;
    }

    //testing isFull and printing current values of strQ
    cout << "Printing partially filled string queue and demo isFull" << endl;
    if(strQ.isFull()){
        cout << "The string queue is full" << endl << endl;
    }
    else {
        cout << "The string queue is not full" << endl << endl;
    }
    strQ.PrintQ();

    //testing size member function
    cout << endl << "Grabbing size of both copied int queue and string queue" << endl;
    cout << "Int Queue: " << copyNum.size() << endl;
    cout << "String Queue: " << strQ.size() << endl;

    cout << "Popping two elements from copyNum Queue" << endl;
    copyNum.dequeue();
    copyNum.dequeue();

    cout << "Printing updated copyNum Queue" << endl;
    copyNum.PrintQ();

    cout << endl << "Testing assignment operator" << endl;
    asgnQ = strQ;

    cout << endl << "Printing assignment queue" << endl;
    asgnQ.PrintQ();

    cout << endl << "Testing front member function" << endl;

    cout << "strQ: " << strQ.Front() << endl;
    cout << "copyNum: " << copyNum.Front() << endl;

    return 0;
}
