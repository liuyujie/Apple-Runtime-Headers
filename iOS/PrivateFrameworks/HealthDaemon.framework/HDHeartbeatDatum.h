//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HDHeartbeatDatum : NSObject
{
    _Bool _precededByGap;
    double _timeSinceSequenceStart;
}

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(_Bool)arg2;
@property(readonly, nonatomic) _Bool precededByGap; // @synthesize precededByGap=_precededByGap;
@property(readonly, nonatomic) double timeSinceSequenceStart; // @synthesize timeSinceSequenceStart=_timeSinceSequenceStart;

@end

