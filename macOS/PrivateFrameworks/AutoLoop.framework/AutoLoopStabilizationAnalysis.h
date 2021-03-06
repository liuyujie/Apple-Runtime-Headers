//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICHomographyWrapper;

__attribute__((visibility("hidden")))
@interface AutoLoopStabilizationAnalysis : NSObject
{
    _Bool _wasPassThruAnalysis;
    ICHomographyWrapper *_sequentialAnalysisHomographies;
    ICHomographyWrapper *_directAnalysisHomographies;
    struct CGSize _inputMovieDimensions;
    CDStruct_1b6d18a9 _referenceFrameTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 referenceFrameTime; // @synthesize referenceFrameTime=_referenceFrameTime;
@property(readonly, nonatomic) _Bool wasPassThruAnalysis; // @synthesize wasPassThruAnalysis=_wasPassThruAnalysis;
@property(readonly, nonatomic) struct CGSize inputMovieDimensions; // @synthesize inputMovieDimensions=_inputMovieDimensions;
@property(readonly, retain) ICHomographyWrapper *directAnalysisHomographies; // @synthesize directAnalysisHomographies=_directAnalysisHomographies;
@property(readonly, retain) ICHomographyWrapper *sequentialAnalysisHomographies; // @synthesize sequentialAnalysisHomographies=_sequentialAnalysisHomographies;
- (void).cxx_destruct;
- (id)initWithSourceHomographies:(id)arg1 DirectTripodHomographies:(id)arg2 sourceMovieSize:(struct CGSize)arg3 passThru:(_Bool)arg4 refFrameTime:(CDStruct_1b6d18a9)arg5;

@end

