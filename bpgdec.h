#ifndef _BPGDEC_H
#define _BPGDEC_H

#include "libbpg.h"

typedef struct ArrayImage
{
    int w, h, alpha;
    int ** image_array;
} ArrayImage;

ArrayImage get_array(char *filename);

#endif