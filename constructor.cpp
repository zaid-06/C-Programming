
class complex
{
	int a ,b;
	public:
		complex(int x , int y)   //parameterized Constructor    (1)
		{
			a = x;
			b= y;
		}
		
		complex	(int x)									//   (2)
		{a = x;}
		
		complex()   // default Constructor				//   (3)
		{	}
		
		complex(complex &c)                            // (4)
		{
			a = c.a;
			b = c.b;
		}
};
int main()
{
	complex c1(3, 4)  //c5 = complex(3,4)  ;       // it will call first constructor
	complex c2(3)   //c3=3 ;  // it will call second constructor
	complex c4 ;             //  call 3 constructor
	complex c6(c1)  ;         // call 4 constructor
}





