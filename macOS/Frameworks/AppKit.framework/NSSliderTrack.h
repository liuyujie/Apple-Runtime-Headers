//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSliderKnob;

__attribute__((visibility("hidden")))
@interface NSSliderTrack : NSView
{
    CDStruct_5a39c0a2 _drawingState;
    NSSliderKnob *_knobMaskView;
}

- (void)drawRect:(struct CGRect)arg1;
@property struct CGRect knobMaskFrame;
@property CDStruct_5a39c0a2 drawingState;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

