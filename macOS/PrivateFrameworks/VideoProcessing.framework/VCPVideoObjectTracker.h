//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCPCtrTracker;

@interface VCPVideoObjectTracker : NSObject
{
    VCPCtrTracker *_correlationTracker;
    float _confidence;
    int _lostCount;
    CDStruct_1b6d18a9 _start;
    struct CGRect _objectBoundsInitial;
    struct CGRect _objectBounds;
}

@property(readonly, nonatomic) int lostCount; // @synthesize lostCount=_lostCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 start; // @synthesize start=_start;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) struct CGRect objectBounds; // @synthesize objectBounds=_objectBounds;
@property(readonly, nonatomic) struct CGRect objectBoundsInitial; // @synthesize objectBoundsInitial=_objectBoundsInitial;
- (void).cxx_destruct;
- (int)trackObjectInFrame:(struct __CVBuffer *)arg1;
- (id)initWithObjectBounds:(struct CGRect)arg1 inFrame:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3;

@end
