//m1
/*
#include<iostream>
using namespace std;

struct complex
{
	double real,imag;
};

complex complex_set(double r,double i);
complex complex_add(complex,complex);
void complex_print(complex c);

int main()
{
	complex a,b,c;
	
	a=complex_set(1.0,1.0);
	b=complex_set(2.0,2.0);
	c=complex_add(a,b);
	
	cout<<"c=";
	complex_print(c);
	return 0;
}

 complex complex_set(double r,double i)
{
	complex temp;
	temp.real=r;
	temp.imag=i;
	return temp;
}

void complex_print(complex t)
{
	cout<<"("<<t.real<<','<<t.imag<<")"<<endl;
}

complex complex_add(complex c1,complex c2)
{
	complex temp;
	
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}*/

//beauty of c++

#include<iostream>
using namespace std;

struct complex
{
	double real,imag;
	
};

complex complex_set(double r,double i);
void complex_print(complex c);
complex operator +(complex c1,complex c2);
complex operator -(complex c1,complex c2);

int main()
{
	complex a,b,c,d;
	
	a=complex_set(1.0,1.0);
	b=complex_set(2.0,2.0);
	
	c-a+b;
	d=b+c-a;
	
	cout<<endl<<"c=";
	complex_print(c);
	cout<<endl<<"d=";
	complex_print(d);
	return 0;
	
	complex complex_set(double r,double i)
	{
		complex temp;
		
		temp.real=r;
		temp.imag=i;
		return temp;
	}
	
	void complex_print(complex t)
	{
		cout<<"("<<t.real<<t.imag<<")"<<endl;
	}
	
	complex operator+(complex c1,complex c2)
	{
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}
	
	complex operator-(complex c1,complex c2)
	{
		temp.real=c1.real-c2.real;
		temp.imag=c1.imag-c2.imag;
		return temp;
		
	}
}

