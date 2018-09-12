#include <iostream>
using namespace std;
struct nodo{
	int val;
	struct nodo *ptr;
	};
int main (){
	struct nodo *inicio;
	struct nodo *nodo1;
	
	nodo1=new struct nodo;
	inicio =nodo1;
	inicio->ptr=NULL;
	inicio->val=10;
	
	nodo1=new struct nodo;
	inicio->ptr=nodo1;
	inicio->ptr->ptr=NULL;
	inicio->ptr->val=20;
	cout<<inicio->val<<endl;
	cout<<inicio->ptr->val;
	
return 0;	
}
