#include <stdio.h>

#define SIZE 99999

int heapsize = 0;
int count = 0;

struct pqueue
{
    int priority;
    int id;
};

struct pqueue A[SIZE];


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void initializearray()
{
    for(int i=0; i<SIZE; i++)
    {
        A[i].priority = 0;
        A[i].id = 0;
    }
}

void printheap(); //prototype of debugging function



int left(int i)
{
    return (i * 2) + 1;
}



int right(int i)
{
    return (i * 2) + 2;
}

int parent(int i)
{
    return ((i - 1) / 2);
}


void insertkey(int z)
{
    heapsize++;
    int i = heapsize - 1;
    A[i].priority = z;
    count++;
    A[i].id = count;

    while (i != 0 && A[parent(i)].priority < A[i].priority)
    {
        swap(&A[i].priority, &A[parent(i)].priority);
        swap(&A[i].id, &A[parent(i)].id);
        i = parent(i);
    }


    i = heapsize-1;
    while(i != 0 && A[parent(i)].priority == A[i].priority && A[parent(i)].id > A[i].id )
        {
        swap(&A[i].priority, &A[parent(i)].priority);
        swap(&A[i].id, &A[parent(i)].id);
        i = parent(i);
        }

     //   printheap();
}



void maxheapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest;

    if (l <= heapsize && A[l].priority >= A[i].priority)
    {
        largest = l;

        if(A[l].priority == A[i].priority)
        {
            if(A[l].id < A[i].id)
            {
                largest = l;
            }

            else
            {
                largest = i;
            }
        }

    }

    else
    {
        largest = i;
    }

    if (r <= heapsize && A[r].priority >= A[largest].priority)
    {
        largest = r;

        if(A[r].priority == A[largest].priority)
        {
            if(A[r].id < A[largest].id)
            {
                largest = r;
            }
        }
    }

    if (largest != i)
    {
        swap(&A[i].priority, &A[largest].priority);
        swap(&A[i].id, &A[largest].id);
        maxheapify(largest);
    }
}

int extractmax()
{
    int max = A[0].id;
    A[0].priority = A[heapsize-1].priority;
    A[0].id = A[heapsize-1].id;
    heapsize--;
    //printheap();
    maxheapify(0);
    return max;
}

void printheap() // debug function
{
    for(int i = 0; i < heapsize; i++)
    {
        printf("prio %d id %d \n", A[i].priority, A[i].id);
    }
}


int main()
{
    int n;
    int z;

    initializearray();
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &z);

        if(z != 0)
        {
            insertkey(z);
        }

        else
        {
            int local = extractmax();

            if(local != 0 && heapsize+1 != 0)
            {
                printf("%d\n", local);
                // printheap();
            }
        }
