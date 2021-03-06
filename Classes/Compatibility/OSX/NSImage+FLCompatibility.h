//
//  SDKImage.h
//  FishLampCocoa
//
//  Created by Mike Fullerton on 12/13/12.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#if OSX
#import <Cocoa/Cocoa.h>
#import <AppKit/AppKit.h>


@interface NSImage (FLCompatibility)
- (CGImageRef) CGImage;
- (id) initWithCGImage:(CGImageRef) image;
+ (NSImage*) imageWithCGImage:(CGImageRef) image;
+ (NSImage*) imageWithData:(NSData*) data;
@end

#endif

