//
//  main.cpp
//  dongtaicunchufenpei
//
//  Created by wx on 15/12/9.
//  Copyright © 2015年 wx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    int i,j,temp;
    int n;
    printf("请输入个数：");
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0)
        {
            exit(0);
        }else
        {
            a=(int *)malloc(n*4);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-1-i;i++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
            printf("请再次输入个数：");
            free(a);
        }
    }
    return 0;
}
