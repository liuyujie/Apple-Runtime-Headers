//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVContentPartnerKitUI/TVCKImageStackCollectionViewCell.h>

@class NSNumber, NSURL, TVCKBadgeOverlayView;

@interface TVCKStoreFavoriteItemCell : TVCKImageStackCollectionViewCell
{
    _Bool _editing;
    unsigned long long _contentCategory;
    NSURL *_imageURL;
    NSNumber *_badgeCount;
    id <TVCKStoreFavoriteItemCellDelegate> _delegate;
    TVCKBadgeOverlayView *_badgeOverlayView;
    struct CGSize _imageSize;
}

+ (id)reuseIdentifierForImageURL:(id)arg1;
+ (void)registerReuseIdentifiersWithCollectionView:(id)arg1;
+ (void)_configureCell:(id)arg1 withStackImageURL:(id)arg2 imageFormat:(long long)arg3 assetType:(long long)arg4 imageSize:(struct CGSize)arg5;
+ (void)_configureCell:(id)arg1 withCompiledArchiveImageURL:(id)arg2 assetType:(long long)arg3 imageSize:(struct CGSize)arg4;
+ (id)_formattedStringForBadgeCount:(id)arg1;
@property(retain, nonatomic) TVCKBadgeOverlayView *badgeOverlayView; // @synthesize badgeOverlayView=_badgeOverlayView;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <TVCKStoreFavoriteItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSNumber *badgeCount; // @synthesize badgeCount=_badgeCount;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long contentCategory; // @synthesize contentCategory=_contentCategory;
- (void).cxx_destruct;
- (double)_maxTitleWidthWithFocus:(_Bool)arg1;
- (id)_animatedTitleLabel;
- (Class)_labelClass;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_moveAllComponentsByOffset:(double)arg1;
- (double)_labelOffsetForIdleMode;
- (void)_applicationWillExitIdleMode:(id)arg1;
- (void)_applicationWillEnterIdleMode:(id)arg1;
- (void)prepareForReuse;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_setFocusDirection:(struct CGPoint)arg1;
- (void)setImageStackView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)_placeholderAssetType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

