#include<iostream>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next;
}LNode, *LinkList;
LinkList CreatList1(LinkList &L) {//ͷ�巨�ӱ�β����ͷ����������L��ͷ���Ϊ�ս�㣬�����Ԫ����������
	LNode *s;
	int x;
	L = new LNode;
	L->next = NULL;
	cin >> x;
	while (x != 999) {
		s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		cin >> x;
	}
	return L;
}
LinkList&CreatList2(LinkList &L) {//β�巨�ӱ�β����ͷ����������L����ͷΪ�գ������Ԫ��˳������
	int x;
	L = new LNode;
	LNode *r = L;
	cin >> x;
	while (x != 999) {
		LNode *s = new LNode;
		s->data = x;
		r->next = s;
		r = s;
		cin >> x;
	}
	r->next = NULL;
	return L;
}
ostream &printList(ostream &out, LinkList &L) {
	while (L->next != NULL) {
		out << L->next->data << '\t';
		L = L->next;
	}
	return out;
}
int main() {
	cout << "creat a LNODE:" << endl;
	LNode *test0;
	cout << "creat list: " << endl;
	CreatList2(test0);
	cout << "print: " << endl;
	printList(cout, test0);
	system("pause");
}