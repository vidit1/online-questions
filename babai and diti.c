#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][2],*p,n,max,j,i,k,s,flag;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(i=0;i<10;i++)
		for(j=0;j<2;j++)
			a[i][j]=0;
		scanf("%d",&s);
		p=(int*)malloc(s);
		for(j=0;j<s;j++)
		{

			scanf("%d",&p[j]);
			max=p[j];
			switch(max)
			{
				case 0:a[0][0]++;
					break;
				case 1:a[1][0]++;
					break;
				case 2:a[2][0]++;
					break;
				case 3:a[3][0]++;
					break;
				case 4:a[4][0]++;
					break;
				case 5:a[5][0]++;
					break;
				case 6:a[6][0]++;
					break;
				case 7:a[7][0]++;
					break;
				case 8:a[8][0]++;
					break;
				case 9:a[9][0]++;
					break;
				default:
					printf("\nff");
			}
		}
		/*printf("\n");
		for(j=0;j<s;j++)
		printf("%d\t",p[j]);
		printf("\n");
		for(j=0;j<10;j++)
		printf("%d\t",a[j][0]);*/
		max=0;
		for(j=0;j<10;j++)
		{
			max=0;
			//printf("\n%d :%d=",j,a[j][0]);
			if(a[j][0]>1)
			{
				flag=0;
				for(k=0;k<s;k++)
				{
					if(a[j][0])
					{
						if(p[k]==j&&flag==0)
						{
							max++;
			//				printf("\t%d",k);
							a[j][0]--;
							flag=1;
						}
						else if(p[k]!=j&&flag==1)
						{
			//				printf("\t%d",k);
							max++;
						}
						else if(p[k]==j&&flag==1)
						{
							max++;
							a[j][0]--;
						}

					}
					else
					{
			//			printf("\t%d\t",max);
						break;
					}
				}
				a[j][1]=max;
			}
			//printf("%d",max);
		}

		max=0;
		for(j=0;j<10;j++)
		{
			if(a[j][1]>max)
				max=a[j][1];
		}
		printf("\n%d",max);
		free(p);
	}
}
