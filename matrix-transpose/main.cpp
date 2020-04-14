#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    int arr[r][c];

    /*
    O(r*c)
    O(n*m)


    */


    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Matrix:" << endl;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int transArr[c][r];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            transArr[j][i] = arr[i][j];
        }
    }

    cout << endl << "Transposed Matrix:" << endl;
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++) {
            cout << transArr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
