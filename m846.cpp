/*爱丽丝有一手（hand）由整数数组给定的牌。 

现在她想把牌重新排列成组，使得每个组的大小都是 W，且由 W 张连续的牌组成。

如果她可以完成分组就返回 true，否则返回 false。

 

示例 1：

输入：hand = [1,2,3,6,2,3,4,7,8], W = 3
输出：true
解释：爱丽丝的手牌可以被重新排列为 [1,2,3]，[2,3,4]，[6,7,8]。
示例 2：

输入：hand = [1,2,3,4,5], W = 4
输出：false
解释：爱丽丝的手牌无法被重新排列成几个大小为 4 的组。*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
		  int i=hand.size();
		  if(i%W)
			return false;
		  else if(hand.size()==W)
			  return false;
		  else
			  return true;
    }
};
int main()
{
	vector<int> v1{5,1};
	Solution yiku;
	cout<<yiku.isNStraightHand(v1,2);
	return 0;
}
