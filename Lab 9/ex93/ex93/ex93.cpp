#include <iostream>;
using namespace std;

const int SIZE = 4;
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



int main()
{
	int a[SIZE];
	for (int i = 0; i < SIZE; i++) {
        cout << "Num " << i << endl;
		cin >> a[i];
	}
    sort_array(a, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << "Number  " <<  i << " : "<< a[i] << " Difference " << a[SIZE-1] - a[i] << endl;

    }

}