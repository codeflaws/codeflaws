#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[100];
    char b[10];
    int i,l;
    gets(b);
    gets(a);
    l=strlen(a);
    if(b[0]=='R') {
        for(i=0;i<l;i++) {
            if(a[i]=='g'||a[i]=='h'||a[i]=='k'||a[i]=='l'||a[i]=='p') {
                a[i]=a[i]-1;
            }
            else if(a[i]=='f'||a[i]=='t'||a[i]=='j'||a[i]=='.') {
                a[i]=a[i]-2;
            }
            else if(a[i]=='d') {
                a[i]=a[i]+15;
            }
            else if(a[i]=='s') {
                a[i]=a[i]-18;
            }
            else if(a[i]==';') {
                a[i]='l';
            }
            else if(a[i]=='o'||a[i]=='w') {
                a[i]=a[i]-6;
            }
            else if(a[i]=='i'){
                a[i]=a[i]+12;
            }
            else if(a[i]=='u') {
                a[i]=a[i]+4;
            }
            else if(a[i]=='y') {
                a[i]=a[i]-5;
            }
            else if(a[i]=='r') {
                a[i]=a[i]-13;
            }
            else if(a[i]=='e') {
                a[i]=a[i]+18;
            }
            else if(a[i]=='x') {
                a[i]=a[i]+2;
            }
            else if(a[i]=='c') {
                a[i]=a[i]+21;
            }
            else if(a[i]=='v') {
                a[i]=a[i]-19;
            }
            else if(a[i]=='b') {
                a[i]=a[i]+20;
            }
            else if(a[i]=='n') {
                a[i]=a[i]-12;
            }
            else if(a[i]=='m') {
                a[i]=a[i]+1;
            }
            else if(a[i]==',') {
                a[i]=a[i]+65;
            }
            else if(a[i]=='/') {
                a[i]='.';
            }
        }
        printf("%s",a);
    }
    else if(b[0]=='L') {
            for(i=0;i<l;i++) {
                if(a[i]=='f'||a[i]=='g'||a[i]=='j'||a[i]=='k'||a[i]=='o') {
                    a[i]=a[i]+1;
                }
                else if(a[i]=='a') {
                    a[i]='s';
                }
                else if(a[i]=='s') {
                    a[i]='d';
                }
                else if(a[i]=='d') {
                    a[i]='f';
                }
                else if(a[i]=='h') {
                    a[i]='j';
                }
                else if(a[i]=='l') {
                    a[i]=';';
                }
                else if(a[i]=='q') {
                    a[i]='w';
                }
                else if(a[i]=='w') {
                    a[i]='e';
                }
                else if(a[i]=='e') {
                    a[i]='r';
                }
                else if(a[i]=='r') {
                    a[i]='t';
                }
                else if(a[i]=='t') {
                    a[i]='y';
                }
                else if(a[i]=='y') {
                    a[i]='u';
                }
                else if(a[i]=='u') {
                    a[i]='i';
                }
                else if(a[i]=='i') {
                    a[i]='o';
                }
                else if(a[i]=='z') {
                    a[i]='x';
                }
                else if(a[i]=='x') {
                    a[i]='c';
                }
                else if(a[i]=='c') {
                    a[i]='v';
                }
                else if(a[i]=='v') {
                    a[i]='b';
                }
                else if(a[i]=='b') {
                    a[i]='n';
                }
                else if(a[i]=='n') {
                    a[i]='m';
                }
                else if(a[i]=='m') {
                    a[i]=',';
                }
                else if(a[i]==',') {
                    a[i]='.';
                }
                else if(a[i]=='.') {
                    a[i]='/';
                }
        }
        printf("%s",a);
    }

return 0;
}
