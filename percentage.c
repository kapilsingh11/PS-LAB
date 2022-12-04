//find percentage of maths science sanskrit
#include<stdio.h>
int calcpercentage(int science, int maths , int sanskrit);
int main()
{
int percentage=calcpercentage(77,89,90);                  
                                                        //  int maths=89;
                                                        //  int science=98;
                                                        //  int sanskrit=90;
                                                        //  printf("percentage is %d",calcpercentage(science,maths,sanskrit));
printf("percentage is %d",percentage);

}
int calcpercentage(int science, int maths ,int sanskrit ){
int percentage=(science+maths+sanskrit)/3;
return percentage;
}




