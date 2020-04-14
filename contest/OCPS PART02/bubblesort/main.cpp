#include <bits/stdc++.h>

using namespace std;
/*void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}*/

int main()
{
    int i, j, m, count_n=0, array_size, p;
    cin>>array_size;
    int arr[array_size];
    for(int p=0; p<array_size; p++)
        cin>>arr[p];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            count_n++;
        }

    for (m = 0; m < n; m++)
        cout << arr[m] << " ";
    cout << endl;
    cout <<count_n << " ";
    return 0;
}
