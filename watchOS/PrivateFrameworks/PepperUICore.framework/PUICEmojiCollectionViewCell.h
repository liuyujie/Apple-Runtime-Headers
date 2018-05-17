//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIFont;

@interface PUICEmojiCollectionViewCell : UICollectionViewCell
{
    _Bool _platterEnabled;
    NSString *_text;
    float _fontSize;
    UIFont *_font;
}

+ (float)deselectCellAnimationDuration;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool platterEnabled; // @synthesize platterEnabled=_platterEnabled;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)emojiPlatterColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end
