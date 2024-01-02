// QUEUE : A linear data structure that works on FIFO principle.
    /*  OPERATIONS : a) push / enqueue
                     b)pop / dequeue
                     c)size
                     d)isEmpty
                     e)front : First element of queue
                     f)peek
                     g)initialize
                     h)isFull    
    */ 

#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;


    q.push(11);    
    q.push(15);    
    q.push(13);    
    q.push(10);    

    
    cout << "Size of queue is : " << q.size() << endl;
    q.pop();
    cout << "Size of queue after pop is : " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is NOT empty" << endl;
        
    }

    cout << "Front element of queue : " << q.front() << endl;
    return 0;
}