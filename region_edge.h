#ifndef PYMATCHING2_REGION_EDGE_H
#define PYMATCHING2_REGION_EDGE_H

#include <tuple>

#include "compressed_edge.h"

namespace pm {

class GraphFillRegion;

struct RegionEdge {
    GraphFillRegion* region;
    CompressedEdge edge;
    RegionEdge();
    RegionEdge(GraphFillRegion* region, CompressedEdge edge);

    bool operator==(const RegionEdge& rhs) const;

    bool operator!=(const RegionEdge& rhs) const;
};

}  // namespace pm

#endif  // PYMATCHING2_REGION_EDGE_H
