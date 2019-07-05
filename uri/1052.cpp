#include <stdio.h>
#include <string.h>

int main(){
    
  char resposta[30];
  int mes;
  
  scanf("%d",&mes);
  switch(mes){
      
        case 1: strcpy(resposta,"January");
                break;
                
        case 2: strcpy(resposta,"February");
                break;
                
        case 3: strcpy(resposta,"March");
                break;
                
        case 4: strcpy(resposta,"April");
                break;
                
        case 5: strcpy(resposta,"May");
                break;
                
        case 6: strcpy(resposta,"June");
                break;
                
        case 7: strcpy(resposta,"July");
                break;
                
        case 8: strcpy(resposta,"August");
                break;
                
        case 9: strcpy(resposta,"September");
                break;
                
        case 10:strcpy(resposta,"October");
                break;
                
        case 11:strcpy(resposta,"November");
                break;
                
        case 12: strcpy(resposta,"December");
                break;

  }
    printf("%s\n",resposta);
    
  return 0;
}
