#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;





int main (){

      system("cls");
        //   Selection Sort
      
        int array[9] = {4, 3, 8, 5, 9, 2, 1, 6, 7 };

        for(int i = 0; i < 9; i++)
        {
            int min = i;
            for(int j = i+1; j < 9; j++){

                if(array[min] > array[j])
                {
                   min = j;
                

                }
                  
            

            }
                   int temp = array[min];
                   array[min] = array[i];
                   array[i] = temp;
         
        }
         for(int i = 0; i < 9; i++)
        {
           cout << array[i] << " ";
        }


    return 0;

}