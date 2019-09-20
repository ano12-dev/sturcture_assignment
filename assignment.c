#include <stdio.h>
#include <string.h>

struct organisation
{
    int org_id;
    char org_name[50];
};
struct employee
{
    int emp_id;
    char emp_name[20];
    struct organisation org;
};

void print(struct employee (*e)[] );

int main()
{
    	struct employee (*e)[5];
    	int i,j,tmp,tmp_org_id;
    	char tmp_name[50],tmp_org_name[50];
    	for(i=0;i<5;i++)
    	{
        	printf(" Enter the name of the employee[%d]: ", i + 1);
        	scanf("%s", e[i]->emp_name);
        	printf(" Enter the id of the employee[%d]: ", i + 1);
        	scanf("%d", &e[i]->emp_id);
		printf(" Enter the name of the organisation where %s works: ",e[i]->emp_name);
		scanf("%s",e[i]->org.org_name);
		printf(" Enter the id of the organisation where %s works: ",e[i]->emp_name);
		scanf("%d",&e[i]->org.org_id);	
    	}
	for(i=0;i<5;i++)
       	{
       		 for(j=i+1;j<5;j++)
       		 {
           		 if(e[i]->emp_id>e[j]->emp_id)
           		 {
               			 tmp = e[i]->emp_id;
               			 strcpy(tmp_name,e[i]->emp_name);
               			 strcpy(tmp_org_name,e[i]->org.org_name);
               			 tmp_org_id = e[i]->org.org_id;
               			 e[i]->emp_id = e[j]->emp_id;
               			 strcpy(e[i]->emp_name,e[j]->emp_name);
              	 		 strcpy(e[i]->org.org_name,e[j]->org.org_name);
              		 	 e[i]->org.org_id = e[j]->org.org_id;
               			 e[j]->emp_id = tmp;
               			 strcpy(e[j]->emp_name,tmp_name);
               			 strcpy(e[j]->org.org_name,tmp_org_name);
               			 e[j]->org.org_id = tmp_org_id;
           		 }
       		 }
    	}
	print(e);
}

void print(struct employee (*e)[5])
{
	int i,j;
	printf("\t\t\t Employee details\n");
    	printf("=================================================================\n");
   	printf("Org Name\t\tOrg Id\t\tEmp Name\t\tEmp Id\n");
   	printf("=================================================================\n");

   	for(i=0;i<5;i++)
   	{
       		printf("%s\t\t\t%d\t\t\t%s\t\t\t%d\n",e[i]->org.org_name,e[i]->org.org_id, e[i]->emp_name, e[i]->emp_id);
   	}
}
