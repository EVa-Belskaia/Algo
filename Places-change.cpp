#include <iostream>
#include "TXLib.h"

void FillArray  (int data[], int size);
void ChangePlace (int data[], int size, int step);
void PrintArray (const int data[], int size, const char title[]);

//---------------------------------------------------------
int main ()
    {
    int data[20] = {};

    FillArray   (data, 20);
    PrintArray  (data, 20, "Максимальный элемент");

    printf ("\n");

    ChangePlace (data, 20, 2);
    PrintArray  (data, 20, "Поменяли пары местами");

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
void ChangePlace (int data[], int size, int step)
    {
    int dop = 0;

    for (int i = 0; i < size - 2; i = i + step)
        {
        assert (0 <= i        && i        < size); // проверка выхода за край
        assert (0 <= i + step && i + step < size);
        assert (0 <= i + 1    && i + 1    < size);

        dop = data[i];
        data[i]     = data[i + 1];
        data[i + 1] = dop;
        }

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
