#include <stdio.h>

unsigned long long int pangkat(unsigned long long int a, unsigned long long int b)
{
    /*I.S : nilai a dan b positif
      F.S : keluaran berupa pangkat a dan b */
    if (b == 0) return 1;
    else return a * pangkat(a,b-1);
}

unsigned long long int count_nine( unsigned long long int a)
{
    /* I.S : Bilangan a positif
       F.S : Menghitung angka 9 pada bilangan*/
    if (a % 10 != 9) return 0;
    else
    {
        return (1 + count_nine(a/10));
    }
}

unsigned long long int sum_digit(unsigned long long int a)
{
    /*I.S : Bilangan A positif
      F.S : Jumlah digit Bilangan A*/
    if (a % 10 == a) return 1;
    else
    {
        return 1 + sum_digit(a/10);
    }
}

unsigned long long int get_digit(unsigned long long int a, unsigned long long int b)
{
    /*F.S Ambil b digit dari belakang angka A*/
    return (a % pangkat(10,b));
}           


int main(int argc, char *argv[])
{
    unsigned long long int i, temp,temp2,harga,max_harga_turun,jml_nine,harga_turun;
    jml_nine = 0;
 
    scanf("%lld %lld",&harga,&max_harga_turun);
    harga_turun = harga;

    for (i=1;i<=sum_digit(harga);i++)
    {
    temp = get_digit(harga,i) + 1;
    //temp adalah variabel yang digunakan untuk mengambil i digit terakhir
        if (temp <= max_harga_turun)
    {
        temp2 = harga - temp;
        //temp2 merupakan variabel yang menampung selisih harga dengan temp
        if (jml_nine < count_nine(temp2))
        {
            jml_nine = count_nine(temp2);
            harga_turun = temp2;
        }
    }
    }
    printf("%lld",harga_turun);
    return 0;
}
