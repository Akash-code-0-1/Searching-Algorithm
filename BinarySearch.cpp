#include <iostream>
using namespace std;
int main()
{
    int size, key, i, indx = 0;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "Enter Search Element: ";
    cin >> key;
    int start = 0;
    int end = size - 1;
    bool flag = false;
    while (start <= end && flag == false)
    {
        int mid = start + end / 2;
        if (array[mid] == key)
        {
            flag = true;
            indx = mid;
        }

        else if (key > array[mid])
            start = mid + 1;

        else
            end = mid - 1;
    }
    if (flag)
        cout << "Found :" << indx + 1 << endl;
    else
        cout << "Not Found";
}