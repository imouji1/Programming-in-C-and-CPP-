#ifndef STACK_H_
#define STACK_H_
#define MAX 10
#include <iostream>

using namespace std;

template <class T>
class Stack{
    private:
        T *arr;
        int size;
        int index;
    public:
        Stack();
        Stack(const Stack&);
        Stack(int);
        bool push(T element);
        bool pop(T& out);
        T back(void);
        int getNumEntries();
        ~Stack();
};

template<typename T>
Stack<T>::Stack()
{  
    size = 10;
    arr = new T[size];
    index = 0;
}

template<typename T>
Stack<T>::Stack(const Stack& c)
{
    size = c.size;
    arr = new T[size];
    for(int i = 0; i < c.size; i++)
    {
        arr[i] = c.arr[i];
    } 
    index = c.index;
    
}

template<typename T>
Stack<T>::Stack(int newsize)
{
    size = newsize;
    arr = new T[size];
    index = 0;
}

template <typename T>
bool Stack<T>::push(T elem)
{
    if(index >= size){
        std::cout << "The stack is full" << std::endl;
        return false;}
    else {
        arr[index] = elem;
        index++;
        return true;}
}

template <typename T>
bool Stack<T>::pop(T& out)
{
    if(index == 0) {
        cout << "Stack is empty" << endl;
        return false;}
    out = arr[index]; 
    index--;
    //go over thisss;
}

template<typename T>
T Stack<T>::back(void)
{
    return arr[index];
}

template<typename T>
int Stack<T>::getNumEntries()
{
    return index;
}
template <typename T>
Stack<T>::~Stack()
{
    delete[] arr;
}

#endif // STACK_H_ 