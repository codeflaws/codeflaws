#include <stdio.h>
#include <string.h>

char s[200000];
char t[200000];

int type[200000];
int gender[200000];
int no;

int ends(char *t,char *u) {
  int l=strlen(t);
  int m=strlen(u);
  int i,j;
  if(m>l) return 0;
  for(j=0,i=l-m;i<l;i++,j++) if(t[i]!=u[j]) return 0;
  return 1;
}

int ismale(char *t) {
  if(ends(t,"lios")) return 1;
  if(ends(t,"etr")) return 1;
  if(ends(t,"initis")) return 1;
  return 0;
}

int isfemale(char *t) {
  if(ends(t,"liala")) return 1;
  if(ends(t,"etra")) return 1;
  if(ends(t,"inites")) return 1;
  return 0;
}

int isadjective(char *t) {
  return ends(t,"lios") || ends(t,"liala");
}

int issub(char *t) {
  return ends(t,"etr") || ends(t,"etra");
}

int isverb(char *t) {
  return ends(t,"initis") || ends(t,"inites");
}

int gettype(char *t) {
  if(isadjective(t)) return 0;
  if(issub(t)) return 1;
  if(isverb(t)) return 2;
  return -1;
}

int getgender(char *t) {
  if(ismale(t)) return 0;
  if(isfemale(t)) return 1;
  return -1;
}

int main(int argc, char *argv[]) {
  int p=0,q,l,i;
  int count[3],gc[2];
  gets(s);
  no=0;
  for(i=0;i<3;i++) count[i]=0;
  gc[0]=gc[1]=0;
  while(sscanf(s+p,"%s%n",t,&q)==1) {
    p+=q;
    type[no]=gettype(t);
    gender[no]=getgender(t);
    if(type[no]<0) goto fail;
    if(gender[no]<0) goto fail;
    count[type[no]]++;
    gc[gender[no]]++;
  }
  if(gc[0] && gc[1]) goto fail;
  if(count[1]>1) goto fail;
  if(no>1 && count[1]<1) goto fail;
  for(i=0;i<no-1;i++) if(type[i]>type[i+1]) goto fail;
  puts("YES");
  goto done;
fail:
  puts("NO");
done:
  return 0;
}
