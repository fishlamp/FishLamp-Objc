// 
// FLWsdlComplexType.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/5/13 3:45 PM with PackMule (3.0.0.29)
// 
// Project: FishLamp CodeWriter WSDL Interpreter
// Schema: FLWsdlObjects
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 


#import "FLWsdlSequenceArray.h"
#import "FLWsdlComplexType.h"
#import "FLWsdlChoiceArray.h"
#import "FLWsdlComplexContent.h"
#import "FLModelObject.h"

@implementation FLWsdlComplexType

@synthesize choice = _choice;
@synthesize complexContent = _complexContent;
#if FL_MRC
- (void) dealloc {
    [_sequence release];
    [_choice release];
    [_name release];
    [_complexContent release];
    [super dealloc];
}
#endif
@synthesize name = _name;
@synthesize sequence = _sequence;
+ (FLWsdlComplexType*) wsdlComplexType {
    return FLAutorelease([[[self class] alloc] init]);
}

@end
