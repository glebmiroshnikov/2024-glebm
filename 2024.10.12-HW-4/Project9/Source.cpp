#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int rostychenikov[100] = { 0 };
	int petyarost = 0;
	int position = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &rostychenikov[i]);
	}
	
	scanf_s("%d", &petyarost);
	
	while (position < n && rostychenikov[position] >= petyarost)
	{
		position++;
	}
	printf("%d", position + 1);

	return 0;
}