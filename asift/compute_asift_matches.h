// Copyright (c) 2008-2011, Guoshen Yu <yu@cmap.polytechnique.fr>
// Copyright (c) 2008-2011, Jean-Michel Morel <morel@cmla.ens-cachan.fr>
//
// WARNING:
// This file implements an algorithm possibly linked to the patent
//
// Jean-Michel Morel and Guoshen Yu, Method and device for the invariant
// affine recognition recognition of shapes (WO/2009/150361), patent pending.
//
// This file is made available for the exclusive aim of serving as
// scientific tool to verify of the soundness and
// completeness of the algorithm description. Compilation,
// execution and redistribution of this file may violate exclusive
// patents rights in certain countries.
// The situation being different for every country and changing
// over time, it is your responsibility to determine which patent
// rights restrictions apply to you before you compile, use,
// modify, or redistribute this file. A patent lawyer is qualified
// to make this determination.
// If and only if they don't conflict with any patent terms, you
// can benefit from the following license terms attached to this
// file.
//
// This program is provided for scientific and educational only:
// you can use and/or modify it for these purposes, but you are
// not allowed to redistribute this work or derivative works in
// source or executable form. A license must be obtained from the
// patent right holders for any other use.
//
//
//*------------------------ compute_asift_matches-- -------------------------*/
// Match the ASIFT keypoints.
//
// Please report bugs and/or send comments to Guoshen Yu yu@cmap.polytechnique.fr
//
// Reference: J.M. Morel and G.Yu, ASIFT: A New Framework for Fully Affine Invariant Image
//            Comparison, SIAM Journal on Imaging Sciences, vol. 2, issue 2, pp. 438-469, 2009.
// Reference: ASIFT online demo (You can try ASIFT with your own images online.)
//			  http://www.ipol.im/pub/algo/my_affine_sift/
/*---------------------------------------------------------------------------*/

#include "../sift/library.h"
#include "../sift/sift.h"
#include "../sift/frot.h"
#include "../sift/fproj.h"
#include <vector>
using namespace std;


int compute_asift_matches(int num_of_tilts1, int num_of_tilts2, int w1, int h1, int w2, int h2, int verb, vector< vector< keypointslist > >& keys1, vector< vector< keypointslist > >& keys2, matchingslist &matchings, siftPar &siftparameters);

