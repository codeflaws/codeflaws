/**
 * Codeforces Round #151 (Div. 2)
 * C. Beauty Pageant
General Payne has a battalion of n soldiers. The soldiers' beauty contest is coming up, it will last for k days. Payne decided that his battalion will participate in the pageant. Now he has choose the participants.

All soldiers in the battalion have different beauty that is represented by a positive integer. The value ai represents the beauty of the i-th soldier.

On each of k days Generals has to send a detachment of soldiers to the pageant. The beauty of the detachment is the sum of the beauties of the soldiers, who are part of this detachment. Payne wants to surprise the jury of the beauty pageant, so each of k days the beauty of the sent detachment should be unique. In other words, all k beauties of the sent detachments must be distinct numbers.

Help Payne choose k detachments of different beauties for the pageant. Please note that Payne cannot just forget to send soldiers on one day, that is, the detachment of soldiers he sends to the pageant should never be empty.

Input
The first line contains two integers n, k (1 ≤ n ≤ 50; 1 ≤ k ≤  ) — the number of soldiers and the number of days in the pageant, correspondingly. The second line contains space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 107) — the beauties of the battalion soldiers.

It is guaranteed that Payne's battalion doesn't have two soldiers with the same beauty.

Output
Print k lines: in the i-th line print the description of the detachment that will participate in the pageant on the i-th day. The description consists of integer ci (1 ≤ ci ≤ n) — the number of soldiers in the detachment on the i-th day of the pageant and ci distinct integers p1, i, p2, i, ..., pci, i — the beauties of the soldiers in the detachment on the i-th day of the pageant. The beauties of the soldiers are allowed to print in any order.

Separate numbers on the lines by spaces. It is guaranteed that there is the solution that meets the problem conditions. If there are multiple solutions, print any of them.

Sample test(s)
input
3 3
1 2 3
output
1 1
1 2
2 3 2
input
2 1
7 12
output
1 12 

50 836
43 33 24 13 29 34 11 17 39 14 40 23 35 26 38 28 8 32 4 25 46 9 5 21 45 7 6 30 37 12 2 10 3 41 42 22 50 1 18 49 48 44 47 19 15 36 20 31 16 27
 */

# include <stdio.h>
# include <stdlib.h>


int n, k;
int a[51];

int cmp( const void* a1, const void *a2 )
{
    return ( *(int*)a2 - *(int*)a1 );
}



int main(int argc, char *argv[])
{

    scanf("%d%d", &n, &k);
    int i;
    for (i = 0; i < n; i++)
	scanf("%d", &a[i]);

    qsort( a, n, sizeof(int), cmp );

    int out[51];
    int cnt = 0, size = 0;
    while ( cnt < k ) {
	for (i = 0; i < n-size; i++) {
	    out[size] = a[i];

	    printf("%d", size+1);
	    int j;
	    for ( j = 0; j <= size; j++ ) {
		printf(" %d", out[j]);
	    }
	    printf("\n");
	    cnt++;
	    if ( cnt == k ) break;
	}
	out[size] = a[size];
	size++;
	if ( cnt == k ) break;
    }

    return 0;
}
