#include <iostream>
using namespace std;

int main ()
{
    int dia, mes, sem, user, cont;
    dia = 0; mes = 0; sem = 3; // Começa do dia 31 de dezembro 2019

    int meses [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Qual dia do ano você quer? Digite de 1 a 366." << endl;
    cin >> user;
    cont = user;


    for (int i=0 ; i < sizeof(meses)/4 ; i++) // Divide por 4 pois cada mês ocupa 4 bytes
    {
        if (sem > 7) {
            sem -= 7;
        }
        if (cont <= meses[i]) {
            dia = cont;
            mes = i+1;
            sem += cont%7;
            cont = 0;
            if (sem > 7) {
                sem -= 7;
            } break;
        } else {
            cont -= meses[i];
            sem += meses[i]%7;
        }
    }

    // Transformar os números em dias da semana
    string ds;
    switch (sem)
    {
        case 1:
        ds = "domingo";
        break;
        case 2:
        ds = "segunda";
        break;
        case 3:
        ds = "terça";
        break;
        case 4:
        ds = "quarta";
        break;
        case 5:
        ds = "quinta";
        break;
        case 6:
        ds = "sexta";
        break;
        case 7:
        ds = "sábado";
        break;
    }
    // Transfomar os números em meses do ano
    string ma;
    switch (mes)
    {
        case 1:
        ma = "janeiro";
        break;
        case 2:
        ma = "fevereiro";
        break;
        case 3:
        ma = "março";
        break;
        case 4:
        ma = "abril";
        break;
        case 5:
        ma = "maio";
        break;
        case 6:
        ma = "junho";
        break;
        case 7:
        ma = "julho";
        break;
        case 8:
        ma = "agosto";
        break;
        case 9:
        ma = "setembro";
        break;
        case 10:
        ma = "outubro";
        break;
        case 11:
        ma = "novembro";
        break;
        case 12:
        ma = "dezembro";
        break;
    }

    cout << "O dia " << user << " equivale a >>> " << dia << " de " << ma 
         <<" num dia de " << ds;

    cin.get();
    return 0;
}