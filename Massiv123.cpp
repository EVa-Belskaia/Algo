#include "TXLib.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main ()
    {
    printf ("\n");

    int data[20] = {};

    FillArray   (data, 20, 1, 3);
    PrintArray  (data, 20, "Первое задание");

    printf ("\n");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size, int start, int step)
     {
     //data[0] = start;

     for (int i = 0; i < size; i++)
        {
        assert (0 <= i   && i   < size); // проверка выхода за край
        assert (0 <= i-1 && i-1 < size);

        data[i] = i%step + 1;

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
        $g; printf ("%3d", data[i]);
        $c; printf (", ");
        }

    printf (" END");
    $d
    }
