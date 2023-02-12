#include "MergeSort.h"

void CMergeSort::merge_sort(vector<int>& xs) {
	/* In place merge sort of array without recursive. The basic idea
	 * is to avoid the recursive call while using iterative solution.
	 * The algorithm first merge chunk of length of 2, then merge chunks
	 * of length 4, then 8, 16, .... , until 2^k where 2^k is large than
	 * the length of the array
	 */

	int unit = 1;
	while (unit <= xs.size()) {
		for (int h = 0; h < xs.size(); h += unit * 2) {
			int l = h, r = min((int)xs.size(), h + 2 * unit);
			int mid = h + unit;
			// merge xs[h:h + 2 * unit]
			int p = l, q = mid;
			while (p < mid && q < r) {
				// use <= for stable merge merge
				if (xs[p] <= xs[q]) {
					p++;
				}
				else {
					int tmp = xs[q];
					//xs[p + 1:q + 1] = xs[p:q];
					for (int i = q; i > p; i--)
					{
						xs[i] = xs[i - 1];
					}

					xs[p] = tmp;
					p++, mid++, q++;
				}
			}
		}

		unit *= 2;
	}
}


int CMergeSort::MinFromTwoValues(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}