//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "UIInterfaceActionVisualBackgroundDisplaying.h"
#import "UIInterfaceActionVisualGroupBackgroundDisplaying.h"

@class NSMutableDictionary, NSString, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    _Bool _isHighlighted;
    _Bool _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
    _Bool _shouldUseTintColorAsBackgroundColor;
    _Bool _shouldShowShadow;
}

+ (struct CGSize)backgroundInsetAmount;
@property(nonatomic) _Bool shouldShowShadow; // @synthesize shouldShowShadow=_shouldShowShadow;
@property(nonatomic) _Bool shouldUseTintColorAsBackgroundColor; // @synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor;
- (void).cxx_destruct;
- (id)_displayedBackgroundColor;
- (float)_alphaForHighlighted:(_Bool)arg1 pressed:(_Bool)arg2;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned int)arg1;
- (void)_setContinuousCornerRadius:(float)arg1;
- (void)setCornerRadius:(float)arg1;
- (float)alphaForState:(unsigned int)arg1;
- (void)setAlpha:(float)arg1 forState:(unsigned int)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
