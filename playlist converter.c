#include<stdio.h>
int main()
{
	int ton = 0;
	FILE *ptr,*ptr1;
	ptr = fopen("playlist.txt","r+");
	ptr1 = fopen("temp.txt","w");
	char a[100];
	while(fgets(a,sizeof(a),ptr))
	{
		int i=0,t=1;
		for(i=0;i<sizeof(a);i++)
		{
		if(i==0)
		{
			if(a[0]=='\n')
			{
				ton = 1;
				continue;
			}
		}
		if(ton==1)
		{
			a[0] = "\b";
			ton = 0 ;
		}
			if(a[i]==':')
			{
				t=0;
			}
		}
		if(t==1)
		{
			int c =0;
			for(c =0;c<sizeof(a);c++)
			{
		        fputc(a[c],ptr1);
			}
		}
		else
		{
			t++;
		}
	}
	fclose(ptr1);
	fclose(ptr);
	//to delete time and store text in temp file
		int f=1;
	ptr1 = fopen("temp.txt","r+");
	ptr = fopen("playlist.txt","w");
	for(f=1;fgets(a,sizeof(a),ptr1);f++)
	{
		if(f%2!=0)
		{
			int x=0;
			for(x=0;x<sizeof(a);x++)
			{
				if(a[x]=='\n')
				{
					a[x] = ' ';
				}
			}
			fputs(a,ptr);
      fputc('-',ptr);
			printf("%s-",a);
		}
		else{
      fputc(' ',ptr);
			fputs(a,ptr);
			printf(" %s",a);
		}
	}
	fclose(ptr1);
//	remove("temp.txt");
}
