#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void menu();
void stackarray();
void stacklist();
bool isFull();
bool isEmpty();
void inputarray(int baru);
void keluararray();
void lihatarray();
void hapusarray();
bool isEmpty();
bool isFull();
void push(int data);
void pop();
void hapus();
void baca();

int data[5];
const int MAX = 4;
int top = -1;
int count = -1;

struct node{
	int data;
	node* next;
};
node *baru;
node *temp;
node *head = NULL;
node *tail = NULL;


int main(){
	menu();
}

void menu(){
	char ulang, pilihan;
	int data;
	do{
		system("cls");
		cout << "          Program Stack            \n";
		cout<<"\nPilih cara yang akan digunakan : \n";
		cout<<"1. Stack Array\n";
		cout<<"2. Stack linked list\n";
		cout<<"3. Exit\n";
    	cout<<"\nMasukkan pilihan Anda : "; cin >> pilihan;
		
    	switch(pilihan){
			case '1' :
            	stackarray();
            	break;
    		case '2' :
    	        stacklist();
        	    break;
			case '3' :
				ulang = 'y';
				break;	        	
      		default :
            	cout<<"\nInput salah\n";
      		}
      		
      	if(pilihan != '1' && pilihan != '2' && pilihan != '3'){
      		ulang = 'Y';
			cout << "Input Ulang";
      		getch();
		}
		else{
			ulang = 'y';
		}
	}
	while(ulang !='y');
}

void stackarray(){
	char ulang,pilihan;
	int data;
	do{
		system("cls");

		cout << "         Stack Array        \n";
		cout<<"\nMenu : \n"<<endl;
		cout<<"1. Input data"<<endl;
		cout<<"2. Keluaran data"<<endl;
    	cout<<"3. Hapus data"<<endl;
    	cout<<"4. Lihat data"<<endl;
    	cout<<"\nPilihan ke : "; cin >> pilihan;
    	
    	switch(pilihan){
    		case '1' :
            	cout << "\nInput data = "; cin >> data;
            	inputarray(data);
            	break;
    		case '2' :
    	        keluararray();
        	    break;
      		case '3' :
				hapusarray();
        	    break;
      		case '4' :
        		lihatarray();
            	break;	       	
      		default :
            	cout<<"\nPilih ulang"<<endl;
      		}
      		
      	cout << "\nKembali ke menu?(y/n)"; cin>>ulang;
	}	
	while(ulang=='y' || ulang=='Y');
}

void stacklist(){
	char ulang,pilihan;
	int data;
	do{
		system("cls");
		cout << "        Stack Linked List       \n";
		cout<<"\nMenu : \n"<<endl;
		cout<<"1. Input data"<<endl;
		cout<<"2. Keluarkan data"<<endl;
    	cout<<"3. Hapus data"<<endl;
    	cout<<"4. Lihat data"<<endl;
    	cout<<"\nPilihan ke : "; cin >> pilihan;
    	
    	switch(pilihan){
    		case '1' :
            	cout << "\nMasukkan data = "; cin >> data;
            	push(data);
            	break;
    		case '2' :
    	        pop();
        	    break;
      		case '3' :
				hapus();
        	    break;
      		case '4' :
        		baca();
            	break;
			default :
            	cout<<"\nPilih ulang"<<endl;
      		}
      		
      	cout << "\nKembali ke menu?(y/n)"; cin>>ulang;
	}	
	while(ulang=='y' || ulang=='Y');
}

//Array
bool isFull1(){
	if(top == MAX){
		return true;
	}
	else{
		return false;
	}
}

bool isEmpty1(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}

void inputarray(int baru){
	if(isFull()){
		cout << "\nStack penuh\n";
	}
	else{
		top++;
		data[top] = baru;
	}
}

void keluararray(){
	if(isEmpty()){
		cout << "\nData belum dinput\n";
	}
	else{
		cout << "\nDatanya adalah " << data[top] << " pada data[" << top << "]\n";
	}
}

void lihatarray(){
	int i = top;
	if(isEmpty()){
		cout << "\nData belum dinput\n";
	}
	else{
		cout << "\nData pada stack adalah = \n";
		while(i >= 0){
			cout << setw(2) << data[i] << "\n" << setw(3) << "|\n";
			i--;
		}
		cout << "head\n";
	}
}

void hapusarray(){
	top = -1;
}


//Linklist
bool isEmpty(){
	if(head == NULL){
		return true;
	}
	else{
		return false;
	}
}

bool isFull(){
	if(count == MAX){
		return true;
	}
	else{
		return false;
	}
}

void push(int data){
	if(isFull()){
		cout << "Stack penuh";
	}
	else{
		if(head == NULL){
			baru = new node;
			baru->data = data;
			baru->next = NULL;
			head = baru;
			tail = head;
		}
		else{
			baru = new node;
			baru->data = data;
			tail->next = baru;
			tail = baru;
			baru->next = NULL;
		}
	}
}

void pop(){
	if(isEmpty()){
		cout << "\nData belum dinput\n";
	}
	else{
		cout << "\nData yang dikeluarkan adalah =\n";
		cout << tail->data;
	}
}

void hapus(){
	if(head == NULL){
		cout <<"\nData belum dinput\n";
	}
	head = NULL;
	cout << "\nData sudah dihapus\n";
}

void baca(){
	if(isEmpty()){
		cout << "\nData belum dinput\n";
	}
	else{
		temp = head;
		cout << "\nData pada stack adalah = " << endl;
		while (temp!=NULL){
			cout << temp->data << "->";
			temp = temp->next;
			}
		cout << "Top" << endl;
	}
}
