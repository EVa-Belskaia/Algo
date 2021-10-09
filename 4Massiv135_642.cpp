#include "TXLib.h"
#include "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
//void PrintArray (const int data[], int size, const char title[]);

int main ()
    {
    printf ("\n");

    int data[20] = {};

    FillArray   (data, 20, 1, 4);
    PrintArray  (data, 20, 4, "Третье задание 135_642");

    printf ("\n");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size, int start, int step)
     {
     data[1] = start;

     for (int i = 1; i < size/2+1; i++)
        {
        assert (0 <= i   && i   < size); // проверка выхода за край
        assert (0 <= i-1 && i-1 < size);

        data[i] = i*2 - 1;
        data[size-i] = i*2;

        }
     }

