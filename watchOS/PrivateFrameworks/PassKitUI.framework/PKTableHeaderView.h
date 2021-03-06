//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKTableHeaderView : UIView
{
    struct CGSize _originalImageViewSize;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_checkmarkView;
    _Bool _shouldResizeImageToFit;
    _Bool _accessoryViewsDisabled;
    unsigned int _style;
    float _topPadding;
    float _bottomPadding;
}

@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool accessoryViewsDisabled; // @synthesize accessoryViewsDisabled=_accessoryViewsDisabled;
@property(nonatomic) float bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool shouldResizeImageToFit; // @synthesize shouldResizeImageToFit=_shouldResizeImageToFit;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (void)_updateFonts;
- (_Bool)_hasAccessibilityLargeText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)_sizeThatFitsExcludingImage:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)_updateImageView;
- (void)setImageViewImage:(id)arg1 withSize:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(_Bool)arg2;
- (void)setPassSnapshotUsingDefaultSize:(id)arg1;
- (void)dealloc;

@end

