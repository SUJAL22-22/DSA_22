#include <iostream>
using namespace std;
#define MAX 5

class queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int size;

public:
    queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[capacity]; // dyanamic memeory allocation
        this->front = -1;
        this->rear = -1;
        this->size = 0;
    }

    ~queue()
    {
        delete[] arr; // ocupie space free mate..
    }

    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue Is Full.." << endl;
        }
        else if (this->rear == -1 && this->front == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->size++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->size++;
        }
    }

    void dequeue()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            front++;
            arr[this->front];
            this->size--;
        }
    }

    // front
    void showfront()
    {
        if (this->front == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Front :" << arr[this->front] << endl;
        }
        cout << endl;
    }

    // rear
    void showrear()
    {
        if (this->rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Rear : " << arr[this->rear] << endl;
        }
        cout << endl;
    }

    // dispaly
    void display()
    {
        if (this->rear == -1)
        {
            cout << "Queue is emapty" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
                cout << endl;
            }
        }
    }

    // empty
    void empty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue Is Full" << endl;
        }
    }

    // full
    void full()
    {
        if (rear == capacity - 1)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            cout << "Queue is not Full" << endl;
        }
    }

    // size
    void showsize()
    {
        cout << "Size of Queue is : " << this->size << endl;
    }
};

int main()
{
    
    queue q(MAX);

    int choice, element;

    do
    {
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Front" << endl;
        cout << "4.Rear" << endl;
        cout << "5.Empty" << endl;
        cout << "6.Full" << endl;
        cout << "7.Display" << endl;
        cout << "8.Size" << endl;
        cout << "0.Exit.." << endl;

        cout << "Enter yout choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Element:";
            cin >> element;
            q.enqueue(element);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.showfront();
            break;
        case 4:
            q.showrear();
            break;
        case 5:
            q.empty();
            break;
        case 6:
            q.full();
            break;
        case 7:
            q.display();
            break;
        case 8:
            q.showsize();
            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid Choice";
            break;
        }

    } while (choice != 0);

    return 0;
}