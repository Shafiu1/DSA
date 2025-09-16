#include <iostream>
#include <vector>
using namespace std;

class MaxHeap
{
    vector<int> heap;

    // Heapify up (used in insertion)
    void heapifyUp(int index)
    {
        int parent = (index - 1) / 2;
        if (index > 0 && heap[index] > heap[parent])
        {
            swap(heap[index], heap[parent]);
            heapifyUp(parent); // recursive call
        }
    }

    // Heapify down (used in deletion)
    void heapifyDown(int index)
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
        {
            largest = left;
        }
        if (right < heap.size() && heap[right] > heap[largest])
        {
            largest = right;
        }

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest); // recursive call
        }
    }

public:
    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void deleteMax()
    {
        if (heap.empty())
            return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    void printHeap()
    {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    MaxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.insert(40);

    cout << "Heap elements: ";
    h.printHeap();

    h.deleteMax();
    cout << "After deleting max: ";
    h.printHeap();

    return 0;
}
