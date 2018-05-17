//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import "MLModelSpecificationLoader.h"
#import "MLModeling.h"

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSOrderedSet;

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling>
{
    BOOL _ouputSparse;
    BOOL _handleUnknown;
    NSOrderedSet *_featureEncoding;
}

+ (id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL handleUnknown; // @synthesize handleUnknown=_handleUnknown;
@property(readonly, nonatomic) BOOL ouputSparse; // @synthesize ouputSparse=_ouputSparse;
@property(readonly, nonatomic) NSOrderedSet *featureEncoding; // @synthesize featureEncoding=_featureEncoding;
- (void).cxx_destruct;
- (id)encodeFeatureValueIntString:(unsigned long long)arg1;
- (id)unknownDenseVector;
- (id)encodeFeatureValue:(id)arg1;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(BOOL)arg3 handleUnknown:(BOOL)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;

// Remaining properties
@property(readonly) MLModelInterface *interface;
@property(readonly) MLModelMetadata *metadata;
@property(readonly, nonatomic) MLModelDescription *modelDescription;

@end
