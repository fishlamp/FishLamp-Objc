//
//  FLObjcHeaderFile.h
//  CodeGenerator
//
//  Created by Mike Fullerton on 5/31/13.
//  Copyright (c) 2013 Mike Fullerton. All rights reserved.
//

#import "FLObjcFile.h"

@interface FLObjcHeaderFile : FLObjcFile
+ (id) headerFile:(NSString*) rootFileName;
@end
