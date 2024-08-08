#include<stdio.h>
#include <stdlib.h>
int main ()
{
  int NUM;
  float WEIGHT,GRAMS;
  printf("SELECT A UNIT OF MASS TO BE CONVERTED\n");
  printf("1. MILLIGRAM\n");
  printf("2. CENTIGRAM\n");
  printf("3. DECIGRAM\n");
  printf("4. KILOGRAM\n");
  printf("5. MEGAGRAM(TON)\n");
  printf("6. OUNCE\n");
  printf("7. POUND\n");
  printf("_________________________\nENTER CHOICE HERE :");
  scanf("%d",&NUM);
  switch(NUM)
  {
    case 19 :    printf("\n SELETED MILLIGRAMS \n");
        break;
    case 2 :    printf("\n SELETED CENTIGRAMS \n");
        break;
    case 3 :    printf("\n SELETED DECIGRAMS \n");
        break;
    case 4 :    printf("\n SELETED KILOGRAMS \n");
        break;
    case 5 :    printf("\n SELETED MEGAGRAMS(TONS) \n");
        break;
    case 6 :    printf("\n SELETED OUNCES\n");
        break;
    case 7 :    printf("\n SELETED POUNDS\n");
        break;
    default :   printf("YOU HAVE ENTERED WRONG CHOICE !!!\n");
       exit(0);
  }

  printf("_________________________\n (NOTE:FOR EASY CONVERSION FIRST WE CONVERT IT TO GRAMS)\n");
  printf("\n ENTER WEIGHT HERE:");
  
  scanf("%f",&WEIGHT);
  switch(NUM)
  {
    case 1 :    GRAMS=WEIGHT/1000;
        printf("\n %.2f MILLIGRAMS IS %.2f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 2 :    GRAMS=WEIGHT/100;
        printf("\n %.4f CENTIGRAMS IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 3 :    GRAMS=WEIGHT/10;
        printf("\n %.4f DECIGRAMS IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 4 :    GRAMS=WEIGHT*1000;
        printf("\n %.4f KILOGRAMS IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 5 :    GRAMS=WEIGHT*1000000;
        printf("\n %.4f TONS IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
        
    case 6 :    GRAMS=WEIGHT*2835/100;
        printf("\n %.4f OUNCES IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
    case 7 :    GRAMS=WEIGHT*45359/100;
        printf("\n %.4f POUNDS IS %.4f GRAMS\n",WEIGHT,GRAMS);
        break;
        exit(0);
  }
    printf("_________________________\n NOW SELECT THE UNIT OF MASS YOU WANT TO CONVERT TO:\n");
  printf(" 1. MILLIGRAM\n");
  printf(" 2. CENTIGRAM\n");
  printf(" 3. DECIGRAM\n");
  printf(" 4. KILOGRAM\n");
  printf(" 5. MEGAGRAM(TON)\n");
  printf(" 6. OUNCE\n");
  printf(" 7. POUND\n_________________________");
  printf("\n ENTER CHOICE HERE :");
  scanf("%d",&NUM);
  switch(NUM)
  {
    case 1 :    printf("\n SELETED MILLIGRAMS \n");
                WEIGHT=GRAMS/1000; 
                printf("\n  CONVERTED WEIGHT IN MILLIGRAMS IS %.4f MILLIGRAMS\n",WEIGHT);
        break;
    case 2 :    printf("\n SELETED CENTIGRAMS \n");
                WEIGHT=GRAMS/100;
                printf("\n CONVERTED WEIGHT IN  CENTIGRAMS IS %.4f CENTIGRAMS\n",WEIGHT);
        break;
    case 3 :    printf("\n SELETED DECIGRAMS \n");
                WEIGHT=GRAMS/10;
                printf("\n CONVERTED WEIGHT IN DECIGRAMS IS %.4f DECIGRAMS\n",WEIGHT);
        break;
    case 4 :    printf("\n SELETED KILOGRAMS \n");
                     WEIGHT=GRAMS/1000;
                      printf("\n CONVERTED WEIGHT IN KILOGRAMS IS %.4f KILOGRAMS\n",WEIGHT);      
       break;
    case 5 :    printf("\n SELETED MEGAGRAMS(TONS)\n");
                WEIGHT=GRAMS/1000000;
                printf("\n CONVERTED WEIGHT IN MEGAGRAMS(TONS) IS %.4f TONS\n",WEIGHT);
        break;
    case 6 :    printf("\n SELETED OUNCES \n");
                WEIGHT=GRAMS/2835*100;
                printf("\n CONVERTED WEIGHT IN OUNCES IS %.4f OUNCES \n",WEIGHT);
        break;
    case 7 :    printf("\n SELETED POUNDS \n");
                WEIGHT=GRAMS/45359*100;
                printf("\n CONVERTED WEIGHT IN POUNDS IS %.4f POUNDS \n",WEIGHT);
        break;
    default :   printf("YOU HAVE ENTERED WRONG CHOICE !!!");
       exit(0);
  }
  return 0 ;
   }
