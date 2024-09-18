#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1){
		
	
	int a,b,c;
	float gst,x;
	float sum=0,y;
	cout<<endl<<endl;
	cout<<"Enter the count ";
	cin>> a;
	for(int i=0;i<a;i++)
	{
		cin>>b>>c;
		cout<<"Amount= "<<b*c<<endl;
		sum=sum+b*c;
	}
		cout<<endl<<"Total Amount= "<<sum;
	
	
		y=sum*5;
		gst=y/100;	
		cout<<endl<<"Gst amount="<<gst;
		x=sum+gst;
		cout<<endl<<"Total GST Amount= "<<x;
		
	}
	
}
