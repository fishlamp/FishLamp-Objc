// 
// FLCodeInputType.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/27/13 5:17 PM with PackMule (3.0.0.31)
// 
// Project: FishLamp Code Generator
// 
// Copyright 2013 (c) GreenTongue Software LLC, Mike Fullerton
// The FishLamp Framework is released under the MIT License: http://fishlamp.com/license
// 

#import "FLCodeInputType.h"

NSString* FLCodeInputTypeStringFromEnum(FLCodeInputType theEnum) {
    switch(theEnum) {
        case FLCodeInputTypeHttp:{
            return kFLCodeInputTypeHttp;
        }
        break;
        case FLCodeInputTypeFile:{
            return kFLCodeInputTypeFile;
        }
        break;
        case FLCodeInputTypeWsdl:{
            return kFLCodeInputTypeWsdl;
        }
        break;
    }
    return nil;
}

FLCodeInputType FLCodeInputTypeEnumFromString(NSString* theString) {
    static NSDictionary* s_enumLookup = nil;
    static dispatch_once_t s_lookupPredicate = 0;
    dispatch_once(&s_lookupPredicate, ^{
        s_enumLookup = [[NSDictionary alloc] initWithObjectsAndKeys:
            [NSNumber numberWithInteger:FLCodeInputTypeHttp], [kFLCodeInputTypeHttp lowercaseString],
            [NSNumber numberWithInteger:FLCodeInputTypeFile], [kFLCodeInputTypeFile lowercaseString],
            [NSNumber numberWithInteger:FLCodeInputTypeWsdl], [kFLCodeInputTypeWsdl lowercaseString],
            nil ];
    });
    NSNumber* value = [s_enumLookup objectForKey:[theString lowercaseString]];
    return value == nil ? NSNotFound : [value integerValue];
}

@implementation FLCodeInputTypeEnumSet
+ (id) enumSet{
    return FLAutorelease([[[self class] alloc] initWithValueLookup:(FLEnumSetEnumValueLookup*)  FLCodeInputTypeEnumFromString stringLookup:(FLEnumSetEnumStringLookup*) FLCodeInputTypeStringFromEnum]);
}
+ (id) enumSet:(NSString*) concatenatedEnumString {
    FLCodeInputTypeEnumSet* outObject = FLAutorelease([[[self class] alloc] initWithValueLookup:(FLEnumSetEnumValueLookup*)  FLCodeInputTypeEnumFromString stringLookup:(FLEnumSetEnumStringLookup*) FLCodeInputTypeStringFromEnum]);
    [outObject setConcatenatedString:concatenatedEnumString];
    return outObject;
}
@end
