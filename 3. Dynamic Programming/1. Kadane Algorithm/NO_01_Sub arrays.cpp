#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of thhe array. [size must be greater then 5!]\n=>";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array =>\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Sub arrays are: ";
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            for(int k = i; k <= j; k++){
                cout << arr[k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}