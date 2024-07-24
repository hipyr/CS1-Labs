#include <iostream>
using namespace std;
const int SIZE = 20;

int index_of_smallest(const int a[], int start_index, int used_size);
void sort_array(int a[], int used_size);

int index_of_smallest(const int a[], int start_index, int used_size)
{
    int min = a[start_index], index_of_min = start_index;
    for (int i = start_index + 1; i < used_size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index_of_min = i;
        }
    }
    return index_of_min;
}
double find_average(int a[], int used_size) {
    double total = 0.0;
    for (int i = 0; i < used_size; i++) {
        total += a[i];
    }
    return total / used_size;
}

void sort_array(int a[], int used_size)
{
    int index_of_next_smallest;
    int temp;
    for (int i = 0; i < used_size - 1; i++)
    {
        index_of_next_smallest = index_of_smallest(a, i, used_size);
        // swap two elements
        temp = a[i];
        a[i] = a[index_of_next_smallest];
        a[index_of_next_smallest] = temp;
    }
}
double getMedianOfArray(int array[], int used_size) {
    if (used_size % 2 == 0) {
        // even
        int middleOfArray = (used_size / 2) - 1;
        return (array[middleOfArray] + array[middleOfArray + 1]) / 2.0;
    }
    else {
        // odd
        int middleofarray = ceil(used_size / 2.0);
        return array[middleofarray - 1];
    }
}
int main() {
    int a[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> a[i];
    }
    sort_array(a, SIZE);
    
    cout << "The smallest value is : " << a[0] << endl;
    cout << "The largest value is : " << a[SIZE-1] << endl;
    cout << "the average is : " << find_average(a, SIZE);
    cout << "the median is : " << getMedianOfArray(a, SIZE);
    return 0;
}
