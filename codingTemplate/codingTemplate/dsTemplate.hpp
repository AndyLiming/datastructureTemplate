#include "head.h"

using namespace std;

//Binary Indexed Tree ��״����
//�ܹ���O(logN)�õ�����ǰ׺�ͣ�����ͣ�
//template<typename T>
class BIT {
private:
  int n;
  vector<int> tree;
public:
  BIT(int _n):n(_n),tree(_n+1){}
  int lowbit(int x) {
    return x & (-x);
  }
  void update(int x) {

  }
  int query(int x) {

  }
};