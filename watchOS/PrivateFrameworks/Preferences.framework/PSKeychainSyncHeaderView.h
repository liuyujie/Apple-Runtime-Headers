//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    _Bool _usesCompactLayout;
}

@property(nonatomic) _Bool usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;
- (void).cxx_destruct;
- (float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (void)setTitleText:(id)arg1;
- (void)setDetailText:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end

