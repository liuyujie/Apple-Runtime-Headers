//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NTKUpNextMLFeatureSet : NSObject <NSCopying>
{
    unsigned int _hash;
    struct array<NTKFeatureValue, 22> _features;
    struct bitset<22> _isFloat;
    struct bitset<22> _isValid;
}

- (id).cxx_construct;
- (id)featureSetByUnioningSet:(id)arg1;
- (void)enumerateFloatFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIntegerFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (float)floatValueForFeature:(unsigned int)arg1;
- (unsigned int)integerValueForFeature:(unsigned int)arg1;
- (_Bool)hasFloatValueForFeature:(unsigned int)arg1;
- (_Bool)hasValueForFeature:(unsigned int)arg1;
- (void)clearFeature:(unsigned int)arg1;
- (void)_setValue:(CDUnion_a867fccf)arg1 isFloat:(_Bool)arg2 forFeature:(unsigned int)arg3;
- (void)setFloatValue:(float)arg1 forFeature:(unsigned int)arg2;
- (void)setIntegerValue:(unsigned int)arg1 forFeature:(unsigned int)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
