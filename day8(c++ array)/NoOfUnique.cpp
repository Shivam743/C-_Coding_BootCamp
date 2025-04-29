#include <iostream>

using namespace std;
void UniqueElementInArray(int array[], int size)
{

    int tempArray[size];
    int count;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        if (i != 0)
        {
            for (int j = 0; j < size; j++)
            {
                if (array[i] == tempArray[j])
                {
                    count = 1;
                    break;
                }
            }
            if (count == 0)
            {
                tempArray[index] = array[i];
                index++;
            }
        }
        else
        {
            tempArray[index] = array[i];
            index++;
        }
    }
    cout << "number of unique element in array : " << index << endl;
    for (int i = 0; i < index; i++)
    {
        cout << tempArray[i] << "   ";
    }
}

int main()
{
    cout << "program to find the unique element in the array : ............" << endl;
    int sizeOfArray;

    cout << "enter the size of the array :";
    cin >> sizeOfArray;
    int array[sizeOfArray];

    cout << "enter the element of the array : " << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> array[i];
    }

    // int array12[5] = {1, 2, 3, 3, 4};

    UniqueElementInArray(array, sizeOfArray);
    return 0;
}