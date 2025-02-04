// Copyright (C) Gaijin Games KFT.  All rights reserved.
#pragma once

#include <util/dag_stdint.h>

extern const char *debug_output_dir;

void spitfile(const char *name, const char *entry, const char *postfix, uint64_t shader_variant_hash, const void *ptr, size_t len);
