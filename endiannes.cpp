
include<stdio.h>
void endian()  
{  
    unsigned int i = 1;  
    char *c = (char*)&i;  
    if (*c)  
        cout<<"Little endian";  
    else
        cout<<"Big endian"; 
}  





void show_mem_rep(char *start, int n)  
{ 
    int i; 
    for (i = 0; i < n; i++) 
         printf(" %.2x", start[i]); 
    printf("\n"); 
 endian();
} 
  
/*Main function to call above function for 0x01234567*/
int main() 
{ 
   int i = 0x01234567; 
   show_mem_rep((char *)&i, sizeof(i)); 
   getchar(); 
   return 0; 
} 
