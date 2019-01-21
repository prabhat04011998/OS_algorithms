#include<iostream>
using namespace std;

void findprocessflow(int process[],int n,int burst_time[])
{
    int smallest=0;
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(burst_time[i]<burst_time[i-1])
        {
            smallest=process[i-1];
            process[i-1]=process[i];
            process[i]=smallest;
            
            temp=burst_time[i-1];
            burst_time[i-1]=burst_time[i];
            burst_time[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<process[i]<<"                 ";
        cout<<burst_time[i]<<"                     ";
        cout<<process[i]<<endl;
    }
   
}
int main() 
{ 
    //process id's 
    int processes[] = { 1, 2, 3}; 
    int n = sizeof processes / sizeof processes[0]; 
  
    //Burst time of all processes 
    int  burst_time[] = {1000, 50,212}; 
    cout<<"initial job   "<<" burst_time     "<<"job assignment order"<<endl;
  
    findprocessflow(processes, n,  burst_time); 
    return 0; 
} 
