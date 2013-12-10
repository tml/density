/*
 * Centaurean Density
 * http://www.libssc.net
 *
 * Copyright (c) 2013, Guillaume Voirin
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Centaurean nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * 18/10/13 22:11
 */

#ifndef DENSITY_METADATA_H
#define DENSITY_METADATA_H

#include "globals.h"
#include "main_header.h"
#include "main_footer.h"
#include "block_header.h"
#include "block_mode_marker.h"
#include "block_footer.h"
#include "density_api.h"
#include "kernel_chameleon.h"
#include "kernel_mandala.h"

#define bitsizeof(x) (8 * sizeof(x))

uint_fast64_t density_metadata_main_structure_overhead(const DENSITY_ENCODE_OUTPUT_TYPE);
uint_fast64_t density_metadata_max_block_structure_overhead(const uint_fast64_t, const DENSITY_COMPRESSION_MODE);
uint_fast64_t density_metadata_max_compressed_length(const uint_fast64_t, const DENSITY_COMPRESSION_MODE, const DENSITY_ENCODE_OUTPUT_TYPE);
uint_fast64_t density_metadata_max_decompressed_length(const uint_fast64_t, const DENSITY_COMPRESSION_MODE);

#endif