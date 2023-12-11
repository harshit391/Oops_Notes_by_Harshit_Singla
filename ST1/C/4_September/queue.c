#include <stdio.h>

// Implement Queue using array in c

// It works on Fifo
// First in First Out
// Means The element which is First entered will be first to be exit
// ORR.............

// LILO
// The element which is entered in last will be exit last

// -------------------------------------------------------------------------------------

// Operations to be made to Implement Queue ------->

// Only Top most element will be accessed in Queue

// There is a push operation which add elements to array at last position to Queue

// There is a pop operation which remove elements from the top position of Queue

// There is peek operation which gives the element present at top most position

// There is a size operation which returns size of Queue

// There is empty operation which tells either Queue is empty or not


typedef struct Queue {
    // Main Array which actually works as queue
    int arr[10];

    // Front variable to access the front position of queue
    int front;

    // Last variable to access the last position of queue
    int back;

    // TO track total size as some operations require to know about the total size for proper implementation
    int total_size;

    // Current size is actually the queue size after every operation to track the size of Queue
    int current_size;

} Queue;

void Initialize(Queue * q) {
    // Initializing queue

    // Setting up front and back to -1 as initially the queue is empty
    q->front = -1;
    q->back = -1;

    // Setting total size to 10 just for example
    q->total_size = 10;

    // As initially queue is empty so current size is 0
    q->current_size = 0;
}

void push(Queue * q, int data) {
    // To push something in queue

    // If queue is full we can't add more elements so return
    if (q->current_size == q->total_size) {
        return;
    }

    // If queue is empty then set front to 0 as there will be one element after push operation 
    if (q->current_size == 0) {
        q->front = 0;
    }

    // Increment the back position as we know queue add elements at the back 
    q->back = q->back + 1;

    // Set data to back index in array working as queue
    q->arr[(q->back)] = data;

    // Increase current size of queue
    q->current_size++;
}

void pop(Queue * q) {
    // If current size of queue is 0 then we can't remove anything so just return
    if (q->current_size == 0) {
        return;
    }

    // IF current size is 1 that means after poping the queue is becoming empty that is its initial position
    // So set front and back index to -1
    if (q->current_size == 1) {
        q->front = -1;
        q->back = -1;
    } else {
        // Otherwise increment front index
        // Means indirectly we can't access that element anymore so in any words we had removed it indirectly
        q->front = q->front + 1;
    }
    
    // Yeah, Decrease the current size by 1
    q->current_size--;
}

int empty(Queue * q) {
    // If current size is 0 the return 1 meaning true
    if (q->current_size == 0) {
        return 1;   
    } else {
        // Otherwise return 0
        return 0;
    }
}

int front(Queue * q) {
    if (q->current_size == 0) {
        // If size of queue is 0 then just return maximum number possible in integer
        return 2147483647;
    }
    // Else return element present on front index in array working as queue
    return q->arr[q->front];
}


int size(Queue * q) {
    // Simply return current size as we already tracking it 
    return q->current_size;
}

int main() {
    // Set size of queue which should be less than 10 for this example time only
    int n;
    scanf("%d", &n);

    // Initialize the queue
    Queue que;
    Initialize(&que);

    for (int i=0;i<n;i++) {
        // Push some number util size n
        int x ;
        scanf("%d", &x);
        push(&que, x);
    }

    // Print the queue to check whether It's working or not
    while (!empty(&que)) {
        printf("%d ",front(&que));
        pop(&que);
    }

    return 0;
}