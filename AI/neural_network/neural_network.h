#include<iostream>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;

#include "neuron.h"


/* Neural Network Design Ideas:
 *     - Allow for different types of networks
 *     - Make training data completely general (i.e. simply specify a file)
 *       * Maybe even make the network ideally initialize itself to given training data
 *       - Would require knowing approximate functions to represent ideal choices of parameters
 *       
 */


class Neural_Network
{
public:
    Neural_Network(string type);
    Neural_Network(int n_layers, int n_neurons);
    bool load_training_data(string fname);
    void back_propagate(int num_epochs);

private:
    vector<string> training_data;


    


    
};
