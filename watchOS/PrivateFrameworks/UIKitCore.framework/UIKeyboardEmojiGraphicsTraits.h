//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphicsTraits : NSObject
{
    float _emojiKeyWidth;
    float _minimumLineSpacing;
    float _minimumInteritemSpacing;
    float _columnOffset;
    float _sectionOffset;
    float _categoryHeaderHeight;
    float _categoryHeaderLeftPadding;
    float _categorySelectedCirWidth;
    float _scrubViewTopPadding;
    float _categoryHeaderFontSize;
    int _prepolulatedRecentCount;
    float _inputViewLeftMostPadding;
    float _inputViewRightMostPadding;
    float _rightBiasPercentage;
    float _scrollSnapOffset;
    float _alertTextWidth;
    struct CGSize _fakeEmojiKeySize;
}

+ (id)emojiGraphicsTraitsWithScreenTraits:(id)arg1;
@property(readonly, nonatomic) float alertTextWidth; // @synthesize alertTextWidth=_alertTextWidth;
@property(readonly, nonatomic) float scrollSnapOffset; // @synthesize scrollSnapOffset=_scrollSnapOffset;
@property(readonly, nonatomic) float rightBiasPercentage; // @synthesize rightBiasPercentage=_rightBiasPercentage;
@property(readonly, nonatomic) float inputViewRightMostPadding; // @synthesize inputViewRightMostPadding=_inputViewRightMostPadding;
@property(readonly, nonatomic) float inputViewLeftMostPadding; // @synthesize inputViewLeftMostPadding=_inputViewLeftMostPadding;
@property(readonly, nonatomic) int prepolulatedRecentCount; // @synthesize prepolulatedRecentCount=_prepolulatedRecentCount;
@property(readonly, nonatomic) float categoryHeaderFontSize; // @synthesize categoryHeaderFontSize=_categoryHeaderFontSize;
@property(readonly, nonatomic) struct CGSize fakeEmojiKeySize; // @synthesize fakeEmojiKeySize=_fakeEmojiKeySize;
@property(readonly, nonatomic) float scrubViewTopPadding; // @synthesize scrubViewTopPadding=_scrubViewTopPadding;
@property(readonly, nonatomic) float categorySelectedCirWidth; // @synthesize categorySelectedCirWidth=_categorySelectedCirWidth;
@property(readonly, nonatomic) float categoryHeaderLeftPadding; // @synthesize categoryHeaderLeftPadding=_categoryHeaderLeftPadding;
@property(readonly, nonatomic) float categoryHeaderHeight; // @synthesize categoryHeaderHeight=_categoryHeaderHeight;
@property(readonly, nonatomic) float sectionOffset; // @synthesize sectionOffset=_sectionOffset;
@property(readonly, nonatomic) float columnOffset; // @synthesize columnOffset=_columnOffset;
@property(readonly, nonatomic) float minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) float minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(readonly, nonatomic) float emojiKeyWidth; // @synthesize emojiKeyWidth=_emojiKeyWidth;
- (id)initWithScreenTrait:(id)arg1;

@end
