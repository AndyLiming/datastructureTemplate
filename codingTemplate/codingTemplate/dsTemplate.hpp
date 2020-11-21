#include "head.h"

using namespace std;

//Binary Indexed Tree 树状数组
//能够以O(logN)得到任意前缀和（区间和）
template<typename T>
class BIT {
private:
  int n;
  vector<T> tree;
public:
  BIT(int _n):n(_n),tree(_n+1){}
  int lowbit(int x) {
    return x & (-x);
  }
  void add(int x,T k) {
    while (x <= n) {
      tree[x]+=k;
      x += lowbit(x);
    }
  }
  T query(int x) {
    T ans = 0;
    while (x) {
      ans += tree[x];
      x -= lowbit(x);
    }
    return ans;
  }
};

//Union-Find 并查集
class UF {
private:
  int n;
  vector<int>parent;
public:
  UF(int _n) {
    n = _n;
    parent = vector<int>(_n);
    for (int i = 0; i < n; ++i) parent[i] = i;
  }
  int getParent(int v) {
    if (parent[v] == v) return v;
    else return parent[v];
  }
  void merge(int v, int u) {
    int fv = getParent(v), fu = getParent(u);
    parent[fu] = fv;
    return;
  }
};