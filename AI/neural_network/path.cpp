/* ------------------------------------------------------------------------- */
/* Developer: Andrew Kirfman                                                 */
/* Project: Neural Network                                                   */
/*                                                                           */
/* File: ./path.cpp                                                          */
/* Modification Date: 5/15/16                                                */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* User Defined Includes                                                     */
/* ------------------------------------------------------------------------- */

#include "path.h"


Path::Path()
{

}


Path::Path(Neuron* start_neuron, Neuron* end_neuron, int64_t start_weight)
{
    m_start = start_neuron;
    m_end = end_neuron;
    m_weight = start_weight
}


Neuron* Path::Start()
{
    return m_start;
}


Neuron* Path::End()
{
    return m_end;
}


int64_t Path::Weight()
{
    return m_weight;
}


void Path:setStart(Neuron* new_start)
{
    m_start = new_start;
}


void Path::setEnd(Neuron* new_end)
{
    m_end = new_end;
}


void Path::setWeight(int64_t new_weight)
{
    m_weight = new_weight;
}
