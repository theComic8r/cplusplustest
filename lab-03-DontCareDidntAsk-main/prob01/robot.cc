// Please fill in below.
// <Henry Humphrey>
// <CPSC 121L-03>
// <09/19/24>
// <HGHumphrey@csu.fullerton.edu>
// <DontCareDidntAsk>
//
// Lab 6-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "robot.h"

#include <string>

#include "cpputils/graphics/image.h"

// ========================= YOUR CODE HERE =========================
// This implementation file (robot.cc) should hold the
// implementation of member functions declared in the header (robot.h).
//
// Implement the following member functions, declared in robot.h:
//   1. Robot constructor
//   2. SetPosition
//   3. GetX
//   4. GetY
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Robot class.
// ===================================================================

Robot::Robot(const std::string& filename1, const std::string& filename2)
    : filename1_(filename1), filename2_(filename2) {}

void Robot::SetPosition(int x, int y) {
  x_ = x;
  y_ = y;
}

int Robot::GetX() const {
  return x_;
}

int Robot::GetY() const {
  return y_;
}

// You don't need to modify these. These are helper functions
// used to load the robot icons and draw them on the screen.
void Robot::Draw(graphics::Image& image) {
  // Load the image into the icon if needed.
  if (icon1_.GetWidth() <= 0) {
    icon1_.Load(filename1_);
  }
  if (icon2_.GetWidth() <= 0) {
    icon2_.Load(filename2_);
  }
  mod_ = (mod_ + 1) % 2;
  if (mod_ == 1) {
    DrawIconOnImage(icon1_, image);
  } else {
    DrawIconOnImage(icon2_, image);
  }
}

void Robot::DrawIconOnImage(graphics::Image& icon,
                            graphics::Image& image) const {
  int width = icon.GetWidth();
  int height = icon.GetHeight();
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      int x = x_ + i - width / 2;
      int y = y_ + j - height / 2;
      if (y >= 0 && x >= 0 && x < image.GetWidth() && y < image.GetHeight()) {
        image.SetColor(x, y, icon.GetColor(i, j));
      }
    }
  }
}
