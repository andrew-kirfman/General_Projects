/* ------------------------------------------------------------------------- */
/* Developer: Andrew Kirfman                                                 */
/* Project: Neural Network                                                   */
/*                                                                           */
/* File: ./path.h                                                            */
/* Modification Date: 5/15/16                                                */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* Standard Library Includes                                                 */
/* ------------------------------------------------------------------------- */

#include<stdlib.h>
#include<cstdint>


class Path
{
public:
    
    /* Constructors */
    Path();
    Path(Neuron* start_neuron, Neuron* end_neuron, int64_t start_weight)

    /* Getter functions */
    Neuron* Start();
    Neuron* End();
    int64_t Weight();
    
    /* Setter Functions */
    void setStart(Neuron* new_start);
    void setEnd(Neuron* new_end);
    void setWeight(int64_t new_weight);

private:

    /* Class data members */
    Neuron* m_start;
    Neuron* m_end;
    int64_t m_weight;
};
