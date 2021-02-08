struct Gamepad : Controller {
  Node::Input::Axis x;
  Node::Input::Axis y;
  Node::Input::Button up;
  Node::Input::Button down;
  Node::Input::Button left;
  Node::Input::Button right;
  Node::Input::Button b;
  Node::Input::Button a;
  Node::Input::Button cameraUp;
  Node::Input::Button cameraDown;
  Node::Input::Button cameraLeft;
  Node::Input::Button cameraRight;
  Node::Input::Button l;
  Node::Input::Button r;
  Node::Input::Button z;
  Node::Input::Button start;

  Gamepad(Node::Port);
  auto read() -> n32 override;
};