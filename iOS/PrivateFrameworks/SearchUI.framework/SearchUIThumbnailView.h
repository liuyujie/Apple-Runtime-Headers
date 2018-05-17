//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SFDetailedRowCardSection, SFSearchResult, SearchUIButton, SearchUIImageView;

@interface SearchUIThumbnailView : UIView
{
    SFSearchResult *_result;
    SFDetailedRowCardSection *_detailedCardSection;
    SearchUIImageView *_imageView;
    SearchUIButton *_overlayPlayButton;
}

+ (id)thumbnailForResult:(id)arg1;
@property(retain) SearchUIButton *overlayPlayButton; // @synthesize overlayPlayButton=_overlayPlayButton;
@property(retain) SearchUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) SFDetailedRowCardSection *detailedCardSection; // @synthesize detailedCardSection=_detailedCardSection;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)preventThumbnailScaling;
- (void)showOverlayPlayButton;
- (_Bool)shouldVerticallyCenter;
- (void)appIconImageDidChange:(id)arg1;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)updateWithResult:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

@end
