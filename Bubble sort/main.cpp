#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;





int main (){

      system("cls");
        //   Bubble sort    /bax tutaq ki deyishiklik etmisen, run edirsen birinci her shey okdusa push etmek istirsen indi push edirik
        PS C:\Users\Nicat\C-Tasks> git add .
PS C:\Users\Nicat\C-Tasks> git commit -m "commitin adi"
[main 1cb3783] commitin adi
 3 files changed, 48 insertions(+), 1 deletion(-)
 create mode 100644 .vscode/settings.json
PS C:\Users\Nicat\C-Tasks> git push
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 8 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (6/6), 852 bytes | 852.00 KiB/s, done.
Total 6 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/NijatSuleymanov/C-Tasks.git
   37ccc06..1cb3783  main -> main
   harasa tulla yadinnan cix masin
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