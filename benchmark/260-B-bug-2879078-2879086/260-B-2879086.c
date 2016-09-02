/* B. Ancient Prophesy */
/* time limit per test */
/* 2 seconds */
/* memory limit per test */
/* 256 megabytes */
/* input */
/* standard input */
/* output */
/* standard output */

/* A recently found Ancient Prophesy is believed to contain the exact Apocalypse date. The prophesy is a string that only consists of digits and characters "-". */

/* We'll say that some date is mentioned in the Prophesy if there is a substring in the Prophesy that is the date's record in the format "dd-mm-yyyy". We'll say that the number of the date's occurrences is the number of such substrings in the Prophesy. For example, the Prophesy "0012-10-2012-10-2012" mentions date 12-10-2012 twice (first time as "0012-10-2012-10-2012", second time as "0012-10-2012-10-2012"). */

/* The date of the Apocalypse is such correct date that the number of times it is mentioned in the Prophesy is strictly larger than that of any other correct date. */

/* A date is correct if the year lies in the range from 2013 to 2015, the month is from 1 to 12, and the number of the day is strictly more than a zero and doesn't exceed the number of days in the current month. Note that a date is written in the format "dd-mm-yyyy", that means that leading zeroes may be added to the numbers of the months or days if needed. In other words, date "1-1-2013" isn't recorded in the format "dd-mm-yyyy", and date "01-01-2013" is recorded in it. */

/* Notice, that any year between 2013 and 2015 is not a leap year. */
/* Input */

/* The first line contains the Prophesy: a non-empty string that only consists of digits and characters "-". The length of the Prophesy doesn't exceed 10^5 characters. */
/* Output */

/* In a single line print the date of the Apocalypse. It is guaranteed that such date exists and is unique. */
/* Sample test(s) */
/* Input */

/* 777-444---21-12-2013-12-2013-12-2013---444-777 */

/* Output */

/* 13-12-2013 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int is_dig(char s)
{
  return (s >= '0' &&s <= '9') ? 1 : 0;
}


int is_hyph(char s)
{
  return (s == '-') ? 1 : 0;
}


int stoi (char s)
{
  return s - '0';
}


int stoi_dd_mm(char *s)
{
  return (stoi(s[0])*10)+stoi(s[1]);
}


int stoi_yyyy(char *s)
{
  return stoi(s[0])*1000 + stoi(s[1])*100 + stoi(s[2])*10 +stoi(s[3]);
}


int last_day(int month)
{
  switch (month)
    {
    case 1: return 31; break;
    case 2: return 28; break;
    case 3: return 31; break;
    case 4: return 30; break;
    case 5: return 31; break;
    case 6: return 30; break;
    case 7: return 31; break;
    case 8: return 31; break;
    case 9: return 30; break;
    case 10: return 31; break;
    case 11: return 30; break;
    case 12: return 31; break;
    default: return -1; break;
    }
}


int check_format(char *s, int i)
{
  char dd[2], mm[2], yyyy[4];
  int temp_i = i, j=0;
  // printf("Check format starts... i = %d\n", i);
  for (; i < temp_i + 2; i++)
    {
      if (is_dig(s[i]) != 1)
	return -1;
      dd[j] = s[i];
      j++;
      //printf("dd[i] = %c\n", dd[i]);
      //printf("1 passed\n");
    }
  
  if (s[temp_i+2] != '-')
    return -1;
  //printf("2 passed\n");
  for (i = temp_i+3, j = 0; i < temp_i+5; i++)
    {
      if (is_dig(s[i]) != 1)
	return -1;
      mm[j] = s[i];
      //printf("mm[j] = %c\n", mm[j]);
      ++j;
    }
  //printf("3 passed\n");
  /* printf("dd = %d  mm = %d last day = %d\n", stoi_dd_mm(dd), stoi_dd_mm(mm),  last_day(stoi_dd_mm(mm))); */
  /* printf("%d + %d\n", stoi(dd[0]), stoi(dd[1])); */
  if (stoi_dd_mm(dd) > last_day(stoi_dd_mm(mm)) || stoi_dd_mm(dd) < 1)
    return -1;
  //printf("4 passed\n");
  if (s[temp_i+5] != '-')
    return -1;
  //printf("6 passed\n");
  for (i = temp_i+6, j = 0; i < temp_i+10; i++)
    {
      if (is_dig(s[i]) != 1)
	return -1;
      yyyy[j] = s[i];
      ++j;
    }
  //printf("7 passed\n");
  if (stoi_yyyy(yyyy) >= 2013 && stoi_yyyy(yyyy) <= 2015 && stoi_dd_mm(mm) >= 1 && stoi_dd_mm(mm) <= 12)
    return 1;
  else return -1;
}

static int cmp (const void *s1, const void * s2)
{
  return strcmp(* (char * const *)s1, *(char * const *)s2);
}

void switch_to_yyyymmdd(char **records, int len)
{
  int i, j;
  char tmp[11], rev_tmp[11];
  for (i = 0; i < len; i++)
    {
      strcpy(tmp,records[i]);
      for (j =  0; j < 4; j++)
	rev_tmp[j] = tmp[6+j];
      rev_tmp[4] = '-';
      for (j = 5; j < 7; j++)
	rev_tmp[j] = tmp[j-2];
      rev_tmp[7] = '-';
      for (j = 8; j < 10; j++)
	rev_tmp[j] = tmp[j - 8];
      rev_tmp[10] = '\0';
      strcpy(records[i],rev_tmp);
    }
}

char * max(char **records, int l)
{
  int i, cnt = 0, max = 0, max_indx = 0;
  char tmp[11];
  strcpy(tmp, records[0]);
  for (i = 0; i < l; i++)
    {
      if(strcmp(tmp, records[i])==0)
	{
	  cnt++;
	  // max = cnt;
	}
      else
	{
	  if (max < cnt)
	    {
	      max = cnt;
	      max_indx = i - 1;
	    }
	  strcpy(tmp, records[i]);
	  cnt = 1;
	}
      
    }
  if (max < cnt)
    max_indx = i - 1;
  return records[max_indx];
 
}


void switch_to_ddmmyyyy(char **records, int len)
{
  int i, j;
  char tmp[11], rev_tmp[11];
  for (i = 0; i < len; i++)
    {
      strcpy(tmp,records[i]);
      for (j =  0; j < 2; j++)
	rev_tmp[j] = tmp[8+j];
      rev_tmp[2] = '-';
      for (j = 3; j < 5; j++)
	rev_tmp[j] = tmp[j+2];
      rev_tmp[5] = '-';
      for (j = 6; j < 10; j++)
	rev_tmp[j] = tmp[j - 6];
      rev_tmp[10] = '\0';
      strcpy(records[i],rev_tmp);
    }
}

int main(int argc, char *argv[])
{
  char string[100001];
  char tmp[11];
  scanf("%s", string);
  char **records = malloc(10000*sizeof(*records));
  int i, j = 0, k = -1;
  for (i = 0; string[i] != '\0'; i++)
    {
      if (check_format(string, i) == 1)
	{
	  k++;
	  for (j = 0; j < 10; j++)
	    tmp[j] = string[i + j];
	  tmp[10] = '\0';
	  records[k] = malloc(11*sizeof(char));
	  strcpy(records[k], tmp);
	}
    }  
  int l = k+1;
  switch_to_yyyymmdd(records, l);
  qsort((char**)records, l, sizeof(records[0]), cmp);  
  switch_to_ddmmyyyy(records, l);
  printf("%s\n", max(records, l));
  return 0;
}
