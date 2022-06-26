#include "Neuron.hpp"
#include <iostream>

Neuron::Neuron(double val) {
  this->val = val;
  activate();
  derive();
}

void Neuron::activate() {
  this->activatedVal = this->val / (1 + std::abs(this->val)); // Fast Sigmoid
}

void Neuron::derive() {
  this->derivedVal = this->activatedVal / (1 + std::abs(this->activatedVal));
}
