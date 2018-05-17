//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTStrokeLayerAbstractStack.h>

@class TSTMutableStrokeLayer, TSTStrokeLayer, TSTStrokeOrderedLayer;

__attribute__((visibility("hidden")))
@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack
{
    TSTStrokeLayer *_defaultMinorStrokeLayer;
    TSTStrokeLayer *_defaultMajorStrokeLayer;
    TSTStrokeLayer *_customUnorderedStrokeLayer;
    TSTStrokeOrderedLayer *_customOrderedStrokeLayer;
    TSTMutableStrokeLayer *_clearedMinorStrokeLayer;
    TSTMutableStrokeLayer *_clearedMajorStrokeLayer;
    TSTMutableStrokeLayer *_dynamicUnorderedStrokeLayer;
    TSTStrokeOrderedLayer *_dynamicOrderedStrokeLayer;
    TSTMutableStrokeLayer *_spillMinorStrokeLayer;
    TSTMutableStrokeLayer *_spillMajorStrokeLayer;
}

+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 atIndex:(long long)arg3;
+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 inRange:(struct TSTSimpleRange)arg3 cachedMax:(double)arg4;
+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 atRowIndex:(long long)arg3;
+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange)arg3 cachedMax:(double)arg4;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 atColumnIndex:(long long)arg3;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange)arg3 cachedMax:(double)arg4;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
@property(retain, nonatomic) TSTMutableStrokeLayer *spillMajorStrokeLayer; // @synthesize spillMajorStrokeLayer=_spillMajorStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *spillMinorStrokeLayer; // @synthesize spillMinorStrokeLayer=_spillMinorStrokeLayer;
@property(retain, nonatomic) TSTStrokeOrderedLayer *dynamicOrderedStrokeLayer; // @synthesize dynamicOrderedStrokeLayer=_dynamicOrderedStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *dynamicUnorderedStrokeLayer; // @synthesize dynamicUnorderedStrokeLayer=_dynamicUnorderedStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *clearedMajorStrokeLayer; // @synthesize clearedMajorStrokeLayer=_clearedMajorStrokeLayer;
@property(retain, nonatomic) TSTMutableStrokeLayer *clearedMinorStrokeLayer; // @synthesize clearedMinorStrokeLayer=_clearedMinorStrokeLayer;
@property(retain, nonatomic) TSTStrokeOrderedLayer *customOrderedStrokeLayer; // @synthesize customOrderedStrokeLayer=_customOrderedStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *customUnorderedStrokeLayer; // @synthesize customUnorderedStrokeLayer=_customUnorderedStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *defaultMajorStrokeLayer; // @synthesize defaultMajorStrokeLayer=_defaultMajorStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *defaultMinorStrokeLayer; // @synthesize defaultMinorStrokeLayer=_defaultMinorStrokeLayer;
- (void).cxx_destruct;
- (void)lockForWrite;
- (void)lockForRead;
- (void)unlock;
- (double)p_widthOfStrokesAtIndex:(long long)arg1;
- (double)p_maxWidthOfStrokesInRange:(struct TSTSimpleRange)arg1 cachedMax:(double)arg2;
- (void)invalidateSpillStrokes;
- (id)portalledStrokeLayer;
- (unsigned long long)count;
- (id)p_strokeLayerEnumeration;
- (id)initWithReferenceOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithCopyOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;

@end
