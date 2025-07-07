#include <iostream>

using namespace std;

int main()
{
    cout << "ente the lenght of the array : " << endl;
    int N;
    long long product_sum = 1;
    cin >> N;

    int *array = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    // for (int i = 0; i < N; i++)
    // {
    //     product_sum *= array[i];
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << product_sum / array[i] << " ";
    // }

    for (int i = 0; i < N; i++)
    {
        product_sum = 1;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }
            product_sum *= array[j];
        }
        cout << product_sum << "   ";
    }

    delete[] array;

    return 0;
}