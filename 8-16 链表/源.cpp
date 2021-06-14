#include <iostream>
#include <stack>
using namespace std;

struct NODE {
	int date;
	struct NODE *next;

	};
// traversal node

// 创建结点
NODE *creatNode( ) {
	NODE *head ;
	head = new NODE;
	NODE* pnode = head;
	int x;
	while (1) {
		cout<<"please input list date:"<<endl;
		cin>>x;
		if (x != 0) {
			NODE* temp = new NODE;
			cout<<"...link date..."<<endl;
			temp->date = x;
			pnode->next = temp;
			pnode = temp;
			}
		else {
			cout<<"input done"<<endl;\
			break;
			}

		}
	head = head->next; // head 指向头节点
	pnode->next = NULL;
	return head;
	}


void showNodeDate ( NODE *head ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return;
		}
	NODE *pnode = head;
	while (pnode) {
		cout<<pnode->date<<" ";
		pnode = pnode->next;
		}
	return;
	}

// reversal put
void reversShowDate ( NODE *head ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return;
		}
	NODE *pnode = head;
	stack<int> dateStack;
	while (pnode) {
		dateStack.push(pnode->date );
		pnode = pnode->next;
		}
	// pop stack date
	while (!dateStack.empty( )) {
		cout<<dateStack.top( )<<" ";
		dateStack.pop( );
		}
	}

// averagedate
void averageNodeDate ( NODE *head ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return ;
		}
	NODE *pnode =head;
	int sum = 0;
	// count
	int count = 0;
	while (pnode) {
		sum+= pnode->date;
		pnode = pnode->next;
		count++;
		}
	cout<<(double)sum/count<<endl;
	}

// search
NODE *searchNodeDate( NODE *head, int date ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return NULL;
		}
	NODE* pnode = head;
	while (pnode) {
		if (pnode->date == date) {
			cout<<"存在结点"<<endl;
			return pnode;
			}
		pnode = pnode->next;
		}
	cout<<"未找到结点"<<endl;
	return NULL;
	}

// insert
bool insertNode ( NODE *head,int key, NODE *newNode ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return false;
		}
	int count = 1;
	NODE* pnode = head;
	while (pnode) {
		if (key == count) {
			newNode->next = pnode->next;
			pnode->next = newNode;
			return true;
			}
		else {
			count++;
			}
		}
	cout<<"key > length"<<endl;

	return false;

	}

// delete
bool deleNode ( NODE *head, int key ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return false;
		}
	//if (1 == key) {
	//	// 删除头节点
	//	head = head->next;
	//	return true;
	//	}
	NODE* pnode = head;
	NODE* temp = pnode->next;
	int counts = 2;

	while (temp) {
		if (key == counts && temp->next) {
			// 删除的元素不是最后一个
			pnode->next = temp->next;
			return true;
			}
		else if (key == counts && !temp->next) {
			// 删除最后一个元素
			pnode->next = NULL;
			return true;

			}
		else {
			pnode = pnode->next;
			temp = pnode->next;
			counts++;
			}
		}
	cout<<"删除的结点位置不存在"<<endl;
	return false;
	}

// delist
void DelList( NODE *head ) {
	if (!head) {
		cout<<"结点为空"<<endl;
		return;
		}
	NODE* pnode = NULL;
	while (head != NULL) {
		pnode = head;
		head = head->next;
		delete(pnode);
		pnode = NULL;
		}

	cout<<"结点已销毁"<<endl;
	return;
	}


int main ( void ) {
	NODE* head = creatNode( );
	showNodeDate(head );
	cout<<endl;
	reversShowDate(head );
	cout<<endl;
	searchNodeDate(head,1 );
	averageNodeDate(head );
	NODE node;
	NODE* p;
	node.date = 5;
	node.next = NULL;
	p = & node;
	insertNode(head,2,p);
	showNodeDate(head );
	cout<<endl;
	deleNode(head,3 );
	showNodeDate(head );
	cout<<endl;
	//DelList(head );
	/*cout<<endl;
	showNodeDate(head )*/;
	system("pause" );
	return 0;

	}
