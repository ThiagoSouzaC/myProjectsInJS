#include <stdio.h>
 
// stdout, stdin, stderr
 
int main(int argc, char** argv)
{
   FILE *entrada;
   int c;
   int contPalavra = 1;
   int contCaract = 1;
   float media = 0;
 
   if(argc != 2)
   {
       fprintf(stderr,"Erro na chamada do comando.\n");
       fprintf(stderr,"Uso: %s [ARQUIVO ORIGEM] [ARQUIVO DESTINO].\n", argv[0]);
       return 1;
   }
 
   entrada = fopen(argv[1],"rb");
   if(!entrada)
   {
       fprintf(stderr,"Arquivo %s não pode ser aberto para leitura\n", argv[1]);
       return 1;
   }
 
 
   c = fgetc(entrada);
   while(c != EOF)
   {
       if(c == 32) {
           contPalavra++;
       }
       c = fgetc(entrada);
       if(c != 32){
           contCaract++;
       }
   }
 
   printf("contPalavra: %d \n", contPalavra);
   printf("contCaract: %d \n", contCaract);
 
   media = (float)contCaract/contPalavra;
 
   printf("Media de caracteres por palavra: %f", media);
 
 
   fclose(entrada);
   return 0;
}

