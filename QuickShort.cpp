#include <iostream>
using namespace std;

int arr[20];       // Array of integers to hold values
int cmp_count = 0; // Number of comparisons
int mov_count = 0; // Number of data movements

void input()
{
    int n;
    // Input array length
    while (true)
    {
        cout << "Masukkan panjang elemen array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\nEnter Array Element" << endl;
    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void swap(int x, int y)
{
    // Swaps the element at index x with the element at index y
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}