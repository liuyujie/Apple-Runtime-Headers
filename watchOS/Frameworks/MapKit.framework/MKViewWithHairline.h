//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MKViewWithHairline : UIView
{
    UIView *_bottomHairline;
    UIView *_topHairline;
    UIColor *_hairlineColor;
    float _leftHairlineInset;
    float _rightHairlineInset;
}

@property(nonatomic) float rightHairlineInset; // @synthesize rightHairlineInset=_rightHairlineInset;
@property(nonatomic) float leftHairlineInset; // @synthesize leftHairlineInset=_leftHairlineInset;
@property(retain, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;
@property(nonatomic, getter=isTopHairlineHidden) _Bool topHairlineHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end

