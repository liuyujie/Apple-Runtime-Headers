//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@class REFeatureValue;

@interface _REBinaryFeatureTransformer : REFeatureTransformer
{
    REFeatureValue *_threshold;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)_transform:(id)arg1;
- (unsigned int)_outputType;
- (unsigned int)_featureCount;
- (int)_bitCount;
- (id)initWithThreshold:(id)arg1;

@end
