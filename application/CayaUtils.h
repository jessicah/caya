/*
 * Copyright 2009-2011, Pier Luigi Fiorini. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef _CAYA_UTILS_H
#define _CAYA_UTILS_H

#include <image.h>

#include <Mime.h>
#include <Resources.h>

#include "CayaConstants.h"

const char* CayaStatusToString(CayaStatus status);

BResources* CayaResources();

const char*	CayaAccountsPath();
const char*	CayaAccountPath(const char* signature);

extern "C" status_t our_image(image_info& image);

#endif	// _CAYA_UTILS_H
