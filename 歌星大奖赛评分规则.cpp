/* 程序头部注释开始（为避免提交博文中遇到的问题，将用于表明注释的斜杠删除了）     
* 程序的版权和版本声明部分     
* All rights reserved.     
* 文件名称： txt.c     
* 作    者： liuyongshui     
* 问    题:  在歌星大奖赛中，有10个评委为参赛的选手打分，分数为1~100分。
             选手最后得分为：去掉一个最高分和一个最低分后其余8个分数的平均值。请编写一个程序实现。
* 问题来源:  http://blog.csdn.net/sxhelijian/article/details/7304484
* 完成日期： 2013 年4 月22日     
* 版 本 号： V1.0     
*/    
 
#include <stdio.h>
 
#define num 10				//  十个评委
void  sort(float score[]);    //从小到大排序
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
 
	  for(i=1; i<num-1; i++)   //求去最高最低分后的总分
	  {
	      sum+=score[i]; 
	  }
	  average=sum/8;     //求平均分
	  printf("The player's final scores :%0.2f\n", average);
	  return 0;
}
 
//排序函数
void sort(float score[])    //从小到大排序
{
    int i;
	int j;
    float t;  // 用于交换数
 
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
