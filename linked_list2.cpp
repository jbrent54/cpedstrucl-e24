#include <iostream>
#include <stdlib.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    void display(){
	}

private:
    Node *head; 
};
main(){
	LinkedList list;
	int a, val;
	menu:	
	cout << "1:Insert into linked list"<<endl;
	cout << "2: Pop"<<endl;
	cout << "3: Exit"<<endl;
	cout << "4. Display"<<endl;
	cin>>a;
	
	cout << endl;
	switch(a){
		case 1:{
			cout << "Input value:";	
			cin>>val;
			list.addValue(val);
			goto menu;
			break;
		}
		case 2:{
			cout << endl;
			cout << "Pop: " << list.popValue();
			cout<<endl;
			goto menu;
			break;
		}
		case 3:{
			cout<<endl;
			cout<< "Exit";
			break;
		}
		case 4:{
			cout<<endl;
			
			cout<<"linklist:" <<node<<endl;
			goto menu;
			break;
		}
	}
}
