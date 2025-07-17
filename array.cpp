#include <iostream>
using namespace std;

int main()
{

    int integer_array[4] = {1, 2, 3, 4};
    // cout << integer_array[1] << endl;

    // int another_array[4];
    // another_array[0] = 5;
    // cout << another_array[0] << endl;

    // cout << another_array[1] << endl; // This will print an uninitialized value, which is undefined behavior.

    // *another_array = 6; // This will set the first element to 6.
    // cout << another_array[0] << endl; // Now this will print 6.

    int smallest = INT32_MAX;
    for (int i = 0; i < 4; i++)
    {
        if (integer_array[i] < smallest)
        {
            smallest = integer_array[i];
        }
    }
    cout<< smallest<<endl;

    int largest = INT32_MIN;
    for(int i=0; i< 4;i++){
        if (integer_array[i] > largest)
        {
            largest = integer_array[i];
        }
    }
    cout << largest << endl;
    return 0;
}