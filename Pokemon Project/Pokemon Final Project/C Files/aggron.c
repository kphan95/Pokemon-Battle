/* Copyright (c) 2012, Texas Instruments Incorporated
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

*  Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

*  Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

*  Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/


#include "grlib.h"

static const unsigned char pixel_aggron4BPP_COMP_RLE4[] =
{
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x09, 0x07, 0x08, 0x07, 0x09, 0xff, 0xff, 0x9f, 0x09, 0x27, 0x08, 0x27, 0x08, 0xff, 0xff, 0x2f, 0x07, 0x09, 0x07, 0x08, 0x07, 0x08, 0x07, 0x08, 0x07, 0x0e, 
0x07, 0x10, 0x08, 0x03, 0x09, 0xff, 0xff, 0x6f, 0x08, 0x0e, 0x08, 0x07, 0x18, 0x07, 0x09, 0x03, 0x0e, 0x07, 0x08, 0x07, 0x03, 0xff, 0xff, 0x0f, 0x09, 0x08, 0x07, 0x08, 0x07, 0x09, 0x27, 0x09, 0x06, 0x0e, 0x07, 0x08, 0x27, 0x2f, 0x1a, 0xff, 0x7f, 0x04, 0x18, 0x01, 0x09, 0x03, 0x48, 0x03, 0x06, 0x0a, 
0x0e, 0x07, 0x08, 0x07, 0x08, 0x06, 0x2f, 0x1a, 0x0b, 0xff, 0xcf, 0x28, 0x07, 0x06, 0x01, 0x18, 0x06, 0x0b, 0x16, 0x0e, 0x09, 0x08, 0x07, 0x18, 0x1a, 0x0b, 0xff, 0xbf, 0x08, 0x07, 0x08, 0x07, 0x03, 0x07, 0x08, 0x0a, 0x0b, 0x03, 0x0b, 0x06, 0x08, 0x07, 0x08, 0x07, 0x18, 0x2a, 0x0b, 0xff, 0xaf, 0x09, 
0x17, 0x03, 0x09, 0x17, 0x1b, 0x0e, 0x06, 0x3b, 0x0a, 0x17, 0x3a, 0x0b, 0xff, 0x9f, 0x17, 0x08, 0x06, 0x08, 0x07, 0x0e, 0x0a, 0x0b, 0x0a, 0x07, 0x06, 0x5b, 0x3a, 0x1b, 0xff, 0x9f, 0x08, 0x0e, 0x1f, 0x08, 0x0f, 0x09, 0x12, 0x08, 0x04, 0x0a, 0x4b, 0x3a, 0x2b, 0x0f, 0x04, 0xff, 0x6f, 0x01, 0x3f, 0x0a, 
0x04, 0x08, 0x0e, 0x02, 0x18, 0x0a, 0x4b, 0x2a, 0x4b, 0xff, 0xcf, 0x2a, 0x0e, 0x07, 0x08, 0x03, 0x3a, 0x1b, 0x1a, 0x3b, 0x18, 0x09, 0x08, 0xff, 0xbf, 0x9a, 0x2b, 0x0a, 0x2b, 0x4a, 0x07, 0xff, 0xaf, 0x04, 0x0b, 0x8a, 0x4b, 0x5a, 0x0e, 0x04, 0xff, 0x7f, 0x07, 0x1f, 0x04, 0x1b, 0x6a, 0x3b, 0x00, 0x4a, 
0x1b, 0x06, 0xff, 0x6f, 0x09, 0x3f, 0x2b, 0x5a, 0x3b, 0x08, 0x0a, 0x07, 0x2a, 0x1b, 0x08, 0xff, 0x5f, 0x0a, 0x09, 0x08, 0x0a, 0x03, 0x0e, 0x0a, 0x3b, 0x2a, 0x6b, 0x03, 0x0a, 0x0e, 0x1b, 0x0a, 0xff, 0x6f, 0x0a, 0x07, 0x0e, 0x4a, 0x0b, 0x4a, 0x0b, 0x1a, 0x5b, 0x03, 0x1b, 0x08, 0xff, 0x5f, 0x08, 0x0a, 
0x0b, 0x06, 0x1a, 0x0b, 0x1a, 0x0b, 0x4a, 0x1b, 0x1a, 0x7b, 0x03, 0xff, 0x6f, 0x0a, 0x06, 0x0e, 0x2b, 0x1a, 0x0f, 0x5a, 0x0b, 0x3a, 0x5b, 0x0e, 0xff, 0x5f, 0x04, 0x1a, 0x3b, 0x0a, 0x1f, 0x5a, 0x0b, 0x3a, 0x2b, 0x1a, 0x1b, 0x07, 0xff, 0x5f, 0x04, 0x09, 0x0a, 0x2f, 0x04, 0x0f, 0x1a, 0x0b, 0x3a, 0x1b, 
0x4a, 0x0b, 0x18, 0x07, 0x0e, 0x0b, 0xff, 0x5f, 0x04, 0x1a, 0x00, 0x2f, 0x0a, 0x03, 0x6a, 0x0b, 0x3a, 0x09, 0x07, 0x08, 0x07, 0x08, 0x07, 0x06, 0x0a, 0x04, 0xff, 0x2f, 0x2a, 0x0b, 0x2a, 0x08, 0x07, 0x08, 0xaa, 0x0b, 0x18, 0x07, 0x08, 0x07, 0x08, 0x06, 0x0e, 0x09, 0xff, 0x0f, 0x04, 0x3a, 0x0b, 0x1a, 
0x08, 0x07, 0x08, 0x07, 0x0e, 0x9a, 0x0b, 0x08, 0x07, 0x08, 0x07, 0x18, 0x0e, 0x03, 0x06, 0xff, 0x0f, 0x2a, 0x3b, 0x0a, 0x18, 0x07, 0x08, 0x03, 0x0b, 0x7a, 0x1b, 0x07, 0x08, 0x2a, 0x0e, 0x16, 0x03, 0xff, 0x0a, 0x0b, 0x0a, 0x4b, 0x00, 0x2a, 0x0b, 0x0e, 0x06, 0x0b, 0x5a, 0x2b, 0x08, 0x03, 0x0b, 0x2a, 
0x1b, 0x06, 0xef, 0x0a, 0x0e, 0x7f, 0x09, 0x0a, 0x1b, 0x0a, 0x0b, 0x06, 0x0a, 0x7b, 0x06, 0x0b, 0x3a, 0x0b, 0x0a, 0x0b, 0xff, 0x8f, 0x08, 0x0a, 0x1b, 0x0a, 0x1b, 0x03, 0x0e, 0x7b, 0x1a, 0x4b, 0x09, 0xff, 0x9f, 0x0a, 0x1b, 0x0a, 0x1b, 0x06, 0xfb, 0xff, 0x9f, 0x0b, 0x0a, 0x4b, 0x07, 0x08, 0x1a, 0x7b, 
0x0a, 0x3b, 0x04, 0xff, 0x7f, 0x08, 0x06, 0x1a, 0x09, 0x2b, 0x07, 0x4f, 0x4b, 0x4a, 0x0b, 0x07, 0xff, 0x6f, 0x08, 0x0a, 0x03, 0x06, 0x08, 0x06, 0x0a, 0x03, 0x07, 0x8f, 0x08, 0x03, 0x1a, 0x0e, 0x06, 0x0b, 0x0a, 0x06, 0xff, 0xff, 0x9f, 0x0e, 0x06, 0x0b, 0x07, 0x0e, 0x0b, 0x08, 0x07, 0x08, 0xff, 0xff, 
0xbf, 0x08, 0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6f 
};

static const unsigned long palette_aggron4BPP_COMP_RLE4[]=
{
	0x000000, 	0x72a0b7, 	0xc15d65, 	0x728893, 
	0xdee3e6, 	0xfbffff, 	0x6e8084, 	0xcad4d6, 
	0xb1b5b8, 	0xa0a6a6, 	0x5d595a, 	0x343436, 
	0xfcfcfc, 	0xfbfbfb, 	0x878787, 	0xffffff
};

const tImage  aggron4BPP_COMP_RLE4=
{
	IMAGE_FMT_4BPP_COMP_RLE4,
	50,
	50,
	16,
	palette_aggron4BPP_COMP_RLE4,
	pixel_aggron4BPP_COMP_RLE4,
};

void draw_aggron(Graphics_Context * gs, int x, int y)
{
	Graphics_drawImage(gs, &aggron4BPP_COMP_RLE4, x, y);
}
