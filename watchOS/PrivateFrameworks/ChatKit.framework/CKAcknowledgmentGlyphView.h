//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface CKAcknowledgmentGlyphView : UIView
{
    UIColor *_glyphColor;
    struct CGPoint _glyphOffset;
    double _animationDuration;
}

+ (void)cacheGlyphView:(id)arg1;
+ (id)glyphViewForAcknowledgmentType:(int)arg1 glyphColor:(BOOL)arg2;
+ (id)viewCache;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) struct CGPoint glyphOffset; // @synthesize glyphOffset=_glyphOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) int acknowledgmentType; // @dynamic acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end
