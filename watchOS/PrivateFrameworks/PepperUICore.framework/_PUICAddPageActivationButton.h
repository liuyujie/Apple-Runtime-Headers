//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UIView;

@interface _PUICAddPageActivationButton : UIControl
{
    UIView *_scalingView;
    UIImageView *_plusImageView;
    _Bool _animatingHighlight;
}

- (void).cxx_destruct;
- (void)_animateHighlight:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

