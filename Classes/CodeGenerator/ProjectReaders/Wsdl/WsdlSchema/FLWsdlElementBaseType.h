// 
// FLWsdlElementBaseType.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/2/13 5:36 PM with PackMule (3.0.0.100)
// 
// Project: FishLamp CodeWriter WSDL Interpreter
// Schema: FLWsdlObjects
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLModelObject.h"

@class FLWsdlElement;
@class FLObjectDescriber;
@class FLWsdlSimpleType;
@class FLWsdlComplexType;

@interface FLWsdlElementBaseType : FLModelObject {
@private
    NSMutableArray* _simpleTypes;
    NSMutableArray* _complexTypes;
    NSMutableArray* _elements;
}

@property (readwrite, strong, nonatomic) NSMutableArray* complexTypes;
@property (readwrite, strong, nonatomic) NSMutableArray* elements;
@property (readwrite, strong, nonatomic) NSMutableArray* simpleTypes;

+ (FLWsdlElementBaseType*) wsdlElementBaseType;

@end
