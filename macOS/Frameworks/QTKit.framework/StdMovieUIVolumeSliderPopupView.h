//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

__attribute__((visibility("hidden")))
@interface StdMovieUIVolumeSliderPopupView : NSView
{
    struct CGRect knobRect;
    struct CGRect bgRect;
    struct CGRect oldbounds;
    double _value;
    double _minValue;
    double _maxValue;
    SEL _action;
    id _target;
    BOOL _continuous;
}

+ (void)fadeTimerStep:(id)arg1;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)fadeAway;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)setValue:(double)arg1;
- (double)value;
- (void)trackWithEvent:(id)arg1;
- (void)popupSliderWithEvent:(id)arg1 forView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)loadImages;
- (id)initWithFrame:(struct CGRect)arg1;

@end

