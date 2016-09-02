#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char *argv[])
{
    char s_a[7], s_c[8], s_b[7];
    char t_s_a[7], t_s_b[7];
    char plus_1[10] = "1234567890";
    char plus_2[10] = "2345678901";
    int i_a, i_b, i_c, n_a, n_b, n_c;
    int remain_a,remain_b;
    int t_n_a, t_n_b; 
    int i;
    int j;
    int k,h;
    int c_point;
    int lnumflag;
    
    scanf("%d %d", &i_a, &i_b);
    sprintf(s_a,"%d",i_a);
    sprintf(s_b,"%d",i_b);
    
    n_a = strlen(s_a);
    n_b = strlen(s_b);
   
    //printf("%s %d %s %d\n",s_a, n_a, s_b, n_b);   
    
    // b > a 인 경우
    if( i_a < i_b){
        strncpy(s_c,s_b,n_b+1); 
    }
    else if(n_a == n_b){ // 자리수가 같은경우
        for(i = 0 ; i < 7 ; i++ )
          s_c[i+1] = s_b[i];
        s_c[0] = '1';
    }
    else{ // a의 자리수가 b의 자리수보다 큰경우
        i = j = 0;
        remain_a = n_a;
        remain_b = n_b;
        while(1){
          
          if( i == n_a && j == n_b){ // 탐색 후 동시에 끝난경우(정확히 b의 luckynum 포함)
              for(i = n_a - 1 ; i >= 0 ; i--){
                  if( s_a[i] != '4' && s_a[i] != '7'){
                      j = i;
                      while(1){
                        if(s_a[j] == '9'){
                            s_a[j] = '0';
                            j--;
                            if(j == -1){
                              for(i = 0 ; i < 7 ; i++ )
                                  s_c[i+1] = s_a[i];
                              s_c[0] = '1';
                              break;
                            }
                        }
                        else if(s_a[j] == '3' || s_a[j] == '6'){ 
                          strncpy(s_c,s_a,n_a+1);
                          s_c[j] = plus_2[s_c[j]-48];
                          break;
                        }
                        else{
                          strncpy(s_c,s_a,n_a+1);
                          s_c[j] = plus_1[s_c[j]-48];
                          break;  
                        }
                      }
                      break;
                  }
              }
              break;
          }
          else if(remain_a < remain_b){ // a가 먼저 끝나는경우 (b가 남음)
          
              strncpy(s_c,s_a,n_a+1);
              h=1;
              for(k = j ; k < n_b ; k++){
                s_c[n_a-h] = s_b[n_b-h];   
                h++;
              }
              if(s_a[i-1] > s_c[i-1]){
                k = i-2;
                //printf("%c %c\n",s_c[k], s_c[k+1]);
                    while(1){
                        if(s_c[k] < s_b[j]){
                            if(s_c[k] + 1 >= s_b[j]){
                            s_c[k] = s_b[j];
                            s_c[n_a-j-1] = '0';
                            break;
                            }
                        }
                        if(s_a[k] == '9'){
                            s_c[k] = '0';
                            k--;
                            if(k == -1){
                              for(i = n_a-1 ; i >= 0 ; i-- )
                                  s_c[i+1] = s_c[i];
                              s_c[0] = '1';
                              break;
                            }
                        }
                        else if(s_a[k] == '3' || s_a[k] == '6'){ 
                          //strncpy(s_c,s_a,n_a+1);
                          s_c[k] = plus_2[s_c[k]-48];
                          break;
                        }
                        else{
                            
                            if(s_a[k] != '4' && s_a[k] != '7'){
                                s_c[k] = plus_1[s_c[k]-48];
                                break;
                            }
                            else{
                              k--;
                            }
                          //strncpy(s_c,s_a,n_a+1);
                            
                        }
                      }
                      break;
              }
              break;
          }
          else if(j == n_b && i < n_a){ 
              lnumflag = 0;
              k = i;
              
              while(1){
                  if(s_a[k] == '4' || s_a[k] == '7'){
                      
                      for(h = 0; h < k ; h++){
                          s_c[h] = s_a[h];
                      }
                      s_c[k] = plus_1[s_a[k]-48];
                      for(h = k+1 ; h < n_a ; h++){
                          s_c[h] = '0';
                      }
                      break;
                  }
                  else if(k == n_a-1){
                      //break;
                    while(1){
                        if( s_a[k] == '9'){
                            s_a[k] = '0';
                            k--;
                        }
                        else{
                            if(s_a[k] == '4' || s_a[k] == '7'){
                                strncpy(s_c,s_a,n_a+1);
                                s_c[k] = plus_1[s_a[k]-48];
                                s_c[n_a-1] = '1';
                                break; 
                            }
                            else if(s_a[k] == '3' || s_a[k] == '6'){ 
                              strncpy(s_c,s_a,n_a+1);
                              s_c[k] = plus_2[s_a[k]-48];
                              break;
                            }
                            else{
                                strncpy(s_c,s_a,n_a+1);
                                s_c[k] = plus_1[s_a[k]-48];
                                break;  
                            }
                        }
                    }
                    break;
                  }
                  else{
                        k++;
                  }
              }
              break;
          }
          else if(s_a[i] == s_b[j] ){
            i++; j++;
            remain_a--; remain_b--;
          }
          else{
              if(s_a[i] == '4' || s_a[i] == '7'){ // b가 아닌 lucky num을 만난 경우
                  s_c[i] = plus_1[s_a[i]-48];
                  for(h = 0 ; h < i ; h++){
                      s_c[h] = s_a[h];
                  }
                  for(h = i+1 ; h < n_a - remain_b ; h++){
                      s_c[h] = '0';
                  }
                  
                  for( h = n_a - remain_b ; h < n_a ; h++){
                      s_c[h] = s_b[j++];
                  }
                  h = n_a - remain_b;
                  if(s_c[h] < s_a[h]){
                      k = h-1;
                     while(1){
                        if( s_a[k] == '9'){
                            s_c[k] = '0';
                            k--;
                            if(k == -1){
                              for(i = n_a-1 ; i >= 0 ; i-- )
                                  s_c[i+1] = s_c[i];
                              s_c[0] = '1';
                              break;
                            }
                        }
                        else{
                            if(s_a[k] == '4' || s_a[k] == '7'){
                               // strncpy(s_c,s_a,n_a+1);
                                s_c[k] = plus_1[s_a[k]-48];
                                s_c[n_a-1] = '1';
                                break; 
                            }
                            else if(s_a[k] == '3' || s_a[k] == '6'){ 
                             // strncpy(s_c,s_a,n_a+1);
                              s_c[k] = plus_2[s_a[k]-48];
                              break;
                            }
                            else{
                                //strncpy(s_c,s_a,n_a+1);
                                s_c[k] = plus_1[s_a[k]-48];
                                break;  
                            }
                        }
                    } 
                  }
                  
                  break;
              }
              i++; remain_a--;
          }
        } 
    }
    
    i_c = atoi(s_c);
    printf("%d",i_c);
    
    return 0;
}

