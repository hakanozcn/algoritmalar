#include <iostream>
#include <stdlib.h>
using namespace std;
struct CELL{
	int element;
	struct CELL *next;
};

class List{
public:
	List();
	List(const List &); 
	~List();
	void Add_element(int);
	void print();
	const List& operator=(const List &);
	const List operator+(const List &);
private:
	struct CELL *list_header;
	struct CELL* create_element(int);
};

List::List() {
	cout<<"birinci List constructor cagrildi\n";
	list_header = 0;
}

List::List(const List &list){
	struct CELL *temp1, *temp2;
	cout<<"ikinci List constructor cagrildi\n";
list_header = 0;
if(list.list_header == 0) return;
temp2=list.list_header;
temp1 = list_header = create_element(temp2->element);
temp2 = temp2->next;
while(temp2) {
		temp1->next = create_element(temp2->element);
		temp2 = temp2->next;
		temp1 = temp1->next;
	}
temp1->next = 0;		
}
void List::print() {
	struct CELL *temp_ptr = list_header;
	cout<<endl;
	while(temp_ptr) {
	cout << temp_ptr->element <<" ";
	temp_ptr=temp_ptr->next;
}
cout <<endl;
}

void List::Add_element(int i) {
	struct CELL *new_element_ptr = create_element(i);
	struct CELL *temp;
	if(list_header==0) list_header = new_element_ptr;
	else {
	temp = list_header;
	while(temp->next) temp = temp->next;
	temp->next = new_element_ptr;
}
}

struct CELL* List::create_element(int i) {
struct CELL *ptr;
	ptr = (struct CELL *) malloc(sizeof(struct CELL));
	ptr->element = i;
	ptr->next = 0;
	return ptr;
}

 const List& List::operator=(const List & input_list) {

// herhangi bir constructor veya destructor cagrisi yok

     struct CELL *header;
	 

	 while(list_header) {
        header=list_header;
        list_header=list_header->next;
		free(header);
	 }

     header=input_list.list_header;
	 while(header) {
		 Add_element(header->element);
		 header=header->next;
	 }


	 return *this;
} 



const List List::operator+(const List & input_list){

	List temp(*this);
    struct CELL *header;
	header=input_list.list_header; 
	while(header) {
       temp.Add_element(header->element);
	   header=header->next;
	   }

	return temp;
}

List::~List() {
	struct CELL *temp;
	cout << "List destructor cagrildi\n";
	temp= list_header;
	while(temp) {
	list_header = list_header->next;
	delete temp;
	temp=list_header;
	}
}




main() {
class List list1;
list1.Add_element(10); list1.Add_element(20); list1.Add_element(40);
	list1.print( );
	class List list2;
	list2.Add_element(100); list2.Add_element(200); list2.Add_element(400);
	list2.print();
     
	cout<<"----\n";

 class List list3;
	list3 = list1+list2;
	list3.print( );
    cout <<"----\n"; 
	return 0;


}
