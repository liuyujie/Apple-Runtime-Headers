//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUCrossFadeViewAnimator : NSObject
{
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(CDUnknownBlockType)arg2;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetView:(id)arg1;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end
