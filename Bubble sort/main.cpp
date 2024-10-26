#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;





int main (){

      system("cls");
        //   Bubble Sort
      
        int array[9] = {4, 3, 8, 5, 9, 2, 1, 6, 7 };

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9 - i; j++){

                if(array[j] > array[j+1])
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                

                }

            }
        }
         for(int i = 0; i < 9; i++)
        {
           cout << array[i] << " ";
        }


    return 0;

}