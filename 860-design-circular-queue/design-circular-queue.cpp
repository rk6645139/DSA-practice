class MyCircularQueue {
vector<int>queue;
int capacity;
int front;
int count;
public:
    MyCircularQueue(int k) {
        
        queue.resize(k);
        capacity=k;
        front=0, count=0;

        
        
    }
    
    bool enQueue(int value) {
        if(isFull())return false;
        int rear = (front + count) % capacity;
        queue[rear]=value;
        count++;
        return true;
    }
    //  bool enQueue(int value) {
//         if (isFull()) return false;
//         int rear = (front + count) % capacity;
//         queue[rear] = value;
//         count++;
//         return true;
//     }
    
    bool deQueue() {
        if(isEmpty())return false;
        front=(front+1)%capacity;
        count--;
        return true;
        
    }
    
    int Front() {
        return isEmpty()?-1:queue[front];
        
    }
    
    int Rear() {
        return isEmpty()?-1:queue[(front+count-1)%capacity];
        
    }
    
    bool isEmpty() {
        return count==0;
        
    }
    
    bool isFull() {
        return count==capacity;
        
    }
};

// /**
//  * Your MyCircularQueue object will be instantiated and called as such:
//  * MyCircularQueue* obj = new MyCircularQueue(k);
//  * bool param_1 = obj->enQueue(value);
//  * bool param_2 = obj->deQueue();
//  * int param_3 = obj->Front();
//  * int param_4 = obj->Rear();
//  * bool param_5 = obj->isEmpty();
//  * bool param_6 = obj->isFull();
//  */


// class MyCircularQueue {
//     vector<int> queue;
//     int capacity;
//     int front;
//     int count;
// public:
//     MyCircularQueue(int k) {
//         queue.resize(k);
//         capacity = k;
//         front = 0;
//         count = 0;
//     }
    

    
//     bool deQueue() {
//         if (isEmpty()) return false;
//         front = (front + 1) % capacity;
//         count--;
//         return true;
//     }
    
//     int Front() {
//         return isEmpty() ? -1 : queue[front];
//     }
    
//     int Rear() {
//         return isEmpty() ? -1 : queue[(front + count - 1) % capacity];
//     }
    
//     bool isEmpty() {
//         return count == 0;
//     }
    
//     bool isFull() {
//         return count == capacity;
//     }
// };