#include <iostream>
#include "BF.h"

using namespace std;

BF::BF()
{
    values = new int[4];
    for (int i = 0; i < 4; i++)
    {
        values[i] = 0;
    }
}

BF::BF(int* vals)
{
    values = new int[4];
    for (int i = 0; i < 4; i++)
    {
        values[i] = vals[i];
    }
}

BF BF::con(BF y)
{
    BF x;
    int* y_values = y.get_values();
    int* x_values = new int[4];
    for (int i = 0; i < 4; i++)
    {
        x_values[i] = min(y_values[i], values[i]);
    }
    x.set_values(x_values);
    return x;
}

BF BF::dis(BF y)
{
    BF x;
    int* y_values = y.get_values();
    int* x_values = new int[4];
    for (int i = 0; i < 4; i++)
    {
        x_values[i] = max(y_values[i], values[i]);
    }
    x.set_values(x_values);
    return x;
}

void BF::otr()
{
    for (int i = 0; i < 4; i++)
    {
        values[i] = 1 - values[i];
    }
}

void BF::set_values(int* new_values)
{
    for (int i = 0; i < 4; i++)
    {
        values[i] = new_values[i];
    }
    cout << endl;
}

int* BF::get_values()
{
    return values;
}

void BF::show_values()
{
    for (int i = 0; i < 4; i++)
    {
        cout << values[i] << ' ';
    }
    cout << endl;
}

void BF::delete_values()
{
    delete[] values;
}



