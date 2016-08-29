#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_EXCEPTION 21
#define MAX_LINE 51

enum commands {THROW, CATCH};
enum tries {TRY_N_OCCURED, TRY_OCCURED};

typedef struct node_
{
  char command;
  struct node_ *next;
} node;

typedef struct
{
  char type[MAX_EXCEPTION], occured;
} exception;

node* new (char command)
{
  node *n = malloc (sizeof (node));
  n->command = command;
  n->next = NULL;

  return n;
}

int pop (node ** sp, char *command)
{
  if (*sp == NULL)
    {
      //puts("NEGDE SI POGRESIO!");
      return 0;
    }
  node *tmp = *sp;
  *command = tmp->command;
  *sp = (*sp)->next;
  free (tmp);

  return 1;
}

void push (node ** sp, char command)
{
  if (*sp == NULL)
    {
      *sp = new (command);
      return;
    }

  node *tmp = new (command);
  tmp->next = *sp;
  *sp = tmp;
  return;
}

void remove_blanks (char* line)
{
  int i=0,j=0;
  while(line[i] == ' ' || line[i] == '\t')
    i++;
  
  if (i==0)
    return;
  
  while(line[i])
    line[j++] = line[i++];
  
  line[j] = '\0'; 
}

void remove_blanks_end (char* line)
{
  int i = strlen(line) - 1;
  while(line[i] == ' ')
    i--;
  line[++i] = '\0';
}


int parse(char* line, char* catch_type, char* catch_message)
{
  int type_return, i=0, j=0;
  
  if (line[i] == 't')
  {
    type_return = THROW;
    i+=5;
    while(line[i] != '(')
      i++;
    i++;
    
    while(line[i] == ' ')
      i++;
    
    while(line[i] != ' ' && line[i] != ')')
      catch_type[j++] = line[i++];
    catch_type[j] = '\0';
  }
  else
  {
    type_return = CATCH;
    i+=5;
    while(line[i] != '(')
      i++;
    i++;
    
    while(line[i] == ' ')
      i++;
    
    while(line[i] != ',')
      catch_type[j++] = line[i++];
    catch_type[j] = '\0';
    j=0;
    
    i++;
    while(line[i] != '\"')
      i++;
    i++;
    
    while(line[i] != '\"')
      catch_message[j++] = line[i++];
    catch_message[j] = '\0';
  }
  
  return type_return;
}

int main(int argc, char *argv[])
{
  char line[MAX_LINE], catch_type[MAX_EXCEPTION], catch_message[MAX_EXCEPTION],command;
  node* stack = NULL;
  exception e;
  e.occured = 0;
  e.type[0] = '\0';
  int n,i;
  
  scanf("%d", &n); getchar();
  for(i=0; i<n; i++)
  {
    gets(line); remove_blanks(line); remove_blanks_end(line);
    if (strlen(line) == 0)
      continue;
    //printf("-%s-\n",line);
    if (strcmp(line,"try") == 0)
    {
      if (e.occured == 0)
        push(&stack, TRY_N_OCCURED);
      else
        push(&stack, TRY_OCCURED);      
    }
    else
    {
      if (parse(line, catch_type, catch_message) == CATCH)
      {
        if (stack == NULL)
        {
          puts("Unhandled Exception");
          return 0;
        }
        pop(&stack, &command);
        
        if (command == TRY_N_OCCURED)
        {
          if (strcmp(e.type, catch_type) == 0)
          {
            puts(catch_message);
            return 0;
          }
        }
      }
      else
      {
        e.occured = 1;
        strcpy(e.type, catch_type);
      }
    }
  }
  
  puts("Unhandled Exception");
  return 0;
}