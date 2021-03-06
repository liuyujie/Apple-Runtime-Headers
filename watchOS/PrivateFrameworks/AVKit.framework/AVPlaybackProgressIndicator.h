//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint;

@interface AVPlaybackProgressIndicator : UIView
{
    double _playbackProgress;
    NSLayoutConstraint *_progressViewWidthLayoutConstraint;
}

- (void).cxx_destruct;
- (void)_updateProgressViewWidthLayoutConstraintWithPlaybackProgress:(double)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPlaybackProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double playbackProgress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

