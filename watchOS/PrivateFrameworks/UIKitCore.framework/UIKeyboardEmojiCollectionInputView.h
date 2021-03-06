//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardEmojiKeyView.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSIndexPath, NSString, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder<UIKBEmojiHitTestResponder>;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIKeyboardEmojiCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIKeyboardEmojiCategory *_category;
    NSIndexPath *_tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isDraggingInputView;
    unsigned int _currentSection;
    CDUnknownBlockType _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

@property(nonatomic) NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) _Bool isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property UIKeyboardEmojiCategory *category; // @synthesize category=_category;
- (_Bool)_shouldReverseLayoutDirection;
- (int)updateToCategoryWithOffsetPercentage:(float)arg1;
- (void)updateToCategory:(int)arg1;
- (void)didMoveToWindow;
- (int)indexForPrettyCategoryDisplay:(id)arg1;
- (float)snappedXOffsetForOffset:(float)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)firstFullyVisibleHeader;
- (id)itemInRect:(struct CGRect)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (int)didInputSubTree:(id)arg1;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;
- (id)subTreeHitTest:(struct CGPoint)arg1;
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;
- (id)emojiBaseString:(id)arg1;
- (id)emojiBaseFirstCharacterString:(id)arg1;
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;
- (_Bool)_userHasSelectedSkinToneEmoji;
- (void)dimKeys:(id)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

