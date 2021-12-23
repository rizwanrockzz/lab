//FIRST COME FIRST SERVE ALGORITHM

#include<stdio.h>

int main(){
        int n,burst[30],arrival[30],sum=0,j,presum=0;
        float t;
        printf("Enter no of jobs : ");
        scanf("%d",&n);

        for(int i=0;i<n;i++){
                printf("Enter arrival  time of P[%d] : ",i+1);
                scanf("%d",&arrival[i]);
                printf("Enter burst  time of P[%d] : ",i+1);
                scanf("%d",&burst[i]);

        }

        for(int i=1;i<n;i++){
                j=i;
                printf("burst[i-1]:%d and arrival[i]:%d\n\n",burst[i-1],arrival[i]);
                while(j>=0){
                        presum = presum+burst[j-1];
                        j--;
                        printf("in while loop\n");
                }
                printf("out of while\n\n");
                sum = sum+(presum-arrival[i]);
                printf("sum : %d\n\n ",sum);
                presum = 0;
        }

        printf("Total sum is : %d",sum);
        t = sum;
        printf("Average waiting time is : %.2f",t/n);
        return 0;

}

