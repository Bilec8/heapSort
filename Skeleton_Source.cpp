#include <iostream>
#include "Skeleton_Heap.h"

using namespace std;

int main()
{
    vector<int> input = {{-99, 99, 17, -15, 3, -8, -48, 64, 29, 77}};
    Heap Object(input);
    Object.print_heap();
    Object.build_max_heap();
    Object.print_heap();
    Object.insert_element(12);
    Object.print_heap();
    Object.heap_sort();
    Object.print_sorted();
    Object.print_heap();
    Object.insert_element(69);
    Object.print_sorted();
    Object.print_heap();

    return 0;
}