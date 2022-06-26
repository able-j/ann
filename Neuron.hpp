#ifndef _NEURON_HPP
#define _NEURON_HPP

class Neuron {

public:
  Neuron(double val);

  void activate();

  void derive();

  double getVal() { return this->val; }
  double getActivatedVal() { return this->activatedVal; }
  double getDerivedVal() { return this->derivedVal; }

private:
  double val;

  double activatedVal;
  double derivedVal;
};

#endif
