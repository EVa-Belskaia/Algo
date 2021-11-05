#include <iostream>
#include "TXLib.h"


void FillArray  (int data[], int size);
void Sort_Vibor (int data[], int size);
void Print1str  (int data[], int size, int* i);
void PrintArray (const int data[], int size, int Dlina, const char title[]);
void SortBooble (int data[], int size);


//---------------------------------------------------------
int main ()
    {
    int data[20] = {};

    FillArray   (data, 10);
    PrintArray  (data, 10, 10, "Начальный массив");

    printf ("\n");

    printf ("Сортировка 1: \n");

   // Sort_Vibor (data, 10);
   // PrintArray  (data, 10, 10, "Отсортированный массив");

    SortBooble (data, 10);
    PrintArray  (data, 10, 10, "Отсортированный массив");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size)
     {

     for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        data[i] =rand() % 10 * 100 + i;

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

            if (data[j] <= DataMin)
                {
                iMin = j ;
                DataMin = data[j];
                printf ("* .");
                }
            else printf ("* ");
            }

        int dop    = data[i];
        data[i]    = data[iMin];
        data[iMin] = dop;

        //Print1str (data, size, &i);
        }
    }
//---------------------------------------------------------
void SortBooble (int data[], int size)
    {
    for (int i = 0; i < size; i ++)
        {
        assert (0 <= i && i < size);

        for (int j = size - 1; j > i; j --)
            {
            assert (0 <= j && j < size);

            if (data[j] < data[j - 1])
                {
                int dop         = data[j];
                    data[j]     = data[j - 1];
                    data[j - 1] = dop;
                }
             }
         Print1str (data, size, &i);
         }
     }

//---------------------------------------------------------
void Print1str (int data[], int size, int* i)
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
//-------------------------------------------------------------------------
void PrintArray (const int data[], int size, int Dlina, const char title[])
    {
    $g; printf ("\n%s:", title);
    printf ("\n");

    for (int i = 0; i < size; i++)
        {
        assert (0 <= i   && i   < size);

        if (i % Dlina == 0) printf ("\n");

        $c; printf ("[%2d] = ", i);
        $g; printf ("%5d", data[i]);
        $c; printf (", ");
        }

    printf (" END");
    $d
    }
