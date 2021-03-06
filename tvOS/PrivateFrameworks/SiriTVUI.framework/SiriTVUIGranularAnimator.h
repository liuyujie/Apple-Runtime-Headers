//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

@interface SiriTVUIGranularAnimator : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _animation;
    CDUnknownBlockType _completion;
    double _percentPerFrame;
    double _currentPercentage;
    double _endingPercentage;
    _Bool _countingDown;
    id <SiriTVUIGranularAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriTVUIGranularAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetAnimation;
- (void)_displayLinkFired:(id)arg1;
- (void)beginAnimation:(CDUnknownBlockType)arg1 withStartingPercentage:(double)arg2 endingPercentage:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)beginAnimationWithStartingPercentage:(double)arg1 endingPercentage:(double)arg2 duration:(double)arg3;
- (id)init;

@end

