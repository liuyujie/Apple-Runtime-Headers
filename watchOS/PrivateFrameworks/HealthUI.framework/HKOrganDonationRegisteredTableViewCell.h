//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell
{
    UILabel *_introLabel;
    UILabel *_registrarLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *registrarLabel; // @synthesize registrarLabel=_registrarLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
