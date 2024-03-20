// calculator  example  with C   there is  condition  and switch mode 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
int main()
{
		int  A ;
		int B ; 
		char C ;
		int D;
		char Ch ;

		// ----------- saisir les numero -------//

		printf("%sveuillez saisir le 1 er num  :\n  " , KBLU );
		scanf(" %d",&A);

		printf("%sveuillez entrer le 2 eme num : \n",KBLU);
		scanf(" %d",&B);
		// --------- saisir  l operation --------//
		printf("%sveuillez saisir l operation :\n  ",KMAG);
		scanf(" %c",&C);
		//----------  condition -------------//

		if (C =='+'){
		D = A+B;
		printf(" le resultat est  : %d \n ",D);
		}
		else if (C =='-'){
			D = A-B;
		printf(" le resultat est  : %d \n ",D);
		}
		else if (C =='/'){
			D = A/B;
		printf(" le resultat est  : %d \n ",D);
		}

		else if (C =='*'){
			D = A*B;
		printf(" le resultat est  : %d \n ",D);
		}
	printf("Voulez vous faire une autre equation ? Y/n \n ");

	scanf(" %c",&Ch);
			switch (Ch) {
 		 case 'Y'|'y':
 		 main();
 		   break;
  			case 'N'|'n':
  			exit(0);
    				break;
  				default:
				}	
}


