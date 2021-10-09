#include "TXLib.h"
#include "AlgoPrint.h"

void FillArray (int data[], int size, int start, int step);
//void PrintArray (const int data[], int size, const char title[]);

int main ()
    {
    printf ("\n");

    int data[30] = {};

    FillArray   (data, 30, 0, 3);
    PrintArray  (data, 30, 4, "Пятое задание 123789_654");

    printf ("\n");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size, int start, int step)
     {
     data[0] = start;

     for (int i = 1; i < size/2-1; i = i + step)
        {
        assert (0 <= i   && i   < size); // проверка выхода за край
        assert (0 <= i-1 && i-1 < size);

        data[i  ] = (i/step)*step + i;
        data[i+1] = (i/step)*step + i+1;
        data[i+2] = (i/step)*step + i+2;

        data[size-i  ] = data[i  ] + 3;
        data[size-i-1] = data[i+1] + 3;
        data[size-i-2] = data[i+2] + 3;
        }
     }

