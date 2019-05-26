#include<iostream>
int f(int x[], int r, int l, int k)
{
	if (l>=r)
	{
		int mid = 1 + (r + l) / 2;
		if (x[mid] == k) { return k; }
		else if (k > x[mid]) { f(x, mid + 1, l, k); }
		else { f(x, r, mid - 1, k); }
	}
	else {
		return -1;
	}
}

int main()
{
	int x[] = { 1,2,23,12,40 };
	int n = sizeof(x) / sizeof(int);
	int result = f(x, 0, n - 1, 182);
	if (result == -1) { std::cout << "false"; }
	else { std::cout << "result= " << result << "\n"; }
}