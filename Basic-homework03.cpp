/* �p������׹��-�򥻽m�ߧ@�~-�@�~3*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 09:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw
int main(void)
{
   float height,m,weight,BMI; 
    printf("======�ӨϥΪ̪�BMI��T======\n"); 
    printf("�z���������G");
    scanf("%f",&height); //��J���� 
    printf("�z���魫���G");
    scanf("%f",&weight); //��J�魫  
    printf("=============================\n");
    m=height/100; //1����=100���� 
    BMI=weight/(m*m); //BMI���� 
    printf("BMI = %.2f\n\n",BMI); //%[��X�̤p�e��][.���] 
 	system("pause");//�Ȱ�����    
 	return 0;//�^�ǭȬ�0  
}
