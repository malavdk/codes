#include<iostream>
using namespace std;

class employee
{
	private:
		char name[20];
		int age;
		float sal;
};

int sort_func(const void*a,const void*b);

int main()
{
	int num,i;
	employee*ptr_to_record;
	
	cout<<"enter number of records";
	cin>>num;
	
	employee**ptr_to_array_of_ptrs=new employee *[num];
	for(i=0;i<num;i++)
	{
		ptr_to_record=new employee;
		cout<<endl<<"enter a record";
		cin>>ptr_to_record->name
		>>ptr_to_record->age
		>>ptr_to_record->sal;
		ptr_to_arrar_of_ptrs[i]=pyr_to_record;
	}
	
	cout<<"you entered the following record"<<endl;
	
		for(i=0;i<num;i++)
	{
		ptr_to_record=ptr_to_array_of_ptrs[i];
		cout<<endl<<ptr_to_record->name<<'\t'
		          <<ptr_to_record->age<<'\t'
		          <<ptr_to_record->sal;
	}
	
	qsort(ptr_to_array_of_ptrs,num,sizeof(ptr_to_array_ofptrs[0]),sort_func);
	
	cout<<endl<<"the sorted records are"<<endl;
	for(i=0;i<num;i++)
	
	{
		ptr_to_record=ptr_to_array_of_ptrs[i];
		cout<<endl<<ptr_to_record->name<<'\t'
		          <<ptr_to_record->age<<'\t'
		          <<ptr_to_record->sal;
	}
	for(i=0;i<num;i++)
	{
		delete ptr_to_array_of_ptrs[i];
		delete[] ptr_to_array_of_ptrs;
		return 0;
    }
    
    int sort_func(const void*a,const void*b)
    {
    	employee *aa,*bb;
    	aa=*((employee**)a);
    	bb=*((employee**)a);
    	return (strcmp(aa->name,bb->name));
	}
}
