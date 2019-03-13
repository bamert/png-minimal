#include "png.hpp"
#include <iostream>
using namespace std;
int main(){
 Image img;
 // Black and white image
 img  = readPNG("../test-bw.png");
 cout << "Image has dimensions " << img.width << " x " << img.height << " x " << img.channels << endl;
 if(img.channels > 0)
   writePNG(img, "../test-bw-out.png");
 // Color image
 img  = readPNG("../test-color.png");
 cout << "Image has dimensions " << img.width << " x " << img.height << " x " << img.channels << endl;
 if(img.channels > 0)
   writePNG(img, "../test-color-out.png");

}
