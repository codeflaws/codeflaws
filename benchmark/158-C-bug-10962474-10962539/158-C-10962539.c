#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tag {
	struct tag * back;
	char str [ 1000 ];
	struct tag * next;
};

void add ( char * , struct tag ** , struct tag ** );
void my_delete ( struct tag ** , struct tag ** ) ;

int main(int argc, char *argv[]) {
	
	struct tag * head = NULL , * tail = NULL , * prev;
	register int i , j , k;
	int N , index = 0;
	char str [ 1000 ] , a [ 1000 ] , delet [ 3 ] = "..";
	
	scanf ( "%d" , &N );
	while ( getchar () != '\n') continue;
	
	for ( i = 0 ; i < N ; ++i ) {
		gets ( str );
		//printf ("%s\n" , str );
		if ( str [ 0 ] == 'p' && str [ 1 ] == 'w' && str [ 2 ] == 'd' ) {
			//printf ("dffgdf\n");
			if ( head == NULL ) {
				printf ("/\n");
			}
			else {
				prev = head;
				printf ("/");
				while ( prev != NULL ) {
					printf ("%s/" , prev -> str );
					prev = prev -> next;
				}
				printf ("\n");
			}
		}
		else {
			if ( str [ 3 ] == '/' ) {
				head = tail = NULL;
				for (j = 4 ; j < strlen ( str ) + 1; ++j  ) {
					if ( str [ j ] == '/' || j == strlen ( str ) ) {
						if ( strcmp ( a , delet ) == 0 ) {
							my_delete ( &head , &tail );
						}
						else add ( a , &head , &tail );
						for ( k = 0 ; k < strlen ( a ) ; ++k ) {
							a [ k ] = 0;
						}
						index = 0;
					}
					else {
						a [ index ]= str [ j ];
						index ++;
						a [ index ] = '\0';
					}
				}
			}
			else {
				int l = 0;
				for (j = 3 ; j < strlen ( str ) + 1; ++j  ) {
					if ( str [ j ] == '/' || j == strlen ( str ) ) {
						//printf ("%s\n" , a );
						++l;
						if ( strcmp ( a , delet ) == 0 ) {
							my_delete ( &head , &tail );
						}
						else { 
							//if ( l > 1 ) {
								add ( a , &head , &tail );
							//}
						}
						for ( k = 0 ; k < strlen ( a ) ; ++k ) {
							a [ k ] = 0;
						}
						index = 0;
					}
					else {
						a [ index ]= str [ j ];
						index ++;
						a [ index ] = '\0';
					}
				}
			}
		}
	}
	return 0;
}

void add ( char * mas , struct tag ** head , struct tag ** tail ) {
	
	register int i;
	struct tag * prev = ( struct tag * ) malloc ( sizeof ( struct tag ) );
	for ( i = 0 ; i < strlen ( mas ) + 1 ; ++i ) {
		prev -> str [ i ] = mas [ i ]; 
	}
	
	if ( ( * head ) == NULL ) {
		( * head ) = prev;
		( * head ) -> back = NULL;
	}
	else {
		prev -> back = ( * tail );
		( * tail ) -> next = prev;	
	}
	
	( * tail ) = prev;
	( * tail ) -> next = NULL;
	
}

void my_delete ( struct tag ** head , struct tag ** tail ) {
	if ( ( * head ) == ( * tail ) ) {
		( * head ) = NULL;
		( * tail ) = NULL;
		
	}
	else {
		( * tail ) = ( * tail ) -> back;
		( * tail ) -> next = NULL;		
	}
}
