//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface GKTVBulletinScrollingAccessoryView : UIView
{
    long long _style;
    _Bool _animating;
    UILabel *_label1;
    UILabel *_label2;
}

+ (id)caption2Font;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(readonly, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)_setupConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

