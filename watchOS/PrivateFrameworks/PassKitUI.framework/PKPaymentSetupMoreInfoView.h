//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class PKPassView, PKPaymentPass, PKPaymentSetupMoreInfoItem, PKTableHeaderView, UIImageView;

@interface PKPaymentSetupMoreInfoView : UIScrollView
{
    PKPassView *_passView;
    struct CGSize _boundSize;
    PKPaymentSetupMoreInfoItem *_moreInfoItem;
    PKPaymentPass *_pass;
    int _context;
    UIImageView *_customImageView;
    PKTableHeaderView *_headerView;
}

@property(readonly, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(readonly, nonatomic) int context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKPaymentSetupMoreInfoItem *moreInfoItem; // @synthesize moreInfoItem=_moreInfoItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(int)arg3;
- (void)pk_applyAppearance:(id)arg1;

@end

