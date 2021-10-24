#include <iostream>
#include "TXLib.h"

void FillArray  (int data[], int size);
void FindMax    (int data[], int size);
void FindMin    (int data[], int size);
void PrintArray (const int data[], int size, const char title[]);

//---------------------------------------------------------
int main ()
    {
    int data[20] = {};

    FillArray   (data, 20);
    PrintArray  (data, 20, "Максимальный элемент");

    printf ("\n");

    FindMax (data, 20);
    FindMin (data, 20);

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size)
     {

     for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        data[i] = rand() % RAND_MAX;

        }
     }

//---------------------------------------------------------
void FindMax (int data[], int size)
    {
    int iMax = 0;
    int DataMax = data[0];
    for (int i = 1; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        if (data[i] > DataMax) {iMax = i; DataMax = data[i];}
        }
    printf ("\n iMax = %d значение элемента %d \n", iMax, DataMax);
    }

//---------------------------------------------------------
void FindMin (int data[], int size)
    {
    int iMin = 0;
    int DataMin = data[0];
    for (int i = 1; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        if (data[i] < DataMin) {iMin = i; DataMin = data[i];}
        }
    printf ("\n iMin = %d  значение элемента = %d \n", iMin, DataMin);
    }

//---------------------------------------------------------
void PrintArray (const int data[], int size, const char title[])
    {
    $g; printf ("\n%s:", title);
    printf ("\n");

    for (int i = 0; i < size; i++)
        {
        assert (0 <= i   && i   < size);

        if (i % 5 == 0) printf ("\n");

        $c; printf ("[%2d] = ", i);
        $g; printf ("%6d", data[i]);
        $c; printf (", ");
        }

    printf (" END");
    $d
    }
