#include "head.h"

using namespace std;

//Binary Indexed Tree 树状数组
//能够以O(logN)得到任意前缀和（区间和）
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