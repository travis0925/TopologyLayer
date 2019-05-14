#include <torch/extension.h>
#include <vector>

#include "cocycle.h"
#include "interval.h"
#include "complex.h"

// cohomology reduction algorithm
// return barcode

typedef std::map<int,Interval> Barcode;

// perform reduction step on active cocycles Z
// with cocycle x
void reuction_step(const Cocycle &x,\
     std::vector<Cocycle> &Z,\
     Barcode partial_diagram);
void persistence_forward(SimplicialComplex &X, std::vector<double> f);
