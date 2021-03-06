//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAReplicatorLayer;

@interface ArouetThinkingDotsView : UIView
{
    _Bool _thinking;
    float _dotRadius;
    float _dotSpacing;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    struct CGPoint _dotOffset;
}

@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(nonatomic) _Bool thinking; // @synthesize thinking=_thinking;
@property(nonatomic) float dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property(nonatomic) struct CGPoint dotOffset; // @synthesize dotOffset=_dotOffset;
@property(nonatomic) float dotRadius; // @synthesize dotRadius=_dotRadius;
- (void).cxx_destruct;
- (void)stopThinking;
- (void)startThinking;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_endThinkingDots;
- (void)_buildThinkingDots;

@end

