#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char leaves[101][21]; // leaves
    int i, j, k, l, new, nleaves,tleaves, ncasos;
    char tree[11], color[11], leaf[21];

        scanf("%d",&tleaves);
        scanf("%s%s",tree,color);
        strcpy(leaf,tree);
        strcat(leaf,color);

        strcpy(leaves[0],leaf); /*min is 1 */
        nleaves = 1;

        for (i=1;i<tleaves;i++) {
            scanf("%s%s",tree,color);
            strcpy(leaf,tree);
            strcat(leaf,color);
             //printf("[%s]\n",&leaf);

            new =1;
            for (l=0; l<nleaves; l++)
              if (!strcmp(leaf,leaves[l])) {
                  new = 0;
                  break;
                  }
            if (new==1) {
            strcpy(leaves[nleaves],leaf);
            nleaves++;
            }
        }
        //printf("nleaves=");
        printf("%d\n",nleaves);
        return 0;
}
