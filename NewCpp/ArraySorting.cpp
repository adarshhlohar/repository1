#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 6, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"The array without sorted is : "<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout << "\nthe length of the array is : " << len << endl;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


        cout<<"the sorted array is :"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}