//
//  NSSize+FLAdditions.h
//  FishLamp-Objc
//
//  Created by Mike Fullerton on 11/13/13.
//  Copyright (c) 2013 Mike Fullerton. All rights reserved.
//

#import "FishLampMinimum.h"

#if __MAC_OS_X_VERSION_MIN_REQUIRED

#import "CGSizeGeometry+FLAdditions.h"

extern const NSSize NSSizeMax;

#define NSSizeScale(size, scaleFactor) \
            NSSizeFromCGSize(CGSizeScale(NSSizeToCGSize(size), scaleFactor))

#define NSSizeSwapValues(size) \
            NSSizeFromCGSize(CGSizeSwapValues(NSSizeToCGSize(size)))

#define NSSizeAddSizeToSize(addTo, delta) \
            NSSizeFromCGSize(CGSizeAddSizeToSize(NSSizeToCGSize(addTo), delta))

#define NSPointSubtractSizeFromSize(subtractFrom, delta) \
            NSSizeFromCGSize(CGPointSubtractSizeFromSize(c(subtractFrom), delta))

#define NSSizeIsEmpty(size) \
            FLSizeIsEmpty(NSSizeToCGSize(size))


#endif