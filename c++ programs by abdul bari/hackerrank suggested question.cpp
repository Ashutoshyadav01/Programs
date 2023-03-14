#include <iostream>

using namespace std;

class rectangle
{   public:
    int l,b;
    display()
    {
        cin>>l>>b;
    }
    
};
class RectangleArea : public rectangle
{ public:
int length,breadth;
  void read_input(int l,int b)
  {
      length=l;
      breadth=b;
  }
  
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input(10,20);
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
