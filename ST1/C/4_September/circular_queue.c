#include <stdio.h>

// Implement Circular Queue using array in c

// It is actually same like a queue just that the back is connected to front such that it makes a circular loop

// -------------------------------------------------------------------------------------

// Operations to be made to Implement CircularQueue ------->

// As the queue is circular so if the pointer moves greater than total size
// Then we should decrement them in such a way that it points to correct index

// For example

// A queue of size 4
// So index 4 represent 0 index as the queue is circular

// Hence is we modulus operator 
// So when the queue is at index 4 
// It decrements as 4 % total size of queue
// So 4 % 4 = 0
// Hence it directed to its correct Index

// ------------------------------------------------------------------------------------

// CHANGES MADE IN ORIGINAL QUEUE ----->

// In push operations

// We're pushing elements from back
// So we have to increment back in such a way that if we are accessing index out of length bound
// Then it still points to correct index as mentioned above

// So back become (back + 1) % total size of queue


// In pop Operations

// We poping elements from front
// So we have to increment front in such a way that if we are accessing index out of length bound
// Then it still directs to correct index as mentioned above

// So front becomes (front + 1) % total size of queue


typedef struct Queue
{
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

void Initialize(Queue * q)
{
    // Initializing queue

    // Setting up front and back to -1 as initially the queue is empty
    q->front = -1;
    q->back = -1;

    // Setting total size to 10 just for example
    q->total_size = 10;

    // As initially queue is empty so current size is 0
    q->current_size = 0;
}

void push(Queue * q, int data)
{
    // To push something in queue

    // If queue is full we can't add more elements so return
    if (q->current_size == q->total_size) {
        return;
    }

    // If queue is empty then set front to 0 as there will be one element after push operation 
    if (q->current_size == 0 ) {
        q->front = 0;
    }
    
    // Increment the back position as we know queue add elements at the back 
    // But as queue is circular, so we have to take modulus of it with total size of queue
    // So that it get directed to correct index even when index reaches out of bounds

    q->back = (q->back + 1)%q->total_size;

    // Set data to back index in array working as queue
    q->arr[(q->back)] = data;

    // Increase current size of queue
    q->current_size++;
}

void pop(Queue * q)
{
    // If current size of queue is 0 then we can't remove anything so just return
    if (q->current_size == 0)
    {
        return;
    }

    // IF current size is 1 that means after poping the queue is becoming empty that is its initial position
    // So set front and back index to -1
    if (q->current_size == 1)
    {
        q->front = -1;
        q->back = -1;
    }
    else 
    {
        // Otherwise increment front index
        // Means indirectly we can't access that element anymore so in any words we had removed it indirectly
        // But as queue is circular, so we have to take modulus of it with total size of queue
        // So that it get directed to correct index even when index reaches out of bounds

        q->front = (q->front + 1)%q->total_size;
    }
    
    // Yeah, Decrease the current size by 1
    q->current_size--;
}

int empty(Queue * q)
{
    // If current size is 0 the return 1 meaning true
    if (q->current_size == 0)
    {
        return 1;   
    }
    else
    {
        // Otherwise return 0
        return 0;
    }
}

int front(Queue * q)
{
    if (q->current_size == 0)
    {
        // If size of queue is 0 then just return maximum number possible in integer
        return 2147483647;
    }
    // Else return element present on front index in array working as queue
    return q->arr[q->front];
}


int size(Queue * q)
{
    // Simply return current size as we already tracking it 
    return q->current_size;
}

int main()
{
    // Set size of queue which should be less than 10 for this example time only
    int n;
    scanf("%d", &n);

    // Initialize the queue
    Queue que;
    Initialize(&que);

    for (int i=0;i<n;i++)
    {
        // Push some number until size n
        int x ;
        scanf("%d", &x);
        push(&que, x);
    }

    // Print the queue to check whether It's working or not
    while (!empty(&que))
    {
        printf("%d ",front(&que));
        pop(&que);
    }

    return 0;
}