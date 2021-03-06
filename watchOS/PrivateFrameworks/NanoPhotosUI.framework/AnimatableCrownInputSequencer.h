//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICCrownInputSequencer.h"

@class NSTimer;

@interface AnimatableCrownInputSequencer : PUICCrownInputSequencer
{
    NSTimer *_animationTimer;
    double _animationStart;
    double _animationStop;
    double _animationProgress;
    double _animationStepSize;
}

- (void).cxx_destruct;
- (void)updateWithCrownInputEvent:(id)arg1;
- (void)_animateOffsetTick:(id)arg1;
- (void)setOffset:(double)arg1 animated:(_Bool)arg2;
- (void)setOffset:(double)arg1;
- (void)_invalidateAnimationTimer;

@end

