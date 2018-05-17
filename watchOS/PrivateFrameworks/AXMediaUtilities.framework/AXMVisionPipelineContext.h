//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AXMVisionAnalysisOptions, AXMVisionResult, CIImage, NSArray, NSDictionary, NSError, NSMutableArray, NSNumber;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding>
{
    CIImage *_sourceImage;
    NSDictionary *_sourceParameters;
    _Bool _sourceProvidesOwnResults;
    struct __CVBuffer *_nativeFormatPixelBuffer;
    NSMutableArray *_resultHandlers;
    struct CGColorSpace *_extendedSRGBColorSpace;
    struct CGSize _cachedSize;
    _Bool _shouldProcessRemotely;
    _Bool _shouldCallCompletionHandlersForEngineBusyError;
    _Bool _shouldCallCompletionHandlersForEmptyResultSet;
    _Bool _evaluationExclusivelyUsesVisionFramework;
    NSError *_error;
    AXMVisionAnalysisOptions *_analysisOptions;
    NSNumber *_appliedImageOrientation;
    id <NSCopying> _cacheKey;
    unsigned int _sequenceID;
    NSMutableArray *_features;
    AXMVisionResult *_result;
    double _creationTime;
    double _processingStartTime;
    double _processingEndTime;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithSourceParameters:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) AXMVisionResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property(nonatomic) unsigned int sequenceID; // @synthesize sequenceID=_sequenceID;
@property(nonatomic) double processingEndTime; // @synthesize processingEndTime=_processingEndTime;
@property(nonatomic) double processingStartTime; // @synthesize processingStartTime=_processingStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) _Bool evaluationExclusivelyUsesVisionFramework; // @synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework;
@property(nonatomic) _Bool shouldCallCompletionHandlersForEmptyResultSet; // @synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet;
@property(nonatomic) _Bool shouldCallCompletionHandlersForEngineBusyError; // @synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError;
@property(retain, nonatomic) id <NSCopying> cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool shouldProcessRemotely; // @synthesize shouldProcessRemotely=_shouldProcessRemotely;
- (void).cxx_destruct;
- (id)generateImageRepresentation;
- (id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2;
- (void)errorOccurred:(id)arg1;
- (void)appendFeature:(id)arg1;
- (id)analyzeBuffer:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)nativeFormatPixelBufferRenderIfNeeded:(_Bool)arg1;
- (void)produceImage:(CDUnknownBlockType)arg1;
- (struct CGColorSpace *)imageColorSpace;
- (void)addResultHandlers:(id)arg1;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *resultHandlers;
- (void)_discardSourceImageIfPossible;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) _Bool sourceProvidesResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithSourceParameters:(id)arg1 options:(id)arg2;

@end
