#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int stu,min1,max1,min2,max2,min3,max3;

    scanf("%d",&stu);
    scanf("%d",&min1);
    scanf("%d",&max1);
    scanf("%d",&min2);
    scanf("%d",&max2);
    scanf("%d",&min3);
    scanf("%d",&max3);

    int totalmin = min1+min2+min3;
    int totalmax = max1+max2+max3;

    int one,two,three;

    if (totalmax <= stu) {
        one = max1;
        two = max2;
        three = max3;
    } else {
        three = min3;
        two = min2;
        if (max1<stu-min3-min2) {
            one = max1;
        } else {
            one = stu-min3-min2;
        }
        stu -= one+two+three;

        if (stu>0) {
            if (stu>max2-min2) {
                stu -= max2-min2;
                two = max2;
                three += stu;
            } else {
                two = min2+stu;
            }
        }
    }

    printf("%d %d %d",one,two,three);

    return 0;
}
