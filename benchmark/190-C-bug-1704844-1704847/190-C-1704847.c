#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* element;

typedef struct node
{
  element data;
  int to_add;
  struct node *left;
  struct node *right;
  struct node *parent;
}one_node;

typedef one_node *tree_t;

void make_null_tree(tree_t *tree)
{
  *tree = NULL;
}

tree_t create_node(element value)
{
  one_node *new = (one_node*) malloc (sizeof(one_node));
  if(new == NULL)
    return NULL;

  new->data = value;
  new->to_add = 1;
  new->left = new->right = new->parent = NULL;
  return new;
}

void out_put (tree_t tree)
{
  tree_t current;
  current = tree;
  printf ("%s", current->data);

  if (strcmp (current->data, "pair") == 0)
    {      
      printf ("<");
      out_put (current->left);
      printf (",");
      out_put (current->right);
      printf (">");
    }
}

int
main (int argc, char *argv[])
{
  int n, i, check;
  char a[100000][5];
  char out[100000];

  i = 0;
  scanf ("%d", &n);
  check = 0;
  while (1)
    {
      scanf ("%s", a[i]);
      if(strcmp (a[i], "int") == 0)
	check++;
      i++;
      if (check == n)
	break;
    }

  gets (out);
  int num = i;

  if (strcmp (a[0], "pair"))
    {
      if (num == 1 && strlen (out) < 2)
	printf ("int");
      else
	printf ("Error occurred");
      return 0;
    }

  tree_t tree, node, current;
  make_null_tree (&tree);
  tree = create_node (strdup (a[0]));
  current = tree;

  for (i = 1; i < num; i++)
    {
      node = create_node (strdup (a[i]));
      if (strcmp (a[i], "int") == 0)
	{
	  node->to_add = 0;
	  if (current->to_add == 1)
	    {
	      current->left = node;
	      current->to_add = 2;
	    }
	  else if (current->to_add == 2)
	    {
	      current->right = node;
	      current->to_add = 0;
	      while (current->parent && current->to_add == 0)
		current = current->parent;
	    }
	  else
	    {
	      printf ("Error occurred");
	      return 0;
	    }
	}
      else
	{
	  if (current->to_add == 1)
	    {
	      node->parent = current;
	      current->left = node;
	      current->to_add = 2;
	      current = node;
	    }
	  else if (current->to_add == 2)
	    {
	      node->parent = current;
	      current->right = node;
	      current->to_add = 0;
	      current = current->parent;
	      current = node;
	    }
	  else
	    {
	      printf ("Error occurred");
	      return 0;
	    }
	}
    }
  
  if (current->to_add > 0)
    {
      printf ("Error occurred");
      return 0;
    }
  out_put (tree);
  return 0;
}
