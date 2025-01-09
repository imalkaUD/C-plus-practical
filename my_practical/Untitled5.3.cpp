//5.3
#include<iostream>
using namespace std;

	class circle{
		
		private:
			int radius;
			
		public:
			void setRadius(int r);
			float calcArea();
			
	};
	
	
	
int main()
{
	circle c1;
	
	c1.setRadius(7);
	
	cout<<"Area is  "<<c1.calcArea()<<endl;
	
	return 0;
	
}
void circle::setRadius(int r){
	radius = r;
}
float circle::calcArea(){
	float area = (22 / 7.0) * radius * radius;
	return area;
}

