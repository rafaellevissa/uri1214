#include <stdio.h>

int main(void) {
  int casos,i,alunos,j, notas[1000];
  double mediaTurma;
  double aprovados,soma;
  scanf("%d",&casos);
  for(i=0;i<casos;i++){
    aprovados=0;
    soma=0;
    scanf("%d",&alunos);
    for(j=0;j<alunos;j++){
      scanf("%d",&notas[j]);
      soma=soma+notas[j];      
    }
    mediaTurma=soma/alunos;
    for(j=0;j<alunos;j++){
      if(notas[j]>mediaTurma){
        aprovados++;
      }
    }
    printf("%.3lf%%\n",(aprovados/alunos)*100);      
  }
  return 0;
}