#include <iostream>
#include "TXLib.h"

void FillArray  (int data[], int size);
void Perevorot (int data[], int size, int step);
void PrintArray (const int data[], int size, const char title[]);
void SdvigL (int data[], int size, int cut);
//void SdvigRight (int data[], int size);

//---------------------------------------------------------
int main ()
    {
    int data[20] = {};

    FillArray   (data, 20);
    PrintArray  (data, 20, "Ќачальный массив");

    printf ("\n");

    FillArray   (data, 20);
    SdvigL      (data, 20, 19);
    PrintArray  (data, 20, "—двиг вправо");

    FillArray   (data, 20);
    SdvigL      (data, 20, 1);
    PrintArray  (data, 20, "—двиг влево");

    printf ("\n");

    FillArray   (data, 20);
    SdvigL      (data, 20, 5);
    PrintArray  (data, 20, "«амена кусочков");

    return 0;
    }

//---------------------------------------------------------
void FillArray (int data[], int size)
     {

     for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size); // проверка выхода за край

        data[i] = rand() % 1000 * 100 + i;

        }
     }

//---------------------------------------------------------
void Perevorot (int data[], int size, int step)
    {
    int dop = 0;

    for (int i = 0; i < size/2; i ++)
        {
        //printf ("[i]%d", size - i);

        assert (0 <= i              && i        < size); // проверка выхода за край
        assert (0 <= size - (i + 1) && size - (i + 1) < size);
        assert (0 <= i + 1          && i + 1    < size);

        dop = data[i];
        data[i] = data[size - (i + 1)];
        data[size - (i + 1)] = dop;
        }
    }
//--------------------------------------------------------
void SdvigL (int data[], int size, int cut)
    {
    Perevorot (data, cut, 1);
    Perevorot (data, size, 1);
    Perevorot (data, size - cut, 1);

    }

//---------------------------------------------------------
/*void SdvigRight (int data[], int size)
    {
    int buf = data[size - 1];
    for (int i = 0; i < size/2; i ++)
        {
        //printf ("[i]%d", size - i);

        assert (0 <= i              && i        < size); // проверка выхода за край
        assert (0 <= size - (i + 1) && size - (i + 1) < size);
        assert (0 <= i + 1          && i + 1    < size);

        int dop = data[i];
        data[i] = data[size - (i + 1)];
        data[size - (i + 1)] = dop;
        }
    data[0] = buf;
    }

 //---------------------------------------------------------
/*void SdvigL (int data[], int size, int cut)
    {
    int dop = 0;

    for (int i = 0; i < (size - cut)/2; i ++)
        {
        //printf ("[i]%d", );

        assert (0 <= i                && i        < size); // проверка выхода за край
        assert (0 <= size - (i + cut) && size - (i + cut)  < size);

        dop = data[i];
        data[i]     = data[size - (i + cut)];
        data[size - (i + cut)] = dop;

        }

    for (int i = size - cut; i < size - (cut/2); i ++)
        {
        //printf ("[i]%d", );

        assert (0 <= i                    && i        < size); // проверка выхода за край
        assert (0 <= size - (cut + i-1)       && size - (cut + i-1)  < size);
        assert (0 <= size - (i + 1)       && size - (i + 1)  < size);

        dop = data[size - (cut + i-1)];
        data[size - (cut + i-1)]     = data[size - (i + 1)];
        data[size - (i + 1)] = dop;

        }
    }   */

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
