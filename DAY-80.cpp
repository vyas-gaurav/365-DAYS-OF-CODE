#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int s=1;
    for(int t=2;t<=n;t++ )
    {
        s=s*t;
    }
    return s;
}

int main() {
    int num;
    cin >> num;
    while(num--)
    {
        int ar[11];
        int temp=0;
        int c=0;int d=0;
        for(int i=0;i<11;i++)
        {
            cin >> ar[i];
        }
        int n;
        cin >> n;
        for(int i=0;i<11;i++)
        {
            for(int j=i;j<11;j++)
            {
                if(ar[j]>ar[i])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        for(int i=0;i<11;i++)
	   {
	       if(ar[i]==ar[n] && i<n)
	       {
	           d++;
	       }
	      if(ar[i]==ar[n])
	      {
	          c++;
	      }
	   }
	   int m=fact(c)/(fact(d)*fact(c-d));
	   cout << m << endl;
	   
        
        
        
    }

}
