#include <stdio.h>

int arr[105];

int main() {
	
	int n, k, m;
	int trig=0;
	
	scanf("%d %d %d",&n,&m,&k);
	
	for(int i=1;i<=m;i++)
	{
		int v;
		scanf("%d",&v);
		arr[v] += 1;
		if(arr[v]==k)
		{
			trig = 1;
			printf("%d",v);
			break;
		}
	}
	
	if(trig==0)
	{
		printf("-1");
	}
		
	return 0;
}