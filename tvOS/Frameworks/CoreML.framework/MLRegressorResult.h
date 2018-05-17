//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLMultiArray;

@interface MLRegressorResult : NSObject
{
    MLMultiArray *_predictedValue;
    id <MLFeatureProvider> _additionalFeatures;
}

+ (id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithValue:(id)arg1;
@property(readonly) id <MLFeatureProvider> additionalFeatures; // @synthesize additionalFeatures=_additionalFeatures;
@property(readonly) MLMultiArray *predictedValue; // @synthesize predictedValue=_predictedValue;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 additionalFeatures:(id)arg2;
- (id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1;

@end
