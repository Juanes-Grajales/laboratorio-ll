#include <iostream>
#include <time.h>

using namespace std;

int igual(char palabra[],char texto[]);
char convertir(int num);
int main()
{
    int opcion=1;
    while (opcion!=0)
    {
    cout<<"seleccione una opcion"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"1. identificador de letras"<<endl;
    cout<<"2. Comparador de cadenas de caracteres"<<endl;
    cout<<"3. Convertidor de enteros a cadenas de caracteres"<<endl;
    cout<<"4. Eliminador de caracteres repetidos"<<endl;
    cout<<"5. Suma de cadena de caracteres numera en grupos"<<endl;
    cout<<"8. numero de estrellas"<<endl;
    cout<<"10. Suma de numeros amigables"<<endl;

    cin>>opcion;
    switch (opcion)
    {
        case 1:
    {
        char letras[200];//modificar
        char repetidas[26];
        char *dir_repetidas;
        char *dir_letras;
        char *dir_aux;
        char letra=0;
        int aux=199;//modificar
        int iaux=0;
        int contador=1;
        int iteraciones=-1;
        int ciclos=1;
        int a=0;
        srand(time(NULL));


        for(int i=0;i<200;i++) //modificar
        {
            a=65+rand()%(90-65+1);
            letra=a;
            letras[i]=letra;
        }

        dir_letras=letras;

        for(int i=0;i<200;i++) //modificar al final
        {
            cout<<*dir_letras++;
        }
        cout<<""<<endl;

        dir_letras=letras;
        dir_repetidas=repetidas;

        for(int j=0;j<200;j++)//modificar
        {
            dir_repetidas=repetidas;
            for(int i=0;i<27;i++)
            {
                iaux=0;
                if(*dir_letras==*dir_repetidas)
                {
                    dir_letras++;
                    iaux=30;
                    i=30;
                }

                else
                {
                dir_repetidas++;
                }

                if(i==26)
                {
                    iaux=i;
                }

            }

            dir_repetidas=repetidas;

            if(iaux ==26)
            {
                    iteraciones++;

                    dir_aux=dir_letras+1;
                    for(int i=0;i<aux;i++)
                    {
                        if(*dir_letras==*dir_aux)
                        {
                            contador++;
                        }

                        dir_aux++;


                    }


                    cout<<"la letra "<<*dir_letras<<" se repite: "<<contador<<endl;
                    repetidas[iteraciones]=*dir_letras;
                    dir_letras++;
                    aux=199-ciclos; //modificar al final
                    ciclos++;
                    contador=1;


            }
        }

    }
        break;

        case 2:
                    {
                        char palabra[]="luis";
                        char texto[]="Luis";
                        int valor=1;


                        valor=igual(palabra,texto);

                        if(valor==1)
                        {
                            cout<<"Verdadero "<<palabra<<" y "<<texto<<" son iguales"<<endl;

                        }

                        else
                        {
                             cout<<"Falso "<<palabra<<" y "<<texto<<" no son iguales"<<endl;
                        }

                    }
        break;

        case 3:
            {
                int num=0;
                int aux=0;
                int unidades=1;
                int naux=0;
                int aux2=0;
                int negativo=0;

                cout<<"ingrese un valor "<<endl;
                cin>>num;

                if(num<0)
                {
                    num=num*-1;
                    negativo=1;
                }
                naux=num;
                while(naux>=10)
                {
                    naux=naux/10;
                    unidades++;
                }

                aux2=unidades-1;
                char cadena[unidades];
                char *dir_cad;
                dir_cad=cadena;

                for(int i=0;i<unidades;i++)
                {
                    aux=num%10;
                    num=num/10;

                    cadena[aux2]=convertir(aux);
                    aux2=aux2-1;
                }


                if(negativo==1)
                {
                    cout<<"-";
                }
                for(int i=0;i<unidades;i++)
                {
                    cout<<*dir_cad++;
                }
                cout<<""<<endl;
            }
        break;

        case 4:
    {

        char palabra[150];
        char aux[27];
        char reset[27];
        char *dir_aux;
        int letra=0;
        int posicion=0;
        dir_aux=aux;
        cout<<"ingrese una cadena de caracteres"<<endl;
        cin>>palabra;

        for(int i=0;i>=0;i++)
        {
            if(palabra[i]>31 and palabra[i]<127)
            {
                if(palabra[i]==32)
                {
                    if(palabra[i]==palabra[i+1])
                    {
                        i=-2;
                    }

                    else
                    {
                        for(int j=0;j<26;j++)
                        {
                            if(palabra[i]==aux[j])
                            {
                                j=27;
                                letra=1;
                            }
                        }

                        if(letra==0)
                        {
                            aux[posicion]=palabra[i];
                            posicion++;
                        }

                        letra=0;
                    }
                }
                else
                {
                    for(int j=0;j<26;j++)
                    {
                        if(palabra[i]==aux[j])
                        {
                            j=27;
                            letra=1;
                        }
                    }

                    if(letra==0)
                    {
                        aux[posicion]=palabra[i];
                        posicion++;
                    }

                    letra=0;
                }
            }

            else
            {
                i=-2;
            }

        }

        cout<<"original: "<<palabra<<endl;
        cout<<"sin repetidos: ";
        for(int i=0;i<26;i++)
        {
            if(*dir_aux>31 and *dir_aux<127)
            {
                cout<<*dir_aux++;
            }
            else
            {
                i=27;
            }

        }

        cout<<" "<<endl;

        for(int j=0;j<26;j++)
        {
            aux[j]=reset[j];
        }


    }
        break;

        case 5:
    {
        int n;
        char cadena[40];
        int numeros[40];
        int invalido=0;
        int comparador=1;
        int unidades=0;
        int cifras=0;
        int ciclos=0;
        int suma=0;
        int pos=0;
        int aux2=0;
        int salir=1;
        int aux=1;
        int var=0;

        cout<<"ingrese un numero positivo "<<endl;
        cin>>n;

        if(n<1)
        {
            cout<<"numero invalido "<<endl;
            return 0;
        }

        cout<<"ingrese una cadena de caracteres numericos "<<endl;
        cin>>cadena;

        for(int i=0;i>=0;i++)
        {

                if(cadena[i]>47 and cadena[i]<58)
                {

                       if(cadena[i]==48)
                       {
                           numeros[i]=0;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==49)
                       {
                           numeros[i]=1;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==50)
                       {
                           numeros[i]=2;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==51)
                       {
                           numeros[i]=3;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==52)
                       {
                           numeros[i]=4;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==53)
                       {
                           numeros[i]=5;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==54)
                       {
                           numeros[i]=6;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==55)
                       {
                           numeros[i]=7;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==56)
                       {
                           numeros[i]=8;
                           unidades++;
                           comparador=0;
                       }

                       if(cadena[i]==57)
                       {
                           numeros[i]=9;
                           unidades++;
                           comparador=0;
                       }


                }

                if(cadena[i]==32)
                {
                    if(cadena[i+1]==32)
                    {
                        i=-2;
                        comparador=0;
                    }

                    else
                    {
                        numeros[i]=0;
                        unidades++;
                        comparador=0;
                    }
                }

                if(cadena[i]>32 and cadena[i]<48)
                {
                    invalido=1;
                    i=-2;
                    comparador=0;
                }

                if(cadena[i]>57 and cadena[i]<127)
                {
                    invalido=1;
                    i=-2;
                    comparador=0;
                }

                else if(comparador==1)
                {
                    i=-2;
                }
                comparador=1;

        }
        if(invalido==1)
        {
            cout<<"cadena invalida deben ser solamente caracteres numericos "<<endl;
            return 0;
        }
        cifras=unidades;
        for(int i=0;i<n-1;i++)
        {
            aux=aux*10;
        }
        aux2=aux;

        while(salir>0)
        {
            if(unidades%n==0)
            {
                ciclos=unidades/n;
                for(int i=0;i<ciclos;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        suma=(numeros[pos]*aux2)+suma;
                        aux2=aux2/10;
                        pos=pos+1;
                    }
                    aux2=aux;
                }
                salir=0;
            }
            else
            {
               var=unidades-1;
               for(int k=var;k>=0;k--)
               {
                   numeros[k+1]=numeros[k];

               }
               numeros[0]=0;
               unidades++;
            }
        }

        cout<<"Original: ";
        for(int i=0;i<cifras;i++)
        {
            cout<<cadena[i];
        }
        cout<<""<<endl;
        cout<<"Suma: "<<suma<<endl;
    }
        break;

        case 8:
        {
            int estrellas=0;
            short m[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};
            short **mat= new short *[6];
            for(int i=0;i<6;i++)
            {
                mat[i]=m[i];
            }

            for(int fil=1;fil<5;fil++)
            {
                for(int col=1;col<7;col++)
                {
                    if(((mat[fil][col]+mat[fil][col-1]+mat[fil][col+1]+mat[fil+1][col]+mat[fil-1][col])/5.0)>6)
                    {
                        estrellas++;
                    }
                }
            }

            cout<<"cantidad de estrellas: "<<estrellas<<endl;
        }
        break;

        case 10:
            {
                int a, b, c, suma1=0, suma2=0, sumatotal=0;
                cout<<"Ingrese el valor maximo"<<endl;
                cin>>c;

                if(c>284)
                {
                    for(int j=220;j<c;j++)
                    {
                        a=j;
                        for(int k=a+1;k<c;k++)
                        {
                            b=k;
                            for(int i=1;i<a;i++)
                            {
                            if(a % i == 0)suma1+= i;
                            }

                            for(int i=1;i<b;i++)
                            {
                            if(b % i == 0)suma2+= i;
                            }

                            if(suma1 == b && suma2 == a)
                            {
                                sumatotal=sumatotal+a+b;
                                cout<<"la pareja es "<<a<<" "<<b<<endl;
                            }
                            suma1=0;
                            suma2=0;
                        }
                    }
                }

                else
                {
                    cout<<"No hay numeros amigables en este rango"<<endl;
                }
                cout<<"el resultado de la suma es: "<<sumatotal<<endl;

            }
        break;

    default:
        if(opcion !=0)
                        {
                        cout<<"opcion invalida"<<endl;
                        }

                return 0;
    }
    }
}

