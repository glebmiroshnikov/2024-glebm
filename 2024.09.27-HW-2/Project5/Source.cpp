#include<iostream>
int main(int argc, char* argv[])
{
int l1 = 0, w1 = 0, h1 = 0;
int l2 = 0, w2 = 0, h2 = 0;
int lc = 0, wc = 0, hc = 0;
scanf_s("%d %d %d\n", &l1, &w1, &h1);
scanf_s("%d %d %d\n", &l2, &w2, &h2);
scanf_s("%d %d %d", &lc, &wc, &hc);
bool can = false;
can=(l1 <= lc && w1 + w2 <= wc && ((h1 > h2) ? h1 : h2) <= hc) || 
	(w1 <= lc && l1 + w2 <= wc && ((h1 > h2) ? h1 : h2) <= hc) || 
	(l1 <= lc && h1 + h2 <= hc && ((w1 > w2) ? w1 : w2) <= wc) || 
	(w1 <= lc && h1 + h2 <= hc && ((l1 > w2) ? l1 : w2) <= wc) || 
	(l2 <= lc && w2 + w1 <= wc && ((h2 > h1) ? h2 : h1) <= hc) || 
	(w2 <= lc && l2 + w1 <= wc && ((h2 > h1) ? h2 : h1) <= hc) || 
	(l2 <= lc && h2 + h1 <= hc && ((w2 > w1) ? w2 : w1) <= wc) || 
	(w2 <= lc && h2 + h1 <= hc && ((l2 > w1) ? l2 : w1) <= wc);
if (can)
{
	printf("Yes");
}
else
{
	printf("NO");
}
return EXIT_SUCCESS;
}