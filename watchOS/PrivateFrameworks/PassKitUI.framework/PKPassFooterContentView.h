//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKLinkedAppIconView, PKPass, PKPaymentPass, UIButton;

@interface PKPassFooterContentView : UIView
{
    _Bool _invalidated;
    int _style;
    id <PKPassFooterContentViewDelegate> _delegate;
    PKPass *_pass;
    PKLinkedAppIconView *_appIconView;
    UIButton *_infoButton;
    UIView *_bottomRule;
}

@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) id <PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (float)_bottomRulePadding;
- (void)_infoButtonPressed:(id)arg1;
@property(readonly, nonatomic, getter=isPassAuthorized) _Bool passAuthorized;
- (void)invalidate;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 pass:(id)arg2;

@end
