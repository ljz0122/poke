#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
#include<iomanip>
#define random(x) (rand()%x)
using namespace std;
int main(void){
    int a,b,c;
    long int b1;
	double a2,b2,c2;
    long int n;
	ofstream SaveFile("poke.txt");
	a2 = b2 = c2 = 0;
	cin>>n;
	srand((int)time(0));
	for(long int i = 0;i<n;i++){
		a = random(3);
		b1 = random(2);
		if(a==0){
			switch (b1){
			case 0:
			b = 1;
			break;
			case 1:
			b = 2;
			break;
			}
		}
		if(a==1){
			switch (b1){
			case 0:
			b = 0;
			break;
			case 1:
			b = 2;
			break;
			}
		}
		if(a==2){
			switch (b1){
			case 0:
			b = 0;
			break;
		    case 1:
			b = 1;
			break;
		    }
	    }
	    if(a==0&&b==1){
	    	c = 2;
	    }
	    if(a==0&&b==2){
	    	c = 1;
	    }
	    if(a==1&&b==0){
	    	c = 2;
	    }
	    if(a==1&&b==2){
	    	c = 0;
	    }
	    if(a==2&&b==0){
	    	c = 1;
	    }
	    if(a==2&&b==1){
	    	c = 0;
	    }
		cout<<" a="<<a<<" b="<<b<<" c="<<c;
		SaveFile<<" a="<<a<<" b="<<b<<" c="<<c;
	    if(a==0){
	    	a2++;
	    }
	    if(b==0){
	    	b2++;
	    }
	    if(c==0){
	    	c2++;
	    }
	}
    SaveFile<<"\n"<<"a="<<a2<<"\n"<<"b="<<b2<<"\n"<<"c="<<c2<<"\n";
    cout<<endl<<"a="<<a2<<endl<<"b="<<b2<<endl<<"c="<<c2<<endl;
    SaveFile<<"\n"<<"a="<<a2/n<<"\n"<<"b="<<b2/n<<"\n"<<"c="<<c2/n<<"\n";
    cout<<"a="<<a2/n<<endl<<"b="<<b2/n<<endl<<"c="<<c2/n<<endl;
    return 0;
}
