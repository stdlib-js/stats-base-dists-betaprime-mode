/**
* @license Apache-2.0
*
* Copyright (c) 2025 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/stats/base/dists/betaprime/mode.h"

/**
* Returns the mode of a beta prime distribution with first shape parameter `alpha` and second shape parameter `beta`.
*
* @param x        input value
* @param alpha    first shape parameter
* @param beta     second shape parameter
* @return         mode
*
* @example
* double y = stdlib_base_dists_betaprime_mode( 1.0, 2.0 );
* // returns 0.0
*/
double stdlib_base_dists_betaprime_mode( const double alpha, const double beta ) {
	if ( alpha <= 0.0 || beta <= 0.0 ) {
		return 0.0 / 0.0;
	}
	if ( alpha < 1.0 ) {
		return 0.0;
	}
	return ( alpha - 1.0 ) / ( beta + 1.0 );
}
