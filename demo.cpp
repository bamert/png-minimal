#include "png.hpp"
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  std::string pathin, pathout;
  if(argc == 3){
    pathin = argv[1];
    pathout = argv[2];
  }
  else{
    cout << "usage: ./demo inputimage outputimage" << endl;
    return 1;
  }

  Image img  = readPNG(pathin);
  if(img.isValid()){
    cout << "Image has dimensions " << img.width << " x " << img.height << " x " << img.channels << endl;
    writePNG(img, pathout);
  }
  else{
    cout << "Image invalid" << endl;
  }
  return 0;
}
