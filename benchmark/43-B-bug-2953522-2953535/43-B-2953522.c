int main(int argc, char *argv[])
{
	char str[200];
    int i=0,hash[256]={0};
    gets(str);
    while(str[i])   hash[str[i++]]++;
    gets(str);
    i=0;
    while(str[i])   hash[str[i++]]--;
    i=0;
    while(i<256)
    {
        if(hash[i]>0 && i!=' ')
        {
            printf("NO\n");
            return 0;
        }
        i++;
    }
    printf("YES\n");
    return 0;
}
