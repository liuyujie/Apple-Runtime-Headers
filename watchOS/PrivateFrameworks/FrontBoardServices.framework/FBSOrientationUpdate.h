//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSOrientationUpdate : NSObject
{
    int _orientation;
    int _rotationDirection;
    double _duration;
}

@property(nonatomic) int rotationDirection; // @synthesize rotationDirection=_rotationDirection;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (id)description;
- (id)initWithOrientation:(int)arg1 duration:(double)arg2 rotationDirection:(int)arg3;
- (id)init;

@end

