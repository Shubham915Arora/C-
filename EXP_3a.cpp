#include <iostream>
using namespace std;

class sulphur;
class hydrogen;

class oxygen
{
		int mval;
	public:
		oxygen(int val)
		{
			mval = val;
		}
		friend void compound(oxygen O, hydrogen H, sulphur S);
};

class hydrogen
{
		int mval;
	public:
		hydrogen(int val)
		{
			mval = val;
		}
		friend void compound(oxygen O, hydrogen H, sulphur S);
};

class sulphur
{
		int mval;
	public:
		sulphur(int val)
		{
			mval = val;
		}
		friend void compound(oxygen O, hydrogen H, sulphur S);
};

void compound(oxygen O, hydrogen H, sulphur S)
{
	if(H.mval == 0)
	{
		cout << "H" << "S" << S.mval << "O" << O.mval << endl;
	}
	if(S.mval == 0)
	{
		cout << "H" << H.mval << "S" << "O" << O.mval << endl;
	}
	if(O.mval == 0)
	{
		cout << "H" << H.mval << "S" << S.mval << "O" << endl;
	}
}

int main()
{
	hydrogen H(2);
	sulphur S(0);
	oxygen O(4);
	compound(O, H, S);
	return 0;
}