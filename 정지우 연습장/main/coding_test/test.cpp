//############################################################
// | cafe       | http://cafe.naver.com/dremdelover          |
// | Q&A        | https://open.kakao.com/o/gX0WnTCf          |
// | business   | ultrasuperrok@gmail.com                    |
//############################################################
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// �ݺ��� ����
// �ݺ��ڴ� �����̳�(��: ����, ����Ʈ ��)�� ��Ҹ� ��ȸ�ϴ� �� ���˴ϴ�.
// �ݺ��ڴ� �����Ϳ� ����ϰ� �����ϸ�, STL���� �߿��� ������ �մϴ�.
// �ݺ��ڸ� ����ϸ� �����̳��� ���� ������ ���������� ��Ҹ� ó���� �� �ֽ��ϴ�.

int main() {
    // ���� ���� �� �ʱ�ȭ
    vector<int> vec = { 1, 2, 3, 4, 5 };

    // ����Ʈ ���� �� �ʱ�ȭ
    list<int> lst = { 10, 20, 30, 40, 50 };

    // ������ �ݺ��ڸ� ����Ͽ� ������ ��Ҹ� ��ȸ�ϰ� ���
    cout << "Vector elements: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // �ݺ��ڰ� ����Ű�� ��Ҹ� ���
    }
    cout << endl; // ���: Vector elements: 1 2 3 4 5

    // ������ �ݺ��ڸ� ����Ͽ� ����Ʈ�� ��Ҹ� ��ȸ�ϰ� ���
    cout << "List elements: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " "; // �ݺ��ڰ� ����Ű�� ��Ҹ� ���
    }
    cout << endl; // ���: List elements: 10 20 30 40 50

    // ������ �ݺ��ڸ� ����Ͽ� ������ ��Ҹ� ��ȸ�ϰ� ���
    cout << "Vector elements in reverse: ";
    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " "; // ������ �ݺ��ڰ� ����Ű�� ��Ҹ� ���
    }
    cout << endl; // ���: Vector elements in reverse: 5 4 3 2 1

    // ������ �ݺ��ڸ� ����Ͽ� ����Ʈ�� ��Ҹ� ��ȸ�ϰ� ���
    cout << "List elements in reverse: ";
    for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        cout << *rit << " "; // ������ �ݺ��ڰ� ����Ű�� ��Ҹ� ���
    }
    cout << endl; // ���: List elements in reverse: 50 40 30 20 10

    return 0;
}

/*
�ݺ����� ����:
- �ݺ��ڴ� �����̳��� ��Ҹ� ���������� �����ϰ� �����ϴ� �� ���˴ϴ�.
- �ݺ��ڸ� ���� �����̳��� ���� ������ ���������� ��Ҹ� ó���� �� �ֽ��ϴ�.

�ݺ����� ����:
1. ������: �پ��� �����̳ʿ� ���� ������ ������� ��Ҹ� ��ȸ�� �� �ֽ��ϴ�.
2. �߻�ȭ: �����̳��� ���� ������ ���� ��Ҹ� ������ �� �ֽ��ϴ�.
3. ���뼺: �˰��� �Լ��� �Բ� ����Ͽ� �ڵ��� ���뼺�� ���Դϴ�.

������ �ݺ��ڿ� ������ �ݺ���:
1. ������ �ݺ���: �����̳��� ó��(begin)���� ��(end)���� ���������� ��Ҹ� �����մϴ�.
    - ����: vector<int>::iterator it;
    - �ʱ�ȭ: it = vec.begin();
    - ���: *it�� ���� �ݺ��ڰ� ����Ű�� ��ҿ� �����մϴ�.
    a
2. ������ �ݺ���: �����̳��� ��(rbegin)���� ó��(rend)���� �������� ��Ҹ� �����մϴ�.
    - ����: vector<int>::reverse_iterator rit;
    - �ʱ�ȭ: rit = vec.rbegin();
    - ���: *rit�� ���� ������ �ݺ��ڰ� ����Ű�� ��ҿ� �����մϴ�.

�ݺ����� �����:
1. �ݺ��� ����: �����̳� Ÿ�Կ� ���� �ݺ��ڸ� �����մϴ�. ��: vector<int>::iterator.
2. �ݺ��� �ʱ�ȭ: begin()�� end(), �Ǵ� rbegin()�� rend() �Լ��� ����Ͽ� �ݺ��ڸ� �ʱ�ȭ�մϴ�.
3. �ݺ��� ���: �ݺ��ڸ� ����Ͽ� ��ҿ� �����ϰ� �����մϴ�.

����:
- ���� ��� ��ȸ: for (it = vec.begin(); it != vec.end(); ++it).
- ����Ʈ ��� ��ȸ: for (it = lst.begin(); it != lst.end(); ++it).
- ������ ��� ��ȸ: for (rit = vec.rbegin(); rit != vec.rend(); ++rit).
- ��� ����: *it �Ǵ� *rit�� ����Ͽ� �ݺ��ڰ� ����Ű�� ��ҿ� �����մϴ�.

�ڵ� ����:
1. ���� ���� �� �ʱ�ȭ: vector<int> vec = {1, 2, 3, 4, 5}; ���͸� �����ϰ� �ʱ�ȭ�մϴ�.
2. ����Ʈ ���� �� �ʱ�ȭ: list<int> lst = {10, 20, 30, 40, 50}; ����Ʈ�� �����ϰ� �ʱ�ȭ�մϴ�.
3. ������ �ݺ��� ���:
    - for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it): ������ �ݺ��ڸ� ����Ͽ� ������ ��Ҹ� ��ȸ�մϴ�.
    - for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it): ������ �ݺ��ڸ� ����Ͽ� ����Ʈ�� ��Ҹ� ��ȸ�մϴ�.
    - *it: ������ �ݺ��ڰ� ����Ű�� ��Ҹ� ����մϴ�.
4. ������ �ݺ��� ���:
    - for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit): ������ �ݺ��ڸ� ����Ͽ� ������ ��Ҹ� �������� ��ȸ�մϴ�.
    - for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit): ������ �ݺ��ڸ� ����Ͽ� ����Ʈ�� ��Ҹ� �������� ��ȸ�մϴ�.
    - *rit: ������ �ݺ��ڰ� ����Ű�� ��Ҹ� ����մϴ�.
*/
