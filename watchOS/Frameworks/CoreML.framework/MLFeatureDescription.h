//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying>
{
    _Bool _optional;
    NSString *_name;
    int _type;
    NSDictionary *_valueConstraints;
    MLMultiArrayConstraint *_multiArrayConstraintCached;
    MLImageConstraint *_imageConstraintCached;
    MLDictionaryConstraint *_dictionaryConstraintCached;
    MLSequenceConstraint *_sequenceConstraintCached;
}

+ (id)featureDescriptionWithName:(id)arg1 type:(int)arg2 optional:(_Bool)arg3 constraints:(id)arg4;
@property(readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached; // @synthesize sequenceConstraintCached=_sequenceConstraintCached;
@property(readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached; // @synthesize dictionaryConstraintCached=_dictionaryConstraintCached;
@property(readonly, nonatomic) MLImageConstraint *imageConstraintCached; // @synthesize imageConstraintCached=_imageConstraintCached;
@property(readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached; // @synthesize multiArrayConstraintCached=_multiArrayConstraintCached;
@property(retain) NSDictionary *valueConstraints; // @synthesize valueConstraints=_valueConstraints;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)allowsValuesWithDescription:(id)arg1;
- (id)sequenceConstraint;
- (id)dictionaryConstraint;
- (id)imageConstraint;
- (id)multiArrayConstraint;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (_Bool)isAllowedValue:(id)arg1;
- (id)initWithName:(id)arg1 type:(int)arg2 optional:(_Bool)arg3 contraints:(id)arg4;
- (id)debugQuickLookObject;

@end

