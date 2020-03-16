// algorytmy1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <stdio.h> 
void zamiana_8(int x); //zamiana liczby typu int na system "8" 

int licz_0(int y); //zliczanie "0" w binarnej reprezentacji liczby typu int

int licz_1(int z); //zliczanie "1" w binarnej reprezentacji liczby typu int

int nwd(int m, int n); //Obliczanie NDW-- algorytm Eulera(założenie: m > n)
 
int main(int argc, char* argv[]) 
{
    int x = 0;
    int y = 0;
    int z = 1;
    int m = 1, n = 0;
    zamiana_8(x); 
    printf("liczba zer to %d\n", licz_0 (y));
    printf("liczba jedynek to %d\n", licz_1(z));
    //printf("%d", nwd(m,n));

    puts("Hello world!"); 
  
    return 0; 
}
void zamiana_8(int x) //zamiana liczby typu int na system "8" 
{

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
    if (z % 2 == 1) return 1 + licz_1(z / 2);
    return licz_1(z / 2);

}
int nwd(int m, int n) //Obliczanie NDW-- algorytm Eulera(założenie: m > n)
{
    return 0;
}


