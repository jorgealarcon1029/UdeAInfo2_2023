#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    char letra='A';

    for(int i=0;i<7; i++)
    {
        letra=65;
        for(int j=0; j<=i;j++)
         {
           cout << letra;
           letra++;
         }
         for(int j=0; j<11-2*i; j++)
         {
             cout<<' ';
         }

         letra=65+i;
         for(int j=0; j<=i;j++)
          {
            if(letra!='G')
             {
               cout << letra;
             }
            letra--;
          }
     cout<<endl;
    }

    int num;
    cout<<"Ingrese un numero"<<endl;
    cin >>num;
    cout << "El cuadrado de su numero es: "<<pow(num,2)<< endl;
    return 0;
}
