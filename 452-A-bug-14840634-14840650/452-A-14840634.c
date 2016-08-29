#include <stdio.h>
#include <stdlib.h>

struct names {
    char *n;
    int l;
    int cross;
};    


int cross (char *s1, char *s2, int l)
{
    int i,k=0;
    for(i=0;i<l;i++)
        if (s1[i]==s2[i])
	    k++;
    return k;
}    


int main(int argc, char *argv[])
{
    int n,i;
    char s[8];
    struct names str[8];
         str[0].n="jolteon";
          str[0].l=7;
         str[1].n="flareon";
	  str[1].l=7;
	 str[2].n="espeon";
	  str[2].l=6;
	 str[3].n="umbreon";
	  str[3].l=7;
	 str[4].n="glaceon";
	  str[4].l=7;
	 str[5].n="sylveon";
	  str[5].l=7;
	 str[6].n="vaporeon";
	  str[6].l=8;
	 str[7].n="leafeon";
          str[7].l=7;
    for(i=0;i<8;i++)
        str[i].cross=0;
    scanf("%d",&n);
    scanf("%s",s);
    int kol,kol_max=0;
    char *need_name;
    for(i=0;i<8;i++)
        if (n==str[i].l) {
	    kol=cross(s,str[i].n,n);
	    if (kol>kol_max) {
	        kol_max=kol;
		need_name=str[i].n;
	    }
	}
    printf("%s",need_name);
    return 0;
    free(need_name);
}    
