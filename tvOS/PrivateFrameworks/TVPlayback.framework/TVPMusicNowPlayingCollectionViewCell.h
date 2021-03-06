//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIView, _UIStackedImageConfiguration;

@interface TVPMusicNowPlayingCollectionViewCell : UICollectionViewCell
{
    UIView *_videoContainerView;
    id <TVPMusicNowPlayingImage> _image;
    UILabel *_songTitleLabel;
    UILabel *_artistNameLabel;
    UIView *_bottomAccessoryContainerView;
    _Bool _focused;
    _Bool _subheadingsVisible;
    _Bool _animatesAccessoryViews;
    _Bool _singleCoverMode;
    _Bool _focusEffectsDisabled;
    long long _placeholderType;
    UIView *_videoView;
    NSString *_songTitle;
    NSString *_artistName;
    UIView *_bottomAccessoryView;
    UIImageView *_imageView;
    UIImage *_placeholderImage;
    _UIStackedImageConfiguration *_defaultImageConfiguration;
    _UIStackedImageConfiguration *_singleCoverImageConfiguration;
}

@property(readonly, nonatomic) _UIStackedImageConfiguration *singleCoverImageConfiguration; // @synthesize singleCoverImageConfiguration=_singleCoverImageConfiguration;
@property(readonly, nonatomic) _UIStackedImageConfiguration *defaultImageConfiguration; // @synthesize defaultImageConfiguration=_defaultImageConfiguration;
@property(nonatomic, getter=areFocusEffectsDisabled) _Bool focusEffectsDisabled; // @synthesize focusEffectsDisabled=_focusEffectsDisabled;
@property(nonatomic, getter=isSingleCoverMode) _Bool singleCoverMode; // @synthesize singleCoverMode=_singleCoverMode;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(nonatomic) _Bool animatesAccessoryViews; // @synthesize animatesAccessoryViews=_animatesAccessoryViews;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) long long placeholderType; // @synthesize placeholderType=_placeholderType;
- (void).cxx_destruct;
- (id)_addSubheadLabelWithFont:(id)arg1;
- (void)_updateLabelVisibility;
- (_Bool)_labelsHiddenForCurrentState;
- (void)_updateImageViewStateFocused:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (_Bool)_shouldShowFocusEffects;
- (void)_updateInterfaceForTraitCollection:(id)arg1;
- (id)_placeholderImageForType:(long long)arg1;
- (_Bool)hideArtwork;
- (void)setHideArtwork:(_Bool)arg1;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setVideoView:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

