#include <string.h>
int main(int argc, char *argv[])
{
	char raw_input[110];
	int clients = 0,traffic = 0, data_length = 0,i,name_length;
	while(gets(raw_input))
	{
		if(raw_input[0] == '+')
			clients++;
		else if(raw_input[0] == '-')
			clients--;
		else {
				i = 0;
				name_length = 0;
				data_length = 0;
				while(raw_input[i] != ':') {
					name_length++;
					i++;
				}
				
				data_length = strlen(raw_input) - (name_length + 1);
				traffic += data_length * clients;	
		}
	}
	printf("%d",traffic);
	return 0;
}
