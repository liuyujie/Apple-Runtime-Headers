//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIUIWorkoutSwimmingSplit : NSObject
{
    int _splitDistance;
    int _strokeCount;
    int _strokeCountScaledToFillSplit;
    double _duration;
    double _distanceInUserUnit;
    double _durationScaledToFillSplit;
}

@property(nonatomic) double durationScaledToFillSplit; // @synthesize durationScaledToFillSplit=_durationScaledToFillSplit;
@property(nonatomic) int strokeCountScaledToFillSplit; // @synthesize strokeCountScaledToFillSplit=_strokeCountScaledToFillSplit;
@property(nonatomic) int strokeCount; // @synthesize strokeCount=_strokeCount;
@property(nonatomic) double distanceInUserUnit; // @synthesize distanceInUserUnit=_distanceInUserUnit;
@property(nonatomic) int splitDistance; // @synthesize splitDistance=_splitDistance;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (id)formattedStrokeCount;
- (double)_fractionToFillTotalSplitDistance;

@end

