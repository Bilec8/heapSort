#include <iostream>
#include "Skeleton_Heap.h"

using namespace std;

Heap::Heap(vector<int> input)
{
    this->heap = input;
}
vector<int> Heap::get_heap()
{
    return this->heap;
}
vector<int> Heap::get_sorted()
{
    return this->sorted;
}
void Heap::build_max_heap()
{
    for (int i = heap.size() / 2 - 1; i >= 0; i--) {
        heapify(i);
    }
}
void Heap::heapify(int index)
{
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;

    cout << "Heapyfing on index: " << index << endl;

    if (left < heap.size() && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < heap.size() && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapify(largest);
    }
}

void Heap::heap_sort()
{
    vector<int> tmp = heap;

    for (int i = 0; i < tmp.size(); i++) {
        remove_root();
    }
    heap = tmp;
}
void Heap::insert_element(int new_element)
{
    heap.push_back(new_element);
    cout << "New element in tree: " << new_element << endl;

    int n = heap.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i);
    }

    sorted = vector<int>(0);

}
void Heap::remove_root()
{
      swap(heap[0], heap[heap.size()-1]);
      sorted.push_back(heap.back());
      cout << "Remove root: " << heap.back() << endl;
      heap.pop_back();
      heapify(0);
    
}
void Heap::print_heap()
{
    cout << "Heap:" << endl;
    for (int i = 0; i < this->heap.size(); i++) {
        cout << heap[i] << "  ";
    }
    cout << endl;
}
void Heap::print_sorted()
{
    if(sorted.size()  != 0) {
    cout << "Sorted: " << endl;
    for (int element : sorted) {
        cout << element << " ";
    }
    cout << endl;
    }else cout << "Vektor neni usporadany. " << endl;

}
