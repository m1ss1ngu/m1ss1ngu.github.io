/* ����ͷ��ע�Ϳ�ʼ��Ϊ�����ύ���������������⣬�����ڱ���ע�͵�б��ɾ���ˣ�     
* ����İ�Ȩ�Ͱ汾��������     
* All rights reserved.     
* �ļ����ƣ� txt.c     
* ��    �ߣ� liuyongshui     
* ��    ��:  �ڸ��Ǵ����У���10����ίΪ������ѡ�ִ�֣�����Ϊ1~100�֡�
             ѡ�����÷�Ϊ��ȥ��һ����߷ֺ�һ����ͷֺ�����8��������ƽ��ֵ�����дһ������ʵ�֡�
* ������Դ:  http://blog.csdn.net/sxhelijian/article/details/7304484
* ������ڣ� 2013 ��4 ��22��     
* �� �� �ţ� V1.0     
*/    
 
#include <stdio.h>
 
#define num 10				//  ʮ����ί
void  sort(float score[]);    //��С��������
int main()
{     
	  int i;
	  float sum=0;
	  float average;
	  float score[10];
	  printf("Please enter the scores of ten judges:");
	  for(i=0; i<num; i++)
	  {   
	      scanf("%f", &score[i]);
	  }
	  
	  sort(score);
 
	  for(i=1; i<num-1; i++)   //��ȥ�����ͷֺ���ܷ�
	  {
	      sum+=score[i]; 
	  }
	  average=sum/8;     //��ƽ����
	  printf("The player's final scores :%0.2f\n", average);
	  return 0;
}
 
//������
void sort(float score[])    //��С��������
{
    int i;
	int j;
    float t;  // ���ڽ�����
 
	for(i=0; i<num; i++)
	{
	    for(j=i; j<num; j++)   
		{
		    if(score[i]> score[j])   
			{
			   t= score[i];
			   score[i]= score[j];
			   score[j]=t;
			}
		}
	}
}
