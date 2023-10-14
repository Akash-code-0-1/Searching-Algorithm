#include <iostream>
using namespace std;
int main()
{
    int size, key, i, indx = 0;  
    cin >> size;
    // cin.ignore();
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "Enter Search Element: ";
    cin >> key;
    bool flg = false;
    for (i = 0; i < size; i++)
        if (key == array[i])
        {
            flg = true;
            indx = i;
        }

    if (flg)
        cout << "Found: " << indx + 1 << endl;
    else
        cout << "Not Found\n";
}