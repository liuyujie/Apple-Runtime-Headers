//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TLKVibrantLabel;

@interface TLKBadgedLabel : UIView
{
    _Bool _shouldBadge;
    unsigned long long _style;
    TLKVibrantLabel *_label;
}

@property(retain) TLKVibrantLabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updateAppearance;
- (id)init;

@end

