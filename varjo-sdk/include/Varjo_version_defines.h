// Copyright 2019 Varjo Technologies Oy. All rights reserved.

// This file is automatically generated.
// DO NOT MODIFY.

#ifndef VARJO_VERSION_DEFINES_H
#define VARJO_VERSION_DEFINES_H

#define VARJO_MAKE_VERSION(major, minor, patch, build) \
    (((uint64_t)major << 48) | ((uint64_t)minor << 32) | ((uint64_t)patch << 16) | (uint64_t)build)

#define VARJO_VERSION_GET_MAJOR(version) ((version >> 48) & 0xffff)
#define VARJO_VERSION_GET_MINOR(version) ((version >> 32) & 0xffff)
#define VARJO_VERSION_GET_PATCH(version) ((version >> 16) & 0xffff)
#define VARJO_VERSION_GET_BUILD(version) (version & 0xffff)

#define VARJO_VERSION_MAJOR 4
#define VARJO_VERSION_MINOR 4
#define VARJO_VERSION_PATCH 0
#define VARJO_VERSION_BUILD 10

#define VARJO_VERSION VARJO_MAKE_VERSION(VARJO_VERSION_MAJOR, VARJO_VERSION_MINOR, VARJO_VERSION_PATCH, VARJO_VERSION_BUILD)

#endif // VARJO_VERSION_DEFINES_H
