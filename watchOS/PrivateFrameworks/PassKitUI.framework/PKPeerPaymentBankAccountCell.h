//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UIView;

@interface PKPeerPaymentBankAccountCell : UITableViewCell
{
    UIView *_bottomSeperator;
    UIView *_topSeperator;
    NSString *_bankName;
    NSString *_accountNumber;
    UIButton *_editButton;
}

+ (float)cellHeight;
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

