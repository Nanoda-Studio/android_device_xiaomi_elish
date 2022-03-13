/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t elish_info = {
    .hwc_value = "CN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "elish"
    .marketname = "",
    .model = "XM2105K81AC",
    .build_fingerprint = "qti/qssi/qssi:11/RKQ1.200826.002 V12.5.7.0.RKYCNXM:user/release-keys",

    .nfc = false,

};

static const std::vector<variant_info_t> variants = {
    elish_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
