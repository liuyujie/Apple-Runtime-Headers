//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPass, UIImageView, UILabel;

@interface NPKVASCardAppliedView : UIView
{
    _Bool _cardAccepted;
    PKPass *_pass;
    UIImageView *_iconView;
    UIView *_labelContainerView;
    UILabel *_labelView;
}

@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool cardAccepted; // @synthesize cardAccepted=_cardAccepted;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_updateLoyaltyText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
