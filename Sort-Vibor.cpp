#include <iostream>
#include "TXLib.h"
#include "AlgoPrint-2.h"

void FillArray  (int data[], int size);
void Sort_Vibor (int data[], int size);
void Pint1str   (int data[], int size, int* i);

//---------------------------------------------------------
int main ()
    {
    int data[20] = {};

    FillArray   (data, 6);
    PrintArray  (data, 6, 6, "Начальный массив");

    printf ("\n");

    printf ("Сортировка 1: \n\n");

    Sort_Vibor (data, 6);
    //PrintArray  (data, 6, 6, "Поменяли пары местами");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size)
     {

     for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        data[i] = rand() % 1000;// * 100 + i;

        }
     }

//---------------------------------------------------------
void Sort_Vibor (int data[], int size)
    {
    for (int i = 0; i < size; i ++)
        {
        assert (0 <= i && i < size);

        int iMin = i;
        int DataMin = data[iMin];
        for (int j = i + 1; j < size; j ++)
            {
            assert (0 <= j     && j    < size); // проверка выхода за край
            //assert (0 <= j + 1 && j + 1< size);

            if (data[j] <= DataMin)
                {
                iMin = j ;
                DataMin = data[j];
                }
            }

        int dop = data[i];
        data[i]     = data[iMin];
        data[iMin] = dop;

        Pint1str (data, size, &i);
        }
    }
//---------------------------------------------------------
void Pint1str (int data[], int size, int* i)
    {
    for (int p = 0; p < (*i) + 1; p ++)
        {
        assert (0 <= p &&  p < size);

        $r; printf ("[%2d] = ", p);
        $r; printf ("%6d", data[p]);
        $r; printf (", ");
        }

    for (int p = *i + 1; p < size; p ++)
        {
        assert (0 <= p &&  p < size);

        $c; printf ("[%2d] = ", p);
        $g; printf ("%6d", data[p]);
        $c; printf (", ");
        }

    printf (" END");
    $d
    printf ("\n");
    }
/*void PrintArray (const int data[], int size, int Dlina, const char title[])
    {
    $g; printf ("\n%s:", title);
    printf ("\n");

    for (int i = 0; i < size; i++)
        {
        assert (0 <= i   && i   < size);

        if (i % Dlina == 0) printf ("\n");

        $c; printf ("[%2d] = ", i);
        $g; printf ("%6d", data[i]);
        $c; printf (", ");
        }

    printf (" END");
    $d
    }  */