//DECLARACION DE FUNCIONES//
int igual(char palabra[],char texto[])
{
    int i=0;
    int letras1=0;
    int letras2=0;
    int igual=1;

    for(i=0;i>=0;i++)
    {
        if(palabra[i]>32 and palabra[i]<127)
        {
           letras1++;
        }

        else if(palabra[i]==32)
        {
            if(palabra[i]==palabra[i+1])
            {
                i=-2;
            }
            else
            {
                letras1++;
            }
        }
        else
        {
            i=-2;
        }
    }

    for(i=0;i>=0;i++)
    {
        if(texto[i]>32 and texto[i]<127)
        {
           letras2++;
        }

        else if(texto[i]==32)
        {
            if(texto[i]==texto[i+1])
            {
                i=-2;
            }
            else
            {
                letras2++;
            }
        }
        else
        {
            i=-2;
        }
    }

    if(letras1==letras2)
    {
        for(i=0;i<letras1;i++)
        {
            if(palabra[i]==texto[i])
            {
                igual=1;
            }
            else
            {
                i=letras1+1;
                igual=0;
            }
        }
    }

    else
    {
        igual=0;
    }

    return igual;
}
char convertir(int num)
{
    int cifra=num;
    char aux=0;

    if(cifra==0)
        {
            aux=48;
        }

    if(cifra==1)
        {
            aux=49;
        }

    if(cifra==2)
        {
            aux=50;
        }

    if(cifra==3)
        {
            aux=51;
        }

    if(cifra==4)
        {
            aux=52;
        }

    if(cifra==5)
        {
            aux=53;
        }

    if(cifra==6)
        {
            aux=54;
        }

    if(cifra==7)
        {
            aux=55;
        }

    if(cifra==8)
        {
            aux=56;
        }

    if(cifra==9)
        {
            aux=57;
        }

    return aux;
}

