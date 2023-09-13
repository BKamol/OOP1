#include <iostream>
#include "DV.h"
#include "Parabola.h"
#include "Triangle.h"
#include "BF.h"
#include "BankAccount.h"
#include "Discipline.h"
#include "INTEGER.h"

using namespace std;

class A
{
private:

    int x;

public:
    A(int a)
    {
        x = a;
    }
    A()
    {
        x = 0;
    }

    void set_x(int a)
    {
        x = a;
    }
    int get_x()
    {
        return x;
    }

    A generator(int c)
    {
        A y;
        y.x = c;
        return y;
    }

};

int main()
{
    /*Parabola p1(1, 1, 1);
    Parabola p2(1, -1, 0);

    Parabola compressed_p1 = p1.p_compression(0.1);
    compressed_p1.show_coefficients();

    Parabola shifted_p1 = p1.parallel_shift(0.5, 0.5);
    shifted_p1.show_coefficients();
     
    cout << p1.has_roots() << endl;
    cout << p2.has_roots() << endl;*/

    /*Triangle t1(3, 4, 5);
    Triangle t2(4, 4, 5);
    Triangle t3 = t1.create_similar(2);

    cout << t3.get_a() << ' ' << t3.get_b() << ' ' << t3.get_c() << endl;
    cout << t1.get_square() << endl;
    cout << t1.get_perimeter() << endl;
    cout << t2.isosceles() << endl;*/

    //int* values = new int[4]; 
    //for (int i = 0; i < 4; i++)
    //{
    //    values[i] = i % 2;
    //}

    //BF f1(values); // 0 1 0 1 (xfy = y)

    //for (int i = 0; i < 4; i++)
    //{
    //    values[i] = 1;
    //}

    //BF f2(values); // 1 1 1 1 (xfy = 1)

    //BF f3();
    //f1.show_values();
    //f2.show_values();
    //
    //BF f1andf2 = f1.con(f2);
    //f1andf2.show_values();

    //BF f1orf2 = f1.dis(f2);
    //f1orf2.show_values();

    //f2.otr();
    //f2.show_values();

    //f1.delete_values();
    //f2.delete_values();
    //f1andf2.delete_values();
    //f1orf2.delete_values();
    //delete[] values;

    /*double s1, s2;
    cin >> s1;
    BankAccount ba1(1, "Person1", s1);
    BankAccount ba2(2, "Person2", 0);
    cin >> s2;
    if (ba1.get_money() >= s2)
    {
        ba1.set_money(ba1.get_money() - s2);
        ba2.set_money(s2);                      
    }
    BankAccount ba3 = ba2.new_account();
    cout << ba3.get_money();
    ba1.set_money(ba1.get_money() + ba3.get_money() / 2);
    ba3.set_money(ba3.get_money() / 2);*/

    /*Discipline d1("Ivanov Ivan Ivanovich", 9213, "Math/Friday", "Kreml18");
    Discipline d2("Petrov Petr Petrovich", 8213, "Math/Friday", "Kreml21");
    if (d1.are_compatible(d2))
    {
        d1.unite_dis(d2);
    }
    cout << d1.get_FIO() << ' ' << d1.get_where();*/


}
