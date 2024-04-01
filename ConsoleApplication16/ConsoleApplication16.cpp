#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;

    
    double* array = new double[n];

    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    
    double pos = 1.0;
    double sum = 0.0;
    double min = array[0];

   
    for (int i = 0; i < n; ++i) {
        if (array[i] > 0) {
            pos *= array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] == min) {
            break;
        }
        sum += array[i];
    }

    
    cout << "Product of positive array elements: " << pos << endl;
    cout << "The sum of the array elements to the minimum element: " << sum << endl;

   
    delete[] array;

    return 0;
}
