//I did the work myself
# include<iostream>
using namespace std;
void AverageOfPNum(){
	int n;    int sumOfPN;   float countOfPN;   float averageOfPN;
	sumOfPN = 0;      countOfPN = 0;
	cout<<"Enter positive integer: ";
	cin>>n;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<n<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<n;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sumOfPN+=x;
		countOfPN+=1;
	    }
	}
	averageOfPN = sumOfPN/countOfPN;
	cout<<"The sum of the the printed prime numbers above is "<<sumOfPN<<endl;
	cout<<"The count of the prime numbers is "<<countOfPN<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<averageOfPN<<endl;
}
int main(){
	AverageOfPNum();
	return 0;
}
