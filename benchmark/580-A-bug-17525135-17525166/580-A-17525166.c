#include <stdio.h>
#define SIZE 100005

int main(int argc, char *argv[])
{
    int i, n, p, sequence = 1, kefa = -1, values [SIZE];

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
        scanf ("%d", &values [i]);

    for (i = 1; i < n; i++)
    {
        if (values [i] >= values [i - 1])
            sequence++;
        else
        {
            if (sequence > kefa)
                kefa = sequence;

            sequence = 1;
        }
    }

    if (kefa < sequence)
        kefa = sequence;

    printf ("%d\n", kefa);

    return 0;
}
