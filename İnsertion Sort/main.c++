#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    int arr[9] = {4, 3, 8, 5, 9, 2, 1, 6, 7 };

    for(int i = 1; i < 9; i++)
    {
       int temp = arr[i];
       int j = i - 1;

       while(arr[j] > temp && j >= 0 )
       {
         arr[j+1] = arr[j];
         j--;
       }
      arr[j+1] = temp;

    }
    for(int i = 0; i < 9; i++)
        {
           cout << arr[i] << " ";
        }

    return 0;
}