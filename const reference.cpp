#include<iostream>
using namespace std;
/*void change (const int &);

int main()
{
	int i=32;
	change(i);
	cout<<endl<<i;
	return 0;
}
void change(const int &j)
{
	j=45;
}
*/

/*int main()
{
const int i=10;
int & j=i;

cout<<"i="<<i<<"j="<<j;
j=20;
cout<<"i="<<i<<"j="<<j;
return 0;
}/*here we have tied j with i.so changing j should not change i,as we have declared i to be constant so it should not be possible to change it,
even thorough its reference.
however,it reports an error  saying 'cannot con=vert from const int to int &'.the erroe is reported beacuse we have declared j to be a refence
 to an int and not to a const int.*/

int main ()
{
	char *str1="rain Rain here again ";
	char*&str2=str1;
	cout<<endl<<str1<<endl<<str2;
	
	*str1='M';
	cout<<endl<<str1<<endl<<str2;
	
	*str2='P';
	cout<<endl<<str1<<endl<<str2;
	return 0;
}

