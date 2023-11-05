#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
  bool Restaurant;
  virtual void executeRestaurant() = 0;
};

#endif // !COMMAND_H
