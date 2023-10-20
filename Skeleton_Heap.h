#pragma once
#include <vector>

using namespace std;

class Heap
{
private:
    vector<int> heap;
    vector<int> sorted;

public:
    Heap(vector<int> input);
    vector<int> get_heap();
    vector<int> get_sorted();
    void build_max_heap();
    void heapify(int index);
    void heap_sort();
    void insert_element(int new_element);
    void remove_root();
    void print_heap();
    void print_sorted();
};
