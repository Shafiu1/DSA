#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    vector<int>heap;

    //heapify up (for insertion)
    void heapifyUp(int i){
        while(i>0){
            int parent=(i-1)/2;
            if(heap[parent]>heap[i]){
                swap(heap[parent] , heap[i]);
                i=parent;
            }else{
                break;
            }
        }
    }

    //heapify Down(for min-Extraction)
    void heapifyDown(int i){
        int size=heap.size()-1;
        while(1){
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int smallest=i;
            if(left<size && heap[left]<heap[smallest]){
                smallest=left;
            }if(right<size && heap[right]<heap[smallest])
                smallest=right;
            if(smallest!=i){
                swap(heap[i],heap[smallest]);
                i=smallest;
            }else{
                break;
            }

        }

    }

    public:
    void insert(int val){
        heap.push_back(val);
        heapifyUp(heap.size()-1);
    }

    int getMin(){
        if(heap.empty())
            return -1;
        else
            return heap[0];
    }

    int extractMin(){
        if(heap.empty())
            return -1;
        int min=heap[0];
        heap[0]=heap.back();
        heap.pop_back();

        heapifyDown(0);
        return min;
    }

    void printHeap(){
        for(int x:heap)
            cout<<x<<" ";
        cout<<endl;
    }
};


int main(){
    MinHeap h;
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(10);

    cout<<"Heap:";
    h.printHeap();

    cout<<"Min: "<<h.getMin()<<endl;

    cout<<"Extracted Min: "<<h.extractMin()<<endl;

    cout<<"Heap after min extraction:";
    h.printHeap();

    return 0;
}