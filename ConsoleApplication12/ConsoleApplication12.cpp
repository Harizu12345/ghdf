#include <iostream>

using namespace std;


//1

/*
void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int sourceArr[] = { 1, 2, 3, 4, 5 };
    int destinationArr[5];

    copyArray(sourceArr, destinationArr, 5);

    for (int i = 0; i < 5; ++i) {
        cout << destinationArr[i] << "  ";
    }
    cout << endl;

    return 0;
}
*/


//2

/*
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };

    reverseArray(arr, 5);

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/


//3

/*
void copyReverse(int* source, int* destination, int size) {
    int* sourceEnd = source + size - 1;
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(sourceEnd - i);
    }
}

int main() {
    int sourceArr[] = { 1, 2, 3, 4, 5 };
    int destinationArr[5];

    copyReverse(sourceArr, destinationArr, 5);

    for (int i = 0; i < 5; ++i) {
        cout << destinationArr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//4

/*
void arraySumAndProduct(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; ++i) {
        *sum += *(arr + i);
        *product *= *(arr + i);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    int sum, product;

    arraySumAndProduct(arr, size, &sum, &product);

    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;

    return 0;
}
*/

//5

/*
void countElements(int* arr, int size, int* negative, int* positive, int* zero) {
    *negative = 0;
    *positive = 0;
    *zero = 0;

    for (int i = 0; i < size; ++i) {
        if (*(arr + i) < 0) {
            (*negative)++;
        }
        else if (*(arr + i) > 0) {
            (*positive)++;
        }
        else {
            (*zero)++;
        }
    }
}

int main() {
    int arr[] = { -2, 0, 3, -5, -6, 6 };
    int size = 6;
    int negative, positive, zero;

    countElements(arr, size, &negative, &positive, &zero);

    cout << "neg: " << negative << endl;
    cout << "positive: " << positive << endl;
    cout << "zero: " << zero << endl;

    return 0;
}
*/