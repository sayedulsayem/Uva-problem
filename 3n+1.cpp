#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	//this is change
    long int n1,n2,cnt,tmp,maxi,f,l;
    while(scanf("%ld%ld",&n1,&n2)!=EOF)
    {
        f=n1;
        l=n2;
        if((n1>0&&n1<1000000)&&(n2>0&&n2<1000000))
        {
            maxi=0;
            if(n1>n2)
                swap(n1,n2);
            for(int i=n2; i>=n1; i--)
            {
                cnt=1;
                tmp=i;
                while(tmp!=1)
                {
                    if(tmp%2==0)
                    {
                        tmp=tmp/2;
                        cnt++;
                    }
                    else
                    {
                        tmp=((3*tmp)+1);
                        cnt++;
                    }
                }
                if(cnt>maxi)
                    maxi=cnt;
            }
            printf("%ld %ld %ld\n",f,l,maxi);
        }
    }
    return 0;
}
