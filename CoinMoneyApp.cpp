// ���� ���� 1�� 2�� ������Ŵ
// cin
#include <iostream>
using std::cout; using std::endl;
using std::cin;				// Exer
//struct �� ����ü ����
struct CoinMoney {
	int c50;
	int c100;
	int c500;
};

inline int CoinMoney_value(const CoinMoney& m)
{
	return (50 * m.c50 + 100 * m.c100 + 500 * m.c500);
}

CoinMoney CoinMoney_add(const CoinMoney& m1, const CoinMoney& m2)
{
	CoinMoney sum;
	sum.c50 = m1.c50 + m2.c50;
	sum.c100 = m1.c100 + m2.c100;
	sum.c500 = m1.c500 + m2.c500;
	return sum;
}

void CoinMoney_print(const CoinMoney& m)
{
	cout << "50�� " << m.c50 << "��, "
		<< "100�� " << m.c100 << "��, "
		<< "500�� " << m.c500 << "��, "
		<< "�� " << CoinMoney_value(m) << "��" << endl;
}
// Exer  bool �� ���ƴϿ��ڷ���
int getInt() {
	int x;
	bool done = false;
	do {
		cin >> x;
		if (cin)
			done = true;
		else {
			cout << "������ �Է��ϼ���." << endl;
			cin.clear();
		}
		while (cin.get() != '\n') {};
	} while (!done);
	return x;
}

auto main(void) -> int
{
	CoinMoney m1, m2, m3;
	// Exer
	cout << "�����ٹ��� �Է��ϼ���." << endl;
	cout << "50��¥�� ����: ";
	m1.c50 = getInt();
	cout << "100��¥�� ����: ";
	m1.c100 = getInt();
	cout << "500��¥�� ����: ";
	m1.c500 = getInt();
	cout << "m1 = ";
	CoinMoney_print(m1);
	m2 = m1;
	cout << "m2 = ";
	CoinMoney_print(m2);
	auto value = CoinMoney_value(m1);
	cout << "m1�� �� " << value << endl;
	m3 = CoinMoney_add(m1, m2);
	cout << "m3 = ";
	CoinMoney_print(m3);

	return 0;
}