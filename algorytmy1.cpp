// algorytmy1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <stdio.h> 
void zamiana_8(int x); //zamiana liczby typu int na system "8" 

int licz_0(int y); //zliczanie "0" w binarnej reprezentacji liczby typu int

int licz_1(int z); //zliczanie "1" w binarnej reprezentacji liczby typu int

int nwd(int m, int n); //Obliczanie NDW-- algorytm Eulera(założenie: m > n)
 
int main(int argc, char* argv[]) 
{
    int x = 10;
    int y = 100;
    int z = 100;
    int m = 0, n = 0;

    printf("podaj liczbe x");
    scanf("%d", &x);
    getchar();
    printf("podaj liczbe n");
    scanf("%d", &n);
    getchar();

    printf("liczba w systemie osemkowym to ");
    zamiana_8(x);
    printf("\nliczba zer to %d\n", licz_0 (y));
    printf("liczba jedynek to %d\n", licz_1(z));
    if (m == 0 || n == 0) printf("Nie istnieje NWD dla 0");
    else printf("Najwiekszy wspolny dzielnik %d oraz %d to %d \n", m, n, nwd(m, n));
  
    return 0; 
}
void zamiana_8(int x) //zamiana liczby typu int na system "8" 
{
    if (x >= 8) 
    {
        zamiana_8(x/8);
        printf("%d", x % 8); //wypisanie liczby 
    }
    else printf("%d", x);
} 

int licz_0(int y) //zliczanie "0" w binarnej reprezentacji liczby typu int
{
    if (y == 1) return 0;
    if (y == 0) return 1;
    if (y % 2 == 0) return 1+licz_0(y / 2);
    return licz_0(y / 2);
}
int licz_1(int z) //zliczanie "1" w binarnej reprezentacji liczby typu int
{
    if (z == 1) return 1;
    if (z == 0) return 0;
    if (z % 2 == 1) return 1 + licz_1(z / 2);
    return licz_1(z / 2);

}
int nwd(int m, int n) //Obliczanie NWD-- algorytm Euklidesa(założenie: m > n)
{
    int t = 0;
    t = n;
    if (m < n)
    {
        n = m;
        m = t; // sprawdzam czy liczby są dobrze podane 
    }
    if (m % n == 0) return n;
    else return nwd(n, m % n);
}


