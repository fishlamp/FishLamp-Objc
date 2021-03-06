// 
// FLWsdlPortType.h
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

@class FLWsdlOperation;
@class FLObjectDescriber;
@class FLWsdlServiceAddress;

@interface FLWsdlPortType : FLModelObject {
@private
    NSString* _binding;
    NSMutableArray* _operations;
    NSString* _name;
    FLWsdlServiceAddress* _address;
}

@property (readwrite, strong, nonatomic) FLWsdlServiceAddress* address;
@property (readwrite, strong, nonatomic) NSString* binding;
@property (readwrite, strong, nonatomic) NSString* name;
@property (readwrite, strong, nonatomic) NSMutableArray* operations;

+ (FLWsdlPortType*) wsdlPortType;

@end
