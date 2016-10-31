#include<stdio.h>
#include<string.h>
struct student
		{
		char name[20];
		int reg_no;
		int marks[3];
		int average;
		};
int sortbyint(struct student[],int);
int sortbychar(struct student[],int);


int main()
{
	
	int n,i;
	struct student temp;
	printf("Enter the no of names: ");
	scanf("%d",&n);
	struct student a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter name");
	scanf(" %[^\n]s",a[i].name);
	printf("Enter Registration No and marks");	
	scanf(" %d%d%d%d",&a[i].reg_no,&a[i].marks[0],&a[i].marks[1],&a[i].marks[2]);
	a[i].average=(a[i].marks[0]+a[i].marks[1]+a[i].marks[2])/3;
	}
	
	sortbychar(a,n);
		for(i=0;i<n;i++)
	{
		printf("Name: %s \t %d %%",a[i].name,a[i].average);	
	}
	
	sortbyint(a,n);
		for(i=0;i<n;i++)
	{
		printf("Name: %s \t %d %%",a[i].name,a[i].average);	
	}
	
	return 0;	
}

int sortbychar(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(p[i].name,p[j].name)>=1)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
return 0;
}

int sortbyint(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].average<p[j].average)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
return 0;
}
