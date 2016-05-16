#include "neuron.h"


/* Constructor */
Neuron::Neuron()
{
    m_output = 0;
}


/* Destructor */
Neuron::~Neuron()
{
    for(unsigned short int i=0; i<m_in_links.size(); i++)
    {
        delete m_in_links[i];
    }
    for(unsigned short int i=0; i<m_out_links.size(); i++)
    {
        delete m_out_links[i];
    }

    m_in_links.clear();
    m_out_links.clear();
}


/* Getter Functions */
vector<Path*> Neuron::getInLinks()
{
    return m_in_links;
}

vector<Path*> Neuron::getOutLinks()
{
    return m_out_links;
}

int64_t Neuron::getOutput()
{
    return m_output;
}


/* Setter Functions */
void Neuron::addInLink(Neuron* start, Neuron* end, int64_t random_weight)
{
    m_in_links.push_back(new Path(start, end, random_weight));
}

void Neuron::removeInLink(Neuron* start, Neuron* end)
{
    for(unsigned short int i=0; i<m_in_links.size(); i++)
    {
        if(m_in_links[i]->Start() == start && m_in_links[i]->End() == end)
        {
            m_in_links.erase(m_in_links.begin() + i);
            break;
        }
    }
}

void Neuron::addOutLink(Neuron* start, Neuron* end, int64_t random_weight)
{
    // IMPLEMENT HERE!!!
}

void Neuron::removeOutLink(Neuron* start, Neuron* end) 
{
    // Implement HERE!!!
}


/* Output Calculation */
void Neuron::computeOutput()
{
    int64_t output_sum = 0;
    for(unsigned short int i=0; i<m_in_links.size(); i++)
    {
        output_sum += m_in_links[i]->Weight() * m_in_links[i]->Start()->getOutput(); 
    }
    
    // FINISH HERE.  Scale to a float and put into sigmoid function.  
}


/* Sigmoid Activation Functions */
int64_t Neuron::sigmoidFunction()
{
    // Implement HERE!!!
    return 0;
}

int64_t Neuron::sigmoidFunctionDerivative()
{
    // Implement HERE!!!
    return 0;
}


