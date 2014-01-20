#include <iostream>

using namespace std;

void miFuncion()
{
    cout<<"Esta es mi funcion.";
}

int multX2(int x)
{
    return x*2;
}

int suma(int x, int y)
{
    return x+y;
}

int main()
{
    int num;

    for(int i=0;i<3;i++)
    {
        cin >> num;

        if(num%2==0)
        {
            cout<<"es par"<<endl;
        }else
        {
            cout<<"es impar"<<endl;
        }
    }

    int cont=0;
    while(cont<3)
    {
        char c;

        cin >> c;

        switch(c)
        {
            case 'a':
                cout << "es una a"<<endl;
                break;
            case 'b':
                cout << "es una b"<<endl;
                break;
            case 'c':
                cout << "es una c"<<endl;
                break;
            default:
                cout << "es otra letra"<<endl;
                break;
        }

        cont++;
    }

    miFuncion();

    return 0;
}

