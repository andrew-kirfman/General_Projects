
#ifndef NEURON_H
#define NEURON_H

#include<iostream>
#include<math.h>
#include<cmath>
#include<vector>

#include "path.h"

using namespace std;

class Neuron
{
public:

    /* Constructor */
    Neuron();

    /* Destructor */
    ~Neuron();

    /* Getter Functions */
    vector<Path*> getInLinks();
    vector<Path*> getOutLinks();
    int64_t getOutput();

    /* Setter Functions */
    void addInLink(Neuron* start, Neuron* end, int64_t random_weight);
    void removeInLink(Neuron* start, Neuron* end);
    void addOutLink(Neuron* start, Neuron* end, int64_t random_weight);
    void removeOutLink(Neuron* start, Neuron* end);

    /* Output Calculation */
    void computeOutput();

    /* Sigmoid Activation Functions */
    int64_t sigmoidFunction();
    int64_t sigmoidFunctionDerivative();

private:
    
    /* Class Data Members */
    vector<Path*> m_in_links;
    vector<Path*> m_out_links;
    int64_t m_output;
};


#endif
